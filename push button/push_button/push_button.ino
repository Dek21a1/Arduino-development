#define BUTTON_PIN 2

#include "push_button.h"

PushButton Button(BUTTON_PIN);

void setup() {
  Serial.begin(115200);
  PushButton.init();
}

void loop() {
//  if (PushButton.isPressed()) {
//  Serial.println("Button is pressed");
//}
//else {
//  Serial.println("button is not pressed");
//}
//delay (100);
println(PushButton.isPressed());
delay (100);
}
