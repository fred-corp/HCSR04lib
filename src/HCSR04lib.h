#ifndef HCSR04lib_h
#define HCSR04lib_h

#include "Arduino.h"

class HCSR04lib {
  public:
    HCSR04lib(uint8_t trigPin, uint8_t echoPin);
    long getDistance();
  private:
    uint8_t _trigPin;
    uint8_t _echoPin;
};

#endif