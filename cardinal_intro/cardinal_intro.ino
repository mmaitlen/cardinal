
int LED_13 = 13;
int LED_12 = 12;
int LED_11 = 11;
int LED_10 = 10;
int LED_9 = 9;
int LED_8 = 8;

void setup() {
  pinMode(LED_13, OUTPUT);
  pinMode(LED_12, OUTPUT);
  pinMode(LED_11, OUTPUT);
  pinMode(LED_10, OUTPUT);
  pinMode(LED_9, OUTPUT);
  pinMode(LED_8, OUTPUT);
}

void loop() {
  digitalWrite(LED_13, HIGH);
  digitalWrite(LED_12, HIGH);
  digitalWrite(LED_11, HIGH);
  digitalWrite(LED_10, HIGH);
  digitalWrite(LED_9, HIGH);
  digitalWrite(LED_8, HIGH);
  delay(1000);                
  digitalWrite(LED_13, LOW);
  digitalWrite(LED_12, LOW);
  digitalWrite(LED_11, LOW);
  digitalWrite(LED_10, LOW);
  digitalWrite(LED_9, LOW);
  digitalWrite(LED_8, LOW);
  delay(1000);                
}
