<script setup>
import { ref, computed } from 'vue'

const temp = ref(25.9)
const hum = ref(88)

const presets = [
  { label: '盲區 25.9°C / 88%', t: 25.9, h: 88 },
  { label: '極熱乾 32°C / 55%', t: 32.0, h: 55 },
  { label: '臨界 26.1°C / 71%', t: 26.1, h: 71 },
  { label: '舒適 23°C / 60%', t: 23.0, h: 60 },
]

function applyPreset(p) {
  temp.value = p.t
  hum.value = p.h
}

// 修正邊界條件：允許左右端點 x === a 或 x === d 時正常計算（解決 100% 濕度或極端溫度變成 0 的問題）
function trapMF(x, a, b, c, d) {
  if (x < a || x > d) return 0
  if (x >= b && x <= c) return 1
  if (x >= a && x < b) return (x - a) / (b - a)
  return (d - x) / (d - c)
}

function triMF(x, a, b, c) {
  if (x <= a || x >= c) return 0
  if (x === b) return 1
  return x < b ? (x - a) / (b - a) : (c - x) / (c - b)
}

// 1. 模糊化計算
const tDeg = computed(() => ({
  cool: trapMF(temp.value, 15, 15, 22, 24.5),
  comf: triMF(temp.value, 22, 24.5, 27),
  warm: triMF(temp.value, 24.5, 27, 29.5),
  hot: trapMF(temp.value, 27, 29.5, 36, 36),
}))

const hDeg = computed(() => ({
  dry: trapMF(hum.value, 30, 30, 55, 68),
  humid: triMF(hum.value, 55, 68, 82),
  veryHumid: trapMF(hum.value, 68, 82, 100, 100),
}))

// 動態顯示目前佔比最高的語意標籤
const topTempTags = computed(() => {
  const t = tDeg.value
  const list = [
    { label: '冷涼', val: t.cool },
    { label: '舒適', val: t.comf },
    { label: '微熱', val: t.warm },
    { label: '炎熱', val: t.hot },
  ].filter(i => i.val > 0).sort((a, b) => b.val - a.val)
  return list.map(i => `${i.label} ${i.val.toFixed(2)}`).join(' / ')
})

const topHumTags = computed(() => {
  const h = hDeg.value
  const list = [
    { label: '乾燥', val: h.dry },
    { label: '潮濕', val: h.humid },
    { label: '極濕', val: h.veryHumid },
  ].filter(i => i.val > 0).sort((a, b) => b.val - a.val)
  return list.map(i => `${i.label} ${i.val.toFixed(2)}`).join(' / ')
})

// 2. 規則庫評估
const activeRules = computed(() => {
  const t = tDeg.value
  const h = hDeg.value
  const rules = [
    { name: '舒適 且 潮濕 → 弱冷', w: Math.min(t.comf, h.humid), out: 'low' },
    { name: '舒適 且 極濕 → 弱冷', w: Math.min(t.comf, h.veryHumid), out: 'low' },
    { name: '微熱 且 乾燥 → 弱冷', w: Math.min(t.warm, h.dry), out: 'low' },
    { name: '微熱 且 潮濕 → 中冷', w: Math.min(t.warm, h.humid), out: 'mid' },
    { name: '微熱 且 極濕 → 強冷', w: Math.min(t.warm, h.veryHumid), out: 'high' },
    { name: '炎熱 且 乾燥 → 中冷', w: Math.min(t.hot, h.dry), out: 'mid' },
    { name: '炎熱 且 潮濕/極濕 → 強冷', w: Math.min(t.hot, Math.max(h.humid, h.veryHumid)), out: 'high' },
  ]
  return rules.filter(r => r.w > 0.01).sort((a, b) => b.w - a.w).slice(0, 4)
})

// 3 & 4. 重心法解模糊化
const defuzz = computed(() => {
  const wLow = activeRules.value.filter(r => r.out === 'low').reduce((m, r) => Math.max(m, r.w), 0)
  const wMid = activeRules.value.filter(r => r.out === 'mid').reduce((m, r) => Math.max(m, r.w), 0)
  const wHigh = activeRules.value.filter(r => r.out === 'high').reduce((m, r) => Math.max(m, r.w), 0)

  let num = 0
  let den = 0
  const pts = []
  for (let x = 0; x <= 100; x += 2) {
    const muLow = Math.min(wLow, trapMF(x, 0, 0, 20, 45))
    const muMid = Math.min(wMid, triMF(x, 25, 50, 75))
    const muHigh = Math.min(wHigh, trapMF(x, 55, 80, 100, 100))
    const mu = Math.max(muLow, muMid, muHigh)
    num += x * mu
    den += mu
    pts.push(`${x * 1.8},${65 - mu * 55}`)
  }
  const power = den > 0 ? Math.round(num / den) : 0
  const poly = `0,65 ${pts.join(' ')} 180,65`
  return { power, poly, wLow, wMid, wHigh }
})

