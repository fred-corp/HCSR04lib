#include "Arduino.h"
#include "HCSR04lib.h"

HCSR04lib::HCSR04lib(uint8_t trigPin, uint8_t echoPin) {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _trigPin = trigPin;
  _echoPin = echoPin;
}

long HCSR04lib::getDistance() {
  long duration, distance;
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  duration = pulseIn(_echoPin, HIGH);
  distance = (duration/2) * 0.03432;
  return distance;
}