#include "LED_RGB.h"

LED_RGB::LED_RGB(uint8_t pin, uint16_t numPixels, uint8_t brightness)
  : strip(Adafruit_NeoPixel(numPixels, pin, NEO_GRB + NEO_KHZ800)) {
  strip.setBrightness(brightness);
}

void LED_RGB::begin() {
  strip.begin();
  strip.show();
}

void LED_RGB::colorWipe(uint32_t color, int wait) {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
    strip.show();
    delay(wait);
  }
}

void LED_RGB::rainbowCycle(int wait) {
  uint16_t i, j;

  for(j = 0; j < 256*5; j++) { // 5 cycles of all colors on wheel
    for(i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

uint32_t LED_RGB::Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
