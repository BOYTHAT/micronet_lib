#include <BlinkLED.h>
/*
Define the pins for the LEDs 
LEDs on board of Micro:Net are pin 5 and pin 6
*/
const int LED1 = 5;
const int LED2 = 6;

// Create an instance of the BlinkLED class
BlinkLED myLEDs(LED1, LED2);

void setup() {
  // Initialize the LED pins
  myLEDs.begin();
}

void loop() {
  // Blink LED1 and LED2 with a 1 second delay
  myLEDs.blinkLED1(1000);
  myLEDs.blinkLED2(1000);
}
