#include "Led.h"


Led::Led(byte pin) {
  this->pin = pin;
}
void Led::init() {
  pinMode(pin, OUTPUT);
}
void Led::init(byte defaultState) {
  init();
  if (defaultState == 1) {
    on();
  }
  else {
    off();
  }
}
void Led::on() {
  digitalWrite(pin, 1); 
  Serial.println("Led on");
}
void Led::off() {
  digitalWrite(pin, 0);
  Serial.println("Led off");
}