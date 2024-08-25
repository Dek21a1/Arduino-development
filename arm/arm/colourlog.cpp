#include "arm.h"

void colour_action::clr(int val)
{
  if (val = 0) {
    grab();
    delay(2000);
    sensor_red();
    release();         //place object
    servo_neutral();   //pos reset
  }
  else if (val = 1) {
    grab();
    delay(2000);
    sensor_green();
    release();         //place object
    servo_neutral();   //pos reset
  }
  else if (val = 2) {
    grab();
    delay(2000);
    sensor_blue();     //place object
    servo_neutral();   //pos reset
  }
}