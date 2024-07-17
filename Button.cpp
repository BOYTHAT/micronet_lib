#include "Button.h"

Button::Button(int button1Pin, int button2Pin, int led1Pin, int led2Pin) {
  _button1Pin = button1Pin;
  _button2Pin = button2Pin;
  _led1Pin = led1Pin;
  _led2Pin = led2Pin;
  _led1State = HIGH;
  _led2State = HIGH;
  _button1LastState = HIGH;
  _button2LastState = HIGH;
}

void Button::begin() {
  pinMode(_button1Pin, INPUT_PULLUP);
  pinMode(_button2Pin, INPUT_PULLUP);
  pinMode(_led1Pin, OUTPUT);
  pinMode(_led2Pin, OUTPUT);

  digitalWrite(_led1Pin, _led1State);
  digitalWrite(_led2Pin, _led2State);
}

void Button::update() {
  handleButton(_button1Pin, _button1LastState, _led1State, _led1Pin);
  handleButton(_button2Pin, _button2LastState, _led2State, _led2Pin);
}

void Button::handleButton(int buttonPin, bool &buttonLastState, bool &ledState, int ledPin) {
  bool buttonState = digitalRead(buttonPin);
  if (buttonState != buttonLastState) {
    if (buttonState == LOW) {
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
    delay(100); // Debounce delay
  }
  buttonLastState = buttonState;
}
