const int pot_in = A0;//for potentiometer
const int motor_pin_1 = 8;
const int motor_pin_2 = 9;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin_1, OUTPUT);
  pinMode(motor_pin_2, OUTPUT);
  pinMode(pot_in, INPUT);//for potentiometer
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val= analogRead(pot_in);// for pot
  val=map(val, 0, 1023, 0, 255);//for pot
  analogWrite(motor_pin_1, val);
  analogWrite(motor_pin_2, 0);
  Serial.println(val);

}
