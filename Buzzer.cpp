#include "Buzzer.h"

Buzzer::Buzzer(int pin) {
  _buzzerPin = pin;
}

void Buzzer::begin() {
  pinMode(_buzzerPin, OUTPUT);
}

void Buzzer::buzz(int delayTime) {
  digitalWrite(_buzzerPin, HIGH);
  delay(delayTime);
  digitalWrite(_buzzerPin, LOW);
  delay(delayTime);
}
