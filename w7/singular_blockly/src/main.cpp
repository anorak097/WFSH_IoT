#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

// MQTT global variables
WiFiClient _wifiClient;
PubSubClient mqttClient(_wifiClient);
String lastMqttTopic = "";
String lastMqttMessage = "";
const char* _mqttClientId = "";

// Function forward declarations
void _mqttCallback(char* topic, byte* payload, unsigned int length);

// MQTT message callback
void _mqttCallback(char* topic, byte* payload, unsigned int length) {
  lastMqttTopic = String(topic);
  lastMqttMessage = "";
  for (unsigned int i = 0; i < length; i++) {
    lastMqttMessage += (char)payload[i];
  }
}

void setup() {
  Serial.begin(9600);
  // Connect WiFi to
  WiFi.mode(WIFI_STA);
  WiFi.setAutoReconnect(true);
  WiFi.begin("", "");
  unsigned long _wifiStartTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - _wifiStartTime < 10000) {
  delay(500);
  }
  Serial.println(String("wifi status") + String((WiFi.status() == WL_CONNECTED)));
  // MQTT setup - server: mqttgo.io:1883
  mqttClient.setServer("mqttgo.io", 1883);
  mqttClient.setCallback(_mqttCallback);
  // MQTT connect
  mqttClient.connect(_mqttClientId);
  Serial.println(String("MQTT status") + String(mqttClient.connected()));
  // MQTT subscribe
  mqttClient.subscribe(String("").c_str());
}

void loop() {
  mqttClient.loop();
  Serial.println(lastMqttMessage);
}
