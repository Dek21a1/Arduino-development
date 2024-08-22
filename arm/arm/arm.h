
#ifndef ARM_H
#define ARM_H


#include <Arduino.h>
#include <Servo.h>
#include "arm.h"
#include <Wire.h>

class arm : public Servo 
{
  private:

  public:
    arm(int servo1, int servo2, int servo3, int servo4, int servo5);

};

#endif
