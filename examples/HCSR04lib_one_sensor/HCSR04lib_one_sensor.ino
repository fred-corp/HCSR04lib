#include <HCSR04lib.h>

// Define the pins used for the sensor
#define TRIGGER_PIN  9
#define ECHO_PIN    10

// Define the sensor object
HCSR04lib sensor(TRIGGER_PIN, ECHO_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the distance in cm
  long distance = sensor.getDistance();

  // Print the distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait 1 second
  delay(1000);
}