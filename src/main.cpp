#include <Arduino.h>

const int pin1 = 7;
const int pin2 = 6;
const int pin3 = 5;
const int stopTime = 3000;

void setup() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  Serial.println("---------------------------------------");
}

void loop() {
  digitalWrite(pin1,HIGH);
  delay(stopTime);

  digitalWrite(pin2,HIGH);
  delay(stopTime);

  digitalWrite(pin3,HIGH);
  delay(stopTime);

  digitalWrite(pin1,LOW);
  delay(stopTime);

  digitalWrite(pin2,LOW);
  delay(stopTime);

  digitalWrite(pin3,LOW);
  delay(stopTime);
}