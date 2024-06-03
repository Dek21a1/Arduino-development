#ifndef LED_H
#define LED_H

#include <arduino.h>

class Led {
private:
  byte pin;
public:
  Led() {} // var
  Led(byte pin);
  
  void init();
  void init(byte defaultState);
  
  void on();
  void off();
};

#endif