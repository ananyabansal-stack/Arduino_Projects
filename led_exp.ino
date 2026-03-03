void setup() {
  // put your setup code here, to run once:
 //  pinMode(4, OUTPUT);
  // DDRB |= 00100000;
  // DDRB |= (1<<5);
  // DDRD |=(1<<4);
  DDRB |=(1<<1);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(4, HIGH);
  PORTB |= (1<<1);
  // PORTD |= (1<<4);
  //Serial.println(PORTB); //VALUE WILL BE PRINTED AS 2
  delay(1000);
  // digitalWrite(4, LOW);
  // PORTD &= 0B0111111;
  // PORTD &= !(1<<4);
  PORTB &= !(1<<1);
  delay(1000);
  Serial.println(PORTB); //VALUE OF PORTD IS BEING PRINTED AS 0
}