// 傳統邏輯對照
const crispResult = computed(() => {
  const t1 = temp.value > 26
  const h1 = hum.value > 70
  if (!t1 && !h1) return { code: '0, 0', text: '不開冷氣', warn: false }
  if (!t1 && h1) return { code: '0, 1', text: '僅送風/除濕（體感仍悶熱）', warn: true }
  if (t1 && !h1) return { code: '1, 0', text: '低風速運轉（高溫降溫慢）', warn: true }
  return { code: '1, 1', text: '全速強冷（臨界易反覆跳停）', warn: true }
})

const tempX = computed(() => ((temp.value - 18) / (34 - 18)) * 180)
const humX = computed(() => ((hum.value - 40) / (100 - 40)) * 180)
</script>

<template>
  <div class="fuzzy-box" @click.stop @mousedown.stop>
    <!-- 頂部：情境快捷鍵 + 傳統真值表對比條 -->
    <div class="top-bar">
      <div class="presets">
        <button
          v-for="p in presets"
          :key="p.label"
          @click="applyPreset(p)"
          class="btn-preset"
          :class="{ active: temp === p.t && hum === p.h }"
        >
          {{ p.label }}
        </button>
      </div>
      <div class="crisp-badge" :class="{ warn: crispResult.warn }">
        <span>傳統真值表 [{{ crispResult.code }}]：</span>
        <strong>{{ crispResult.text }}</strong>
      </div>
    </div>

    <!-- 主體：四欄式 16:9 管線 -->
    <div class="pipeline-grid">
      <!-- 1. 模糊化 -->
      <div class="card">
        <div class="card-title">1. 感測與模糊化</div>
        <div class="slider-group">
          <div class="label-row">
            <span>溫度：<b>{{ temp.toFixed(1) }}°C</b></span>
            <span class="tags">{{ topTempTags }}</span>
          </div>
          <input type="range" min="18" max="34" step="0.1" v-model.number="temp" />
          <svg viewBox="0 0 180 48" class="chart">
            <polygon points="0,44 0,6 45,6 73,44" fill="rgba(147,168,193,0.12)" stroke="#7a91ad" stroke-width="1.2"/>
            <polygon points="45,44 73,6 101,44" fill="rgba(138,171,158,0.14)" stroke="#7b9e90" stroke-width="1.2"/>
            <polygon points="73,44 101,6 129,44" fill="rgba(217,160,91,0.16)" stroke="#c89252" stroke-width="1.2"/>
            <polygon points="101,44 129,6 180,6 180,44" fill="rgba(196,125,117,0.14)" stroke="#b5726a" stroke-width="1.2"/>
            <line :x1="tempX" y1="2" :x2="tempX" y2="46" stroke="#e5e5e5" stroke-width="1.3" stroke-dasharray="2,2"/>
          </svg>
        </div>

        <div class="slider-group">
          <div class="label-row">
            <span>濕度：<b>{{ hum }}%</b></span>
            <span class="tags">{{ topHumTags }}</span>
          </div>
          <input type="range" min="40" max="100" step="1" v-model.number="hum" />
          <svg viewBox="0 0 180 48" class="chart">
            <polygon points="0,44 0,6 45,6 84,44" fill="rgba(140,140,140,0.12)" stroke="#787878" stroke-width="1.2"/>
            <polygon points="45,44 84,6 126,44" fill="rgba(147,168,193,0.14)" stroke="#7a91ad" stroke-width="1.2"/>
            <polygon points="84,44 126,6 180,6 180,44" fill="rgba(217,160,91,0.16)" stroke="#c89252" stroke-width="1.2"/>
            <line :x1="humX" y1="2" :x2="humX" y2="46" stroke="#e5e5e5" stroke-width="1.3" stroke-dasharray="2,2"/>
          </svg>
        </div>
      </div>

      <!-- 2. 規則庫 -->
      <div class="card">
        <div class="card-title">2. 多規則同時觸發</div>
        <div class="rule-list">
          <div v-for="r in activeRules" :key="r.name" class="rule-item">
            <div class="rule-text">{{ r.name }}</div>
            <div class="bar-bg">
              <div class="bar-fill" :style="{ width: (r.w * 100) + '%' }"></div>
              <span>權重 {{ r.w.toFixed(2) }}</span>
            </div>
          </div>
          <div v-if="activeRules.length === 0" class="empty-tip">處於冷涼乾燥區，無需製冷</div>
        </div>
      </div>

      <!-- 3. 加權聚合 -->
      <div class="card">
        <div class="card-title">3. 推論聚合與重心</div>
        <svg viewBox="0 0 180 70" class="chart-large">
          <polygon points="0,65 0,10 36,10 81,65" fill="none" stroke="#3a3a3a" stroke-dasharray="2,2"/>
          <polygon points="45,65 90,10 135,65" fill="none" stroke="#3a3a3a" stroke-dasharray="2,2"/>
          <polygon points="99,65 144,10 180,10 180,65" fill="none" stroke="#3a3a3a" stroke-dasharray="2,2"/>
          <polygon :points="defuzz.poly" fill="rgba(147, 168, 193, 0.28)" stroke="#93a8c1" stroke-width="1.3"/>
          <line :x1="defuzz.power * 1.8" y1="5" :x2="defuzz.power * 1.8" y2="68" stroke="#d9a05b" stroke-width="1.8"/>
        </svg>
        <div class="agg-weights">
          <span>弱: {{ defuzz.wLow.toFixed(2) }}</span>
          <span>中: {{ defuzz.wMid.toFixed(2) }}</span>
          <span>強: {{ defuzz.wHigh.toFixed(2) }}</span>
        </div>
      </div>

      <!-- 4. 解模糊化輸出 -->
      <div class="card output-card">
        <div class="card-title">4. 解模糊化輸出</div>
        <div class="power-val">{{ defuzz.power }}<span>%</span></div>
        <div class="power-desc">壓縮機無段功率輸出</div>
        <div class="meter">
          <div class="meter-fill" :style="{ width: defuzz.power + '%' }"></div>
        </div>
      </div>
    </div>
  </div>
