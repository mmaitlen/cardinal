// define variables for each led
const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;
const int LED6 = 8;

const int LEDS[] = {LED1, LED2, LED3, LED4, LED5, LED6};

void setup() {
  // setup pins as outputs for leds
  for (int idx = 0; idx <= 5; idx++) {
    pinMode(LEDS[idx], OUTPUT);
  }
}

void loop() {
  // turn leds on
  myWrite(HIGH);
  delay(1000);            
  
  // turn leds off 
  myWrite(LOW);
  delay(1000);                
}

void myWrite(int value) {
  for (int idx = 0; idx <= 5; idx++) {
    digitalWrite(LEDS[idx], value);
  }
}

