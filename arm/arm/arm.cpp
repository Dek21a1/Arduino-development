#include "arm.h"
#include <Servo.h>
#include <Wire.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;


arm::arm(int neutral, int neutral1, int use)
{
  this->neutral = neutral;
  this->neutral1 = neutral1;
  this->use = use;
}

arm::arm(int servo1, int servo2, int servo3, int servo4, int servo5)
{
  Servo1.attach(servo1);
  Servo2.attach(servo2);
  Servo3.attach(servo3);
  Servo4.attach(servo4);
  Servo5.attach(servo5);
}
arm::void neutral(int neutral, int neutral1, int use)
{
  Servo1.write()
}
