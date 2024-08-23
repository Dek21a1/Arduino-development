
#ifndef ARM_H
#define ARM_H

#include <Arduino.h>
#include <Servo.h>
#include "arm.h"
#include <Wire.h>

#define neu 90
#define neutral1 40
#define use 82

class pin_action : public Servo {
  public:
    void servo_init(int servo1, int servo2, int servo3, int servo4, int servo5);
    void action()
    void servo_neutral(sdfasf, int neutral1, int use);
};

#endif
