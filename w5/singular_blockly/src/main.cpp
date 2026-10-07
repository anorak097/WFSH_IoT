#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

// MQTT 全域變數
WiFiClient _wifiClient;
PubSubClient mqttClient(_wifiClient);
String lastMqttTopic = "";
String lastMqttMessage = "";
const char* _mqttClientId = "WFSH20102u;612ufu.4";

// 超音波感測器變數
const int ultrasonic_trigPin = 32;  // 超音波 Trig 腳位
const int ultrasonic_echoPin = 33;  // 超音波 Echo 腳位
float ultrasonic_distance = 0;  // 儲存測量的距離

// 函數前向宣告
void _mqttCallback(char* topic, byte* payload, unsigned int length);
float ultrasonicMeasureDistance();

// MQTT 訊息回調函數
void _mqttCallback(char* topic, byte* payload, unsigned int length) {
  lastMqttTopic = String(topic);
  lastMqttMessage = "";
  for (unsigned int i = 0; i < length; i++) {
    lastMqttMessage += (char)payload[i];
  }
}

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
  Serial.begin(9600);
  pinMode(32, OUTPUT); // 自動設定腳位模式
  pinMode(33, INPUT); // 自動設定腳位模式
  // WiFi 連線到
  WiFi.mode(WIFI_STA);
  WiFi.setAutoReconnect(true);
  WiFi.begin("", "UTCSalgoG505!");
  unsigned long _wifiStartTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - _wifiStartTime < 10000) {
  delay(500);
  }
  // MQTT 設定 - 伺服器: mqttgo.io:1883
  mqttClient.setServer("mqttgo.io", 1883);
  mqttClient.setCallback(_mqttCallback);
  // MQTT 連線
  mqttClient.connect(_mqttClientId);
}

void loop() {
  if (mqttClient.connected()) {
  // MQTT 發布訊息
  mqttClient.publish(String("WFSH/IoT/test").c_str(), String(String(ultrasonicMeasureDistance())).c_str());
  delay(1000);
  }
  else {
  Serial.println("嘗試重連");
  // MQTT 連線
  mqttClient.connect(_mqttClientId);
  delay(1000);
  }
}
