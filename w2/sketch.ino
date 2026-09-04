#include <Ultrasonic.h>

Ultrasonic ultrasonic(3, 4);
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = ultrasonic.read(CM);
  Serial.println(distance);
  if (distance <= 10){
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(200);  
  }
  else if (distance < 30 && distance > 10){
    digitalWrite(2, HIGH);
    delay(400);
    digitalWrite(2, LOW);
    delay(400);  
  }
}
