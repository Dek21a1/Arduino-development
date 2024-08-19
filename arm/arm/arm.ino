#include <Servo.h>
#include "Adafruit_TCS34725.h"
#include <Wire.h>
//#include "arm.h"

byte gammatable[256];
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

#define default1 90
#define default2 90
#define default3 90
#define default4 90
#define default5 40
#define grab 82

//arm ARM({default1, default2, default3, default4, default5});

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

void setup() {
  Serial.begin(9600);
Servo1.attach(5);
Servo2.attach(6);
Servo3.attach(9);
Servo4.attach(10);
Servo5.attach(11);
Servo5.write(40);
Servo5.write(default5);
Servo4.write(default1);
Servo3.write(default1);
Servo2.write(default1);
Servo1.write(default1);
delay(5000);
    if (tcs.begin()) {
    //Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }

  // Convert RGB colors to what humans see
  for (int i=0; i<256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;

    gammatable[i] = 255 - x;

  }

}

void loop() {
 float red, green, blue;

  delay(60);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue);

if (int(red) >= 160) {
  Serial.print("block is red "); Serial.println(int(red));
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
    delay(2000);

}
else if (int(green) >= 100) {
  Serial.print("block is green "); Serial.println(int(green));
}
else if (int(blue) >= 100) {
  Serial.print("block is blue "); Serial.println(int(blue));
}
else {
  Serial.println("no block recognised"); 
}

}
