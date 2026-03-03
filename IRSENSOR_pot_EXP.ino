const int sensor_pin = A0;
const int led_pin = 9;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);
  pinMode(sensor_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(sensor_pin);//reads a 10-bit value i.e 0 to 1024
  val=map(val, 0, 1024, 0, 255);//function for analogue
  analogWrite(9, 255 - val);
  Serial.println(val);
}
