
#ifndef ARM_H
#define ARM_H

#include <Arduino.h>
#include <Servo.h>
#include "arm.h"
#include <Wire.h>



class pin_action : public Servo {
  public:
    void servo_init(int servo1, int servo2, int servo3, int servo4, int servo5);
    void servo_neutral(int neutral, int neutral1, int use);
    void sensor_red();
    void sensor_green();
    void sensor_blue(int neutral1);
    void grab(int neutral, int neutral1, int use);
    void release(int neutral, int neutral1, int use);
};

#endif
