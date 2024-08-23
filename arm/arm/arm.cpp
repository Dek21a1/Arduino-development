#include "arm.h"
#include <Servo.h>
#include <Wire.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;



void pin_action::servo_init(int servo1, int servo2, int servo3, int servo4, int servo5)
{
  Servo1.attach(servo1);
  Servo2.attach(servo2);
  Servo3.attach(servo3);
  Servo4.attach(servo4);
  Servo5.attach(servo5);
}


void pin_action::servo_neutral(neutral, neutral1, use)
{
  Servo1.write(neutral);
  Servo2.write(neutral);
  Servo3.write(neutral);
  Servo4.write(neutral);
  Servo5.write(use);
  Servo5.write(neutral1);
}

void pin_action::action()
{
  delay(200);
  Servo2.write(55);
  delay(500);
  Servo3.write(140);
  delay(500);
  Servo4.write(145);
  delay(500);
  Servo5.write(grab);
  delay(2000);
  Servo2.write(default1);
  Servo3.write(default1);
  Servo4.write(default1);
}