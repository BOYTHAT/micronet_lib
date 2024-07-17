#include "RGB.h"

RGB::RGB(uint16_t num_leds, uint8_t pin, uint8_t brightness) 
  : strip(Adafruit_NeoPixel(num_leds, pin, NEO_GRB + NEO_KHZ800)) {
  strip.setBrightness(brightness);
}

void RGB::begin() {
  strip.begin();
  strip.show();  // Initialize all pixels to 'off'
}

void RGB::rainbowCycle(int wait) {
  uint16_t i, j;

  for (j = 0; j < 256 * 5; j++) { // 5 cycles of all colors on wheel
    for (i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

void RGB::colorWipe(uint32_t color, int wait) {
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
    strip.show();
    delay(wait);
  }
}

uint32_t RGB::Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos
