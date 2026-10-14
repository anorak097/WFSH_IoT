#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

// MQTT 全域變數
WiFiClient _wifiClient;
PubSubClient mqttClient(_wifiClient);
String lastMqttTopic = "";
String lastMqttMessage = "";
const char* _mqttClientId = "esp32client";

int i;

// 函數前向宣告
void _mqttCallback(char* topic, byte* payload, unsigned int length);

// MQTT 訊息回調函數
void _mqttCallback(char* topic, byte* payload, unsigned int length) {
  lastMqttTopic = String(topic);
  lastMqttMessage = "";
  for (unsigned int i = 0; i < length; i++) {
    lastMqttMessage += (char)payload[i];
  }
}

void setup() {
  Serial.begin(9600);
  // WiFi 連線到 Anorak
  WiFi.mode(WIFI_STA);
  WiFi.setAutoReconnect(true);
  WiFi.begin("Anorak", "vIi1h4CHl");
  unsigned long _wifiStartTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - _wifiStartTime < 10000) {
  delay(500);
  }
  Serial.println(String("WIFI: ") + String((WiFi.status() == WL_CONNECTED)));
  // MQTT 設定 - 伺服器: mqttgo.io:1883
  mqttClient.setServer("mqttgo.io", 1883);
  mqttClient.setCallback(_mqttCallback);
  // MQTT 連線
  mqttClient.connect(_mqttClientId);
  Serial.println(String("MQTT: ") + String(mqttClient.connected()));
  // MQTT 訂閱主題
  mqttClient.subscribe(String("WFSH/IoT/test/tmp").c_str());
}

void loop() {
  mqttClient.loop();
  i = lastMqttMessage;
  if ((i != "")) {
  Serial.println(i);
  i = "";
  }
}
