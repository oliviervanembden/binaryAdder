#include <Arduino.h>
const int dataOutPin = 2;
const int clockOutPin = 3;


void setup() {
  pinMode(dataOutPin, OUTPUT);
  pinMode(clockOutPin, OUTPUT);
  digitalWrite(dataOutPin, HIGH);

}

void loop() {

}

void    pulsout()   {
  byte z = digitalRead(clockOutPin);
  z = !z;
  digitalWrite(clockOutPin, z);
  delayMicroseconds(10);
  z = !z; // return to original state
  digitalWrite(clockOutPin, z);
  return;
}