
#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(8);
  servo.write(90);
  delay(500);
  servo.write(-180);
  delay(500);
  servo.write(120);
  delay(500);
  

}

void loop() 
{ 
  servo.write(0);
  delay(1000);
  servo.write(0);
  delay(1000);       

}

// Source: http://educ8s.tv/arduino-servo-tutorial/ Nick Koumaris Educ8s TV
