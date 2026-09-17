#include <Arduino.h>

// 超音波感測器變數
const int ultrasonic_trigPin = 3;  // 超音波 Trig 腳位
const int ultrasonic_echoPin = 4;  // 超音波 Echo 腳位
float ultrasonic_distance = 0;  // 儲存測量的距離

int distance;

// 函數前向宣告
float ultrasonicMeasureDistance();

// 測量超音波距離的函數
float ultrasonicMeasureDistance() {
  // 先發送 10 微秒的觸發訊號
  digitalWrite(ultrasonic_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonic_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonic_trigPin, LOW);

  // 測量回波時間
  unsigned long duration = pulseIn(ultrasonic_echoPin, HIGH);

  // 計算距離 (聲音速度 / 2) = 29.1 cm/µs
  return (duration / 2.0) / 29.1;
}

void setup() {
  pinMode(3, OUTPUT); // 自動設定腳位模式
  pinMode(4, INPUT); // 自動設定腳位模式
  pinMode(2, OUTPUT);
}

void loop() {
  distance = ultrasonicMeasureDistance();
  if ((distance <= 10)) {
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
  }
  else if (((distance > 10) && (distance <= 30))) {
  digitalWrite(2, HIGH);
  delay(400);
  digitalWrite(2, LOW);
  delay(400);
  }
}
