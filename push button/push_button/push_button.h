#ifndef BUTTON_H
#define BUTTON_H

#include <arduino.h>

class PushButton {
private:
  byte pin;
public:
  Button() {} //var
  Button(byte pin);
  
  void init();
  void init(byte defaultState);
  
  void isPressed();
};

#endif