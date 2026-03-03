#include <Servo.h>
Servo my_servo;//syntax: Servo name(object is created);
const int Servo_Pin = 9;


void setup() {
  // put your setup code here, to run once:
  my_servo.attach(Servo_Pin);

}

void loop() {
  // put your main code here, to run repeatedly:
  my_servo.write(150);//ideally write any value between 0 to 180; practically 10 to 170

}
