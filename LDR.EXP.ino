const int ldr_in = A0;
int intensity = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr_in, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  intensity=analogRead(ldr_in);
  Serial.println((intensity*5)/1023);
}
