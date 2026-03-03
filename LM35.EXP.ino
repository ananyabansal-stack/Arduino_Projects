const int analog_in = A0;
int temperature = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(analog_in, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  temperature = analogRead(analog_in);
  Serial.println((temperature*38)/64);

}
