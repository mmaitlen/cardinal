// define variables for each led
const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;
const int LED6 = 8;

const int LEDS[] = {LED1, LED2, LED3, LED4, LED5, LED6};

const int IDX0 = 0;
const int IDX1 = 1;
const int IDX2 = 2;
const int IDX3 = 3;
const int IDX4 = 4;
const int IDX5 = 5;

const int LAST_IDX = sizeof(LEDS);

void setup() {
  // setup pins as outputs for leds
  for (int idx = 0; idx <= 5; idx++) {
    pinMode(LEDS[idx], OUTPUT);
  }
}

void loop() {
  // turn leds on
  myWrite(IDX0, IDX2, HIGH);
  delay(1000);            

  myWrite(IDX3, IDX4, HIGH);
  delay(1000);            

  // turn leds off 
  myWrite(LOW);
  delay(1000);                
}

void myWrite(int value) {
  myWrite(0, LAST_IDX, value);
}

void myWrite(int firstIdx, int lastIdx, int value) {
  for (int idx = firstIdx; idx <= lastIdx; idx++) {
    digitalWrite(LEDS[idx], value);
  }
}

