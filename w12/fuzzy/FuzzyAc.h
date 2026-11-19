#ifndef FUZZY_AC_H
#define FUZZY_AC_H

#include <Arduino.h>

// ====================== 隸屬函數 ======================
// 梯形：a→b 上升、b→c 平頂(=1)、c→d 下降
inline float trapMF(float x, float a, float b, float c, float d) {
  if (x < a || x > d) return 0;
  if (x >= b && x <= c) return 1;
  if (x >= a && x < b) return (x - a) / (b - a);
  return (d - x) / (d - c);
}

// 三角形：a→b 上升、b 為峰值、b→c 下降
inline float triMF(float x, float a, float b, float c) {
  if (x <= a || x >= c) return 0;
  if (x == b) return 1;
  return (x < b) ? (x - a) / (b - a) : (c - x) / (c - b);
}

// ====================== 模糊推論 ======================
// 輸入：溫度 t (°C)、濕度 h (%)
// 輸出：wLow / wMid / wHigh = 弱/中/強冷的聚合權重
//       power = 0~100 (%) 解模糊化後的功率
inline void fuzzyAc(float t, float h,
                    float &wLow, float &wMid, float &wHigh, int &power) {
  // 1. 模糊化
  float comf = triMF(t, 22, 24.5, 27);        // 舒適
  float warm = triMF(t, 24.5, 27, 29.5);      // 微熱
  float hot  = trapMF(t, 27, 29.5, 36, 36);   // 炎熱
  // (冷涼 trapMF(t,15,15,22,24.5) 沒有任何規則用到，故省略)

  float dry       = trapMF(h, 30, 30, 55, 68);    // 乾燥
  float humid     = triMF(h, 55, 68, 82);         // 潮濕
  float veryHumid = trapMF(h, 68, 82, 100, 100);  // 極濕

  // 2. 規則庫（AND = min，OR = max）；out: 0=弱冷 1=中冷 2=強冷
  const int RULE_N = 7;
  float   w[RULE_N];
  uint8_t out[RULE_N];

  w[0] = min(comf, humid);                 out[0] = 0;  // 舒適 且 潮濕 → 弱冷
  w[1] = min(comf, veryHumid);             out[1] = 0;  // 舒適 且 極濕 → 弱冷
  w[2] = min(warm, dry);                   out[2] = 0;  // 微熱 且 乾燥 → 弱冷
  w[3] = min(warm, humid);                 out[3] = 1;  // 微熱 且 潮濕 → 中冷
  w[4] = min(warm, veryHumid);             out[4] = 2;  // 微熱 且 極濕 → 強冷
  w[5] = min(hot, dry);                    out[5] = 1;  // 炎熱 且 乾燥 → 中冷
  w[6] = min(hot, max(humid, veryHumid));  out[6] = 2;  // 炎熱 且 潮濕/極濕 → 強冷

  // 只留權重 > 0.01 的規則，由大到小排序，取前 4 條
  int idx[RULE_N];
  int n = 0;
  for (int i = 0; i < RULE_N; i++) {
    if (w[i] > 0.01) idx[n++] = i;
  }
  for (int i = 1; i < n; i++) {            // 穩定插入排序
    int k = idx[i];
    int j = i - 1;
    while (j >= 0 && w[idx[j]] < w[k]) {
      idx[j + 1] = idx[j];
      j--;
    }
    idx[j + 1] = k;
  }
  if (n > 4) n = 4;

  // 同一輸出類別取最大權重
  wLow = 0; wMid = 0; wHigh = 0;
  for (int i = 0; i < n; i++) {
    int r = idx[i];
    if (out[r] == 0 && w[r] > wLow)  wLow  = w[r];
    if (out[r] == 1 && w[r] > wMid)  wMid  = w[r];
    if (out[r] == 2 && w[r] > wHigh) wHigh = w[r];
  }

  // 3. 重心法解模糊化（x = 0~100，步進 2）
  float num = 0, den = 0;
  for (int x = 0; x <= 100; x += 2) {
    float muLow  = min(wLow,  trapMF(x, 0, 0, 20, 45));
    float muMid  = min(wMid,  triMF(x, 25, 50, 75));
    float muHigh = min(wHigh, trapMF(x, 55, 80, 100, 100));
    float mu = max(muLow, max(muMid, muHigh));
    num += x * mu;
    den += mu;
  }
  power = (den > 0) ? (int)(num / den + 0.5) : 0;
}

#endif
