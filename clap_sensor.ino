int ledpin = 13;
int soundpin = A2;
int threshold = 200;
void setup() {
 Serial.begin(9600);
pinMode (ledpin , INPUT);
pinMode (soundpin, OUTPUT);
}

void loop() {
 int soundsens = analogRead(soundpin);
if (soundsens >= threshold) {
  digitalWrite(ledpin, HIGH);
  delay(1000);
}
else{
  digitalWrite(ledpin, LOW);
}
}
