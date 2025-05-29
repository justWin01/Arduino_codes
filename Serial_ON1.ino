void setup() {
  Serial.begin(9600);

  // Initialize all the relay control pins as outputs
  for (int pin = 3; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() { 
  // Turn on all relays connected to pins from 3 to 13
  for (int pin = 3; pin <= 13; pin++) {
    digitalWrite(pin, HIGH);  // Set pin HIGH to activate relay
  }
  delay(1000);  // Wait for 1 second

  // Turn off all relays connected to pins from 3 to 13
  for (int pin = 3; pin <= 13; pin++) {
    digitalWrite(pin, LOW);   // Set pin LOW to deactivate relay
  }
  delay(1000);  // Wait for 1 second
}

