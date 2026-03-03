# define encoder_A 2
# define encoder_B 3
const int pot_in = A0;//for potentiometer
const int motor_pin_1 = 8;
const int motor_pin_2 = 9;
int val = 0;
bool direction;
double count = 0;
void encoder_A_ISR(){
  bool A=digitalRead(encoder_A);
  bool B=digitalRead(encoder_B);
  if(A != B){
    direction=0;
    count++;
  }
  else{
    direction=1;
    count--;
  }
}
void encoder_B_ISR(){
  bool A=digitalRead(encoder_A);
  bool B=digitalRead(encoder_B);
  if(A==B){
    direction =1;
    count--;
  }
  else{
    direction=0;
    count++;
  }
}
void setup() {
  // put your setup code here, to run once:
  pinMode(motor_pin_1, OUTPUT);
  pinMode(motor_pin_2, OUTPUT);
  pinMode(pot_in, INPUT);//for potentiometer
  attachInterrupt(digitalPinToInterrupt(encoder_A), encoder_A_ISR, CHANGE);
  attachInterrupt(digitalPinToInterrupt(encoder_B), encoder_B_ISR, CHANGE);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val= analogRead(pot_in);// for pot
  val=map(val, 0, 1023, 0, 255);//for pot
  analogWrite(motor_pin_1, val);
  analogWrite(motor_pin_2, 0);
  Serial.print(val);//PRINTS POT VALUE
  Serial.print(" ");
  Serial.print(direction);
  Serial.print(" ");
  Serial.println(count);
}
