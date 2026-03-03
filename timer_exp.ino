unsigned long timer_1 = 0; //32-bit timer
unsigned long timer_2 = 0;
unsigned long timer_3=0;
unsigned long timer_4=0;
bool LED_STATUS = LOW;//LED in low state initially
void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
timer_1 = millis(); //timer1 value will be stored here
if(millis() - timer_2 > 1000){
timer_2 = timer_1;//timer1 value is stored in an auxillary variable
if(LED_STATUS == LOW){
  LED_STATUS = HIGH;//timer1 value will only become high when millis value will become more than 1000
}
else{
  LED_STATUS=LOW;
}
digitalWrite(9, LED_STATUS);
Serial.println(timer_1); //time value is printed cont.
// digitalWrite(13, HIGH);
timer_4=millis();
if(millis()-timer_3 > 500){
  timer_3 = timer_4;
  if(LED_STATUS == LOW){
    LED_STATUS=HIGH;
  }
  else{
    LED_STATUS=LOW;
  }
}
digitalWrite(13,LED_STATUS);
Serial.print(timer_3);
}
}
