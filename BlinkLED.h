#ifndef BLINKLED_H
#define BLINKLED_H

#include <Arduino.h>

class BlinkLED {
  public:
    BlinkLED(int pin1, int pin2);
    void begin();
    void blinkLED1(int delayTime);
    void blinkLED2(int delayTime);

  private:
    int _ledPin1;
    int _ledPin2;
};

#endif
