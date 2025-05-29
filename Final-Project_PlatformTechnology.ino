#include <Servo.h>

const int waterLevelPin = A0;
const int servoPin = 9;

Servo myServo;

int waterLevelThreshold = 500;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  myServo.write(0);
}

void loop() {
  int waterLevel = analogRead(waterLevelPin);
  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  if (waterLevel > waterLevelThreshold) {
    gradualServoMove(105);
    Serial.println("Water level is high! Moving servo to 155 degrees.");
  } else {
    gradualServoMove(0);
    Serial.println("Water level is low! Moving servo to 0 degrees.");
  }

  delay(1000);
}

void gradualServoMove(int targetPosition) {
  int currentPosition = myServo.read();
  int stepDelay = 15;

  if (currentPosition < targetPosition) {
    for (int pos = currentPosition; pos <= targetPosition; pos++) {
      myServo.write(pos);
      delay(stepDelay);
    }
  } else {
    for (int pos = currentPosition; pos >= targetPosition; pos--) {
      myServo.write(pos);
      delay(stepDelay);
    }
  }
}

