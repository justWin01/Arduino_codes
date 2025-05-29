int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int timeDelay = 1000;

void setup() {   
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
}

void loop() {
    for (int i = 0; i <= 16; i++) {
        if (i & 1) {
            digitalWrite(pin2, HIGH);
        } else {
            digitalWrite(pin2, LOW);
        }

        if (i & 2) {
            digitalWrite(pin3, HIGH);
        } else {
            digitalWrite(pin3, LOW);
        }

        if (i & 4) {
            digitalWrite(pin4, HIGH);
        } else {
            digitalWrite(pin4, LOW);
        }

        if (i & 8) {
            digitalWrite(pin5, HIGH);
        } else {
            digitalWrite(pin5, LOW);
        }

        delay(timeDelay);
    }
}
