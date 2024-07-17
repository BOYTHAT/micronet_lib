#include "BlinkLED.h"

BlinkLED::BlinkLED(int pin1, int pin2) {
  _ledPin1 = pin1;
  _ledPin2 = pin2;
}

void BlinkLED::begin() {
  pinMode(_ledPin1, OUTPUT);
  pinMode(_ledPin2, OUTPUT);
}

void BlinkLED::blinkLED1(int delayTime) {
  digitalWrite(_ledPin1, HIGH);
  delay(delayTime);
  digitalWrite(_ledPin1, LOW);
  delay(delayTime);
}

void BlinkLED::blinkLED2(int delayTime) {
  digitalWrite(_ledPin2, HIGH);
  delay(delayTime);
  digitalWrite(_ledPin2, LOW);
  delay(delayTime);
}
