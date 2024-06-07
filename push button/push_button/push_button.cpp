#include "push_button.h"


PushButton::Button(byte pin) {
  this->pin = pin;
}
void PushButton::init() {
  pinMode(pin, INPUT_PULLUP);
  isPressed();
}
void PushButton::init(byte defaultState) {
init();
if (defaultState == 1) {
}
}
void PushButton::isPressed() {
  if (digitalRead(pin) == 1) {
    return true;
  }
  else {
    return false;
  }
}