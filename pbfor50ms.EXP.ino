const int pb = 7;
const int led = 9;
unsigned long timer = 0;
unsigned long timer_1 = 0;
bool led_status = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(pb, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool pb_status = digitalRead(pb);
  
  if(pb_status == HIGH){
    timer = millis();
    if(timer - timer_1 > 1000){
      bool led_status = pb_status;
      digitalWrite(led, led_status);
    }
  }
  else{
    led_status == pb_status;
    digitalWrite(led, led_status);
    timer_1 = millis();
  }
  Serial.print(pb_status);
  Serial.print(" ");
  Serial.println(led_status);
}
