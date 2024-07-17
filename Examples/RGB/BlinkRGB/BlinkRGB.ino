#include <RGB.h>

#define LED_PIN    4   // GPIO pin connected to the NeoPixels
#define NUM_LEDS   2   // Number of NeoPixels in the strip

RGB myStrip(NUM_LEDS, LED_PIN);

void setup() {
  myStrip.begin();        // Initialize the NeoPixel library
}

void loop() {
  myStrip.rainbowCycle(10); // Rainbow cycle with a 10ms delay per step
}
