#include <HCSR04lib.h>

// Define the pins used for the sensors
#define TRIGGER_PIN_1  9
#define ECHO_PIN_1    10
#define TRIGGER_PIN_2 11
#define ECHO_PIN_2    12

// Define the sensor object
HCSR04lib sensor1(TRIGGER_PIN_1, ECHO_PIN_1);
HCSR04lib sensor2(TRIGGER_PIN_2, ECHO_PIN_2);


void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the distance in cm
  long distance1 = sensor1.getDistance();
  long distance2 = sensor2.getDistance();

  // Print the distance
  Serial.print("Distance: ");
  Serial.print(distance1);
  Serial.print(" cm, ");
  Serial.print(distance2);
  Serial.println(" cm");

  // Wait 0.01 second
  delay(10);
}