void setup() {
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if(digitalRead(9)==LOW){
    delay(300);
    digitalWrite(8, LOW);
  } else {
    delay(300);
    digitalWrite(9, HIGH);
  }
}