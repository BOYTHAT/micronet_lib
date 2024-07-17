#include <Buzzer.h>

/*
Define buzzer pin of Micro:Net board
Buzzer pin of Micro:Net is pin 7

*/
const int BuzzerPin = 7;

// Create an instance of the Buzzer class
Buzzer myBuzzer(BuzzerPin);

void setup() {
  // Initialize the buzzer pin
  myBuzzer.begin();
}

void loop() {
  // Buzz the buzzer with a 1 second delay
  myBuzzer.buzz(1000);
}
