int ledPin = 13;
int relayPin = 12;
String car;
int delayTime = 0; 
void setup(){

Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}
void loop(){
    if (car.startsWith("delay")) {
      int spaceIndex = car.indexOf(' ');
      if (spaceIndex != -1) {
        String delayStr = car.substring(spaceIndex + 1);
        delayTime = delayStr.toInt();  // Convert delay time from string to integer
        Serial.print("Delay set to: ");
        Serial.println(delayTime);
      } else {
        Serial.println("Invalid delay command format. Use 'delay <time in milliseconds>'.");
      }

if(Serial.available()){
car = Serial.readString();
if(car == "on"){
digitalWrite(ledPin, HIGH);
}else if (car == "off"){
digitalWrite(ledPin, LOW);
}
}
}
}








