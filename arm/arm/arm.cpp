#include "arm.h"
#include <Servo.h>
#include <Wire.h>

arm::arm(int pin) {
  int pin[] = {5, 6, 9, 10, 11}
}

void arm::init(int pin) {
  Servo.attach(pin);
  Servo.write(90);
}

