unsigned long timer = 0;
unsigned long timer_1 = 0;
unsigned long timer_2 = 0;
bool LED9_STATUS = LOW;
bool LED13_STATUS = LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  timer = millis();
  if(millis() - timer_1 >1000){
    timer_1 = timer;
    if(LED9_STATUS == LOW){
      LED9_STATUS = HIGH;
    }
    else{
      LED9_STATUS = LOW;
        
    }
    digitalWrite(9 ,LED9_STATUS);
  }
  if(millis() - timer_2 > 500){
    timer_2 = timer;
    if(LED13_STATUS == LOW){
      LED13_STATUS = HIGH;
    }
    else{
      LED13_STATUS = LOW;
    }
    digitalWrite(13,LED13_STATUS);
    }
    Serial.print(millis() - timer_1); //timer_1 updates after 1000
    Serial.print(" ");
    Serial.println(millis() - timer_2); //timer2 updates after 500
  }

