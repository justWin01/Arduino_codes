const int ledPins[] = {2, 3, 4, 5, 6, 7};
const int numLeds = 6;
int d = 500;
int D = 30;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);

  Serial.println("1 - Turn LED1 ON:");
}

void loop() {

  for (int i = 0; i < 2; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(d);

  for (int i = 0; i < 2; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  for (int i = 2; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(d);

  for (int i = 2; i < 4; i++) {
    digitalWrite(ledPins[i], LOW);
  }

 
  for (int i = 4; i < 6; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(d);

  for (int i = 4; i < 6; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(d); 
 
  while (true) {
      if(Serial.available() > 0){
          char command = Serial.read();
          switch(command){
              case '1':
                  for (int i = 0; i < numLeds; i++) {
                          digitalWrite(ledPins[i], HIGH);
                            }
              break;
              
          }
      }
    for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(D); 

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(D); 
}
  }







