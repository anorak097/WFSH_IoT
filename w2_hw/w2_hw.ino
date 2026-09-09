#include <Ultrasonic.h>

int distance;
bool red_status = HIGH;
unsigned long current;
unsigned long previous = 0;

Ultrasonic ultrasonic(12, 11);

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = ultrasonic.read(CM);
  Serial.print(distance);
  current = millis();
  if (distance > 20){
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  else if (distance <= 20 && distance > 10){
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
  else{
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    if (current - previous >= 200){
      previous = current;
      digitalWrite(2, red_status);
      red_status = !red_status;
    }
  }
  delay(100);
}
