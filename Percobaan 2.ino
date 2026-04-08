int timer = 200;

void setup() {
  for (int i = 2; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // 3 LED kiri nyala
  for (int i = 2; i <= 4; i++) {
    digitalWrite(i, HIGH);
  }
  for (int i = 5; i <= 7; i++) {
    digitalWrite(i, LOW);
  }
  delay(timer);

  // 3 LED kanan nyala
  for (int i = 2; i <= 4; i++) {
    digitalWrite(i, LOW);
  }
  for (int i = 5; i <= 7; i++) {
    digitalWrite(i, HIGH);
  }
  delay(timer);
}