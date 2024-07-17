#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>

class Buzzer {
  public:
    Buzzer(int pin);
    void begin();
    void buzz(int delayTime);

  private:
    int _buzzerPin;
};

#endif
