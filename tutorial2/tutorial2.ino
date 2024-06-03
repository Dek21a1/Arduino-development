#define LED 13

#include "Led.h"

Led led(LED);

void setup() {
  Serial.begin(9600);
  Serial.println("device set to 9600br");
  led.init();
}

void loop() {
  led.on();
  delay(500);
  led.off();
  delay(500);
}