</template>

<style scoped>
.fuzzy-box {
  font-family: 'Noto Sans TC', system-ui, -apple-system, sans-serif;
  color: #dcdcdc;
  display: flex;
  flex-direction: column;
  gap: 8px;
  height: 390px;
}
.top-bar {
  display: flex;
  justify-content: space-between;
  align-items: center;
  gap: 8px;
}
.presets {
  display: flex;
  gap: 6px;
}
.btn-preset {
  background: #1e1e1e;
  border: 1px solid #333333;
  color: #a3a3a3;
  font-size: 11px;
  padding: 3px 9px;
  border-radius: 4px;
  cursor: pointer;
  transition: all 0.15s;
}
.btn-preset:hover,
.btn-preset.active {
  background: #282c34;
  border-color: #64748b;
  color: #f1f5f9;
}
.crisp-badge {
  font-size: 12px;
  background: #1c1c1c;
  border: 1px solid #333333;
  color: #b0b0b0;
  padding: 3px 10px;
  border-radius: 4px;
}
.crisp-badge.warn {
  border-color: #5c4938;
  background: #241e19;
  color: #d9a05b;
}
.pipeline-grid {
  display: grid;
  grid-template-columns: 1.35fr 1.25fr 1.1fr 0.9fr;
  gap: 10px;
  flex: 1;
}
.card {
  background: #1a1a1a;
  border: 1px solid #2e2e2e;
  border-radius: 6px;
  padding: 10px 12px;
  display: flex;
  flex-direction: column;
  justify-content: space-between;
}
.card-title {
  font-size: 13px;
  font-weight: 700;
  color: #93a8c1;
  border-bottom: 1px solid #2a2a2a;
  padding-bottom: 5px;
  margin-bottom: 6px;
}
.slider-group {
  display: flex;
  flex-direction: column;
  gap: 3px;
}
.label-row {
  display: flex;
  justify-content: space-between;
  font-size: 11.5px;
  color: #d4d4d4;
}
.tags {
  color: #9ca3af;
  font-size: 10.5px;
}
input[type="range"] {
  width: 100%;
  height: 4px;
  accent-color: #93a8c1;
  cursor: pointer;
}
.chart {
  width: 100%;
  height: 46px;
  background: #121212;
  border: 1px solid #262626;
  border-radius: 4px;
}
.rule-list {
  display: flex;
  flex-direction: column;
  gap: 8px;
  flex: 1;
  justify-content: center;
}
.rule-item {
  background: #222222;
  padding: 6px 8px;
  border-radius: 4px;
  border-left: 3px solid #7a91ad;
}
.rule-text {
  font-size: 11.5px;
  color: #e0e0e0;
  margin-bottom: 4px;
}
.bar-bg {
  position: relative;
  height: 14px;
  background: #121212;
  border-radius: 3px;
  overflow: hidden;
  display: flex;
  align-items: center;
}
.bar-fill {
  height: 100%;
  background: #5b728e;
}
.bar-bg span {
  position: absolute;
  right: 6px;
  font-size: 10px;
  color: #e5e5e5;
}
.chart-large {
  width: 100%;
  height: 110px;
  background: #121212;
  border: 1px solid #262626;
  border-radius: 4px;
}
.agg-weights {
  display: flex;
  justify-content: space-around;
  font-size: 11px;
  color: #9ca3af;
}
.output-card {
  align-items: center;
  text-align: center;
  border-color: #3d3d3d;
}
.output-card .card-title {
  width: 100%;
  text-align: left;
}
.power-val {
  font-size: 46px;
  font-weight: 800;
  color: #e5e5e5;
  line-height: 1;
}
.power-val span {
  font-size: 18px;
  color: #9ca3af;
  margin-left: 2px;
}
.power-desc {
  font-size: 12px;
  color: #9ca3af;
}
.meter {
  width: 100%;
  height: 8px;
  background: #121212;
  border: 1px solid #2a2a2a;
  border-radius: 4px;
  overflow: hidden;
}
.meter-fill {
  height: 100%;
  background: #93a8c1;
  transition: width 0.15s;
}
.empty-tip {
  font-size: 12px;
  color: #737373;
  text-align: center;
}
</style>