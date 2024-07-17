#include <Button.h>

/*
Define the pins for the buttons and LEDs
*/

const int Button1Pin = 1;
const int Button2Pin = 2;
const int LED1Pin = 5;
const int LED2Pin = 6;

// Create an instance of the Button class
Button myButton(Button1Pin, Button2Pin, LED1Pin, LED2Pin);

void setup() {
  // Initialize the buttons and LEDs
  myButton.begin();
}

void loop() {
  // Update the button and LED states
  myButton.update();
}
