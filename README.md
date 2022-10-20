# HCSR04lib

A library that makes using HC-SR04 modules easy.

Library written for Arduino.

## Installation

Download the library and place it in your Arduino libraries folder, or use the Arduino IDE's "Add .ZIP library..." to install it.

## Usage

Single sensor :

```c++
#include <HCSR04lib.h>

HCSR04lib hcsr04(2, 3); // Trigger pin 2, Echo pin 3

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(hcsr04.getDistance());
  delay(1000);
}
```

Multiple sensors :

```c++
#include <HCSR04lib.h>

HCSR04lib hcsr04[2] = {
  HCSR04lib(2, 3), // Trigger pin 2, Echo pin 3
  HCSR04lib(4, 5)  // Trigger pin 4, Echo pin 5
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
  delay(1000);
}
```


## License & Acknowledgements

Quickly made with ❤️, lots of ☕️, and lack of 🛌

Published under CreativeCommons BY-SA 4.0

[![Creative Commons License](https://i.creativecommons.org/l/by-sa/4.0/88x31.png)](http://creativecommons.org/licenses/by-sa/4.0/)  
This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](https://creativecommons.org/licenses/by-sa/4.0/).
