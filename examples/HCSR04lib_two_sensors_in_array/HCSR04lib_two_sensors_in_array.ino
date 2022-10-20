#include <HCSR04lib.h>

HCSR04lib hcsr04[2] = {
  HCSR04lib(9, 10),  // Trigger pin 9, Echo pin 10
  HCSR04lib(11, 12)  // Trigger pin 11, Echo pin 12
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 2; i++) {
    Serial.print("Sensor ");
    Serial.print(i);
    Serial.print(" : ");
    Serial.println(hcsr04[i].getDistance());
  }
  delay(100);
}