#ifndef RGB_H
#define RGB_H

#include <Adafruit_NeoPixel.h>

class RGB {
public:
  RGB(uint16_t num_leds, uint8_t pin, uint8_t brightness = 50);
  void begin();
  void rainbowCycle(int wait);
  void colorWipe(uint32_t color, int wait);

private:
  Adafruit_NeoPixel strip;
  uint32_t Wheel(byte WheelPos);
};

#endif
