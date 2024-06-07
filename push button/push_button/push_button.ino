#define BUTTON_PIN 2

#include "push_button.h"

PushButton button(BUTTON_PIN);

void setup() {
  Serial.begin(115200);
  button.init();
}

void loop() {
  if (button.isPressed()) {
    Serial.println("Button is pressed");
  }
  else {
    Serial.println("button is not pressed");
  }
  delay (100);
}
