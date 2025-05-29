const int analog = A0;
int sensorV = 0;
int led2 = 2;
int led3 = 3;
int led4 = 4;

void setup(){
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
  pinMode(led4 , OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorV = analogRead(analog);
  Serial.print("Sensor = ");
  Serial.print(sensorV);
  Serial.print("\n");
  delay(2);

          if((sensorV >= 100) && (sensorV <= 600)){
                digitalWrite(led2 , HIGH);
                      delay(100);
                                 }
                                   else if((sensorV >= 601) && (sensorV <= 625)){
                       digitalWrite(led3 , HIGH);
                delay(100);
        }
          else if ((sensorV > 626)&&(sensorV <=700)){
                digitalWrite(4,HIGH);
        }
}


