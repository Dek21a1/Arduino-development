#include "arm.h"
#include <Servo.h>
#include <Wire.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;


arm::arm(int neutral)
{
  this->neutral = neutral;
}
arm::arm(int neutral1)
{
  this->neutral1 = neutral1;
}
arm::arm(int use)
{
  this->use = use;
}
void arm::servo_init(int servo1, int servo2, int servo3, int servo4, int servo5)
{
  Servo1.attach(servo1);
  Servo2.attach(servo2);
  Servo3.attach(servo3);
  Servo4.attach(servo4);
  Servo5.attach(servo5);
}

void arm::servo_pin()
{

}
void arm::neutral()
{
  Servo1.write()
}
