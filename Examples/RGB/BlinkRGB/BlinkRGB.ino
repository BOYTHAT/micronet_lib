#include <LED_RGB.h>

#define LED_PIN    4
#define NUM_LEDS   8

LED_RGB ledStrip(LED_PIN, NUM_LEDS);

void setup() {
  ledStrip.begin();
}

void loop() {
  ledStrip.rainbowCycle(10);
}
