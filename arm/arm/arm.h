
#ifndef ARM_H
#define ARM_H

#include <Arduino.h>
#include <Servo.h>
#include "arm.h"
#include <Wire.h>



class arm : public Servo {
  private:
  int neutral;
  int neutral1;
  int use;

  int Pservo1;
  int Pservo2;
  int Pservo3;
  int Pservo4;
  int Pservo5;

  public:
    arm() {} //var
    arm(int neutral, int neutral1, int use, int Pservo1, int Pservo2, int Pservo3, int Pservo4, int Pservo5); 
    void servo_init();        //initalise servos
    void servo_neutral();     //set all servos to neutral
    void sensor_red();        //moves if object is red 
    void sensor_green();      //moves if object is green
    void sensor_blue();       //moves if object is blue
    void grab();              //claw grab move
    void release();           //claw release move
};

class colour_action : public arm {
  public:
  void clr(int val);
};

#endif
