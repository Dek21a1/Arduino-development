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

void pin_action::sensor_red()
{
  Servo1.write(180);
}

void pin_action::sensor_green()
{
  Servo1.write(0);
}

void pin_action::sensor_blue(int neutral1)
{
    Servo2.write(125);
    delay(500);
    Servo3.write(40);
    delay(500);
    Servo4.write(45);
    delay(500);
    Servo5.write(neutral1);
    delay(2000);
}
void pin_action::servo_neutral(int neutral, int neutral1, int use)
{
  Servo1.write(neutral);
  Servo2.write(neutral);
  Servo3.write(neutral);
  Servo4.write(neutral);
  Servo5.write(use);
  Servo5.write(neutral1);
  delay(2000);
}

void pin_action::grab(int neutral, int neutral1, int use)
{
  delay(200);
  Servo2.write(55);
  delay(500);
  Servo3.write(140);
  delay(500);
  Servo4.write(145);
  delay(500);
  Servo5.write(use);
  delay(2000);
  Servo2.write(neutral);
  Servo3.write(neutral);
  Servo4.write(neutral);
}

void pin_action::release(int neutral, int neutral1, int use)
{
  delay(200);
  Servo1.write(180);
  delay(2000);
  Servo2.write(55);
  delay(500);
  Servo3.write(140);
  delay(500);
  Servo4.write(145);
  delay(500);
}