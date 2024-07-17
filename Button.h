#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button {
  public:
    Button(int button1Pin, int button2Pin, int led1Pin, int led2Pin);
    void begin();
    void update();

  private:
    int _button1Pin;
    int _button2Pin;
    int _led1Pin;
    int _led2Pin;

    bool _led1State;
    bool _led2State;

    bool _button1LastState;
    bool _button2LastState;

    void handleButton(int buttonPin, bool &buttonLastState, bool &ledState, int ledPin);
};

#endif
