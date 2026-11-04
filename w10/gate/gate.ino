#include <ESP32Servo.h>

const int SERVO = 27;   // 伺服馬達的橘色線
Servo boom;
int cars = 0;

void setup() {
  Serial.begin(115200);
  boom.attach(SERVO);
  boom.write(0);                    // 放下
}

void loop() {
    Serial.println("down");
    for (int a = 0; a <= 90; a++) {
      boom.write(a);
      delay(8);
    }
    delay(1500);   
    Serial.println("up");               // 從欄杆下開過去的時間
    for (int a = 90; a >= 0; a--) {
      boom.write(a);
      delay(8);
    }
}