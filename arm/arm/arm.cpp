#include "arm.h"
#include <Servo.h>
#include <Wire.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;



arm::arm(int neutral, int neutral1, int use, int Pservo1, int Pservo2, int Pservo3, int Pservo4, int Pservo5)
{
  this->neutral = neutral;
  this->neutral1 = neutral1;
  this->use = use;
  this->Pservo1 = Pservo1;
  this->Pservo2 = Pservo2;
  this->Pservo3 = Pservo3;
  this->Pservo4 = Pservo4;
  this->Pservo5 = Pservo5;
}


void arm::servo_init()
{
  Servo1.attach(Pservo1);
  Servo2.attach(Pservo2);
  Servo3.attach(Pservo3);
  Servo4.attach(Pservo4);
  Servo5.attach(Pservo5);
}

void arm::sensor_red()
{
  Servo1.write(180);
}

void arm::sensor_green()
{
  Servo1.write(0);
}

void arm::sensor_blue()
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
void arm::servo_neutral()
{
  Servo1.write(neutral);
  Servo2.write(neutral);
  Servo3.write(neutral);
  Servo4.write(neutral);
  Servo5.write(use);
  Servo5.write(neutral1);
  delay(2000);
}

void arm::grab()
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

void arm::release()
{
  delay(2000);
  Servo2.write(55);
  delay(500);
  Servo3.write(140);
  delay(500);
  Servo4.write(145);
  delay(500);
  Servo5.write(neutral1);
  delay(500);
}

