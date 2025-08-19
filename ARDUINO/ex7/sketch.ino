void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(300);
  digitalWrite(12, LOW);
  delay(250);
  digitalWrite(11, LOW);
  delay(200);
}
