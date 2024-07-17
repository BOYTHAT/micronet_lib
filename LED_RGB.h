#ifndef LED_RGB_H
#define LED_RGB_H

#include <Adafruit_NeoPixel.h>

class LED_RGB {
public:
  LED_RGB(uint8_t pin, uint16_t numPixels, uint8_t brightness = 50);
  void begin();
  void colorWipe(uint32_t color, int wait);
  void rainbowCycle(int wait);

private:
  Adafruit_NeoPixel strip;
  uint32_t Wheel(byte WheelPos);
};

#endif
