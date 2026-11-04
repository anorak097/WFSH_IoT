#include <BluetoothSerial.h>

BluetoothSerial bt;
const int LED = 32;

void setup() {
  pinMode(LED, OUTPUT);
  bt.begin("ESP32-Lamp");  // 手機上看到的名字
}

void loop() {
  if (bt.available()) {
    String cmd = bt.readStringUntil('\n');
    cmd.trim();
    if (cmd == "on") digitalWrite(LED, HIGH);
    if (cmd == "off") digitalWrite(LED, LOW);
    bt.println("LED " + cmd);
  }
}