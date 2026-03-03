const int relay_pin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(relay_pin,OUTPUT);//INPUT in place of OUTPUT for RELAY prgm

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay_pin, LOW);//HIGH in place of LOW for RELAY prgm

}
