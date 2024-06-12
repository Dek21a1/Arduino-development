#include "push_button.h"


PushButton::Button(byte pin) {
  this->pin = pin;
}


PushButton::init() {
  pinMode(pin, INPUT_PULLUP);
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