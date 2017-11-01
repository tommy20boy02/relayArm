int m1 = 9;
int m2 = 8;
int m3 = 7;
int m4 = 6;
int m5 = 5;
int m6 = 4;
int m7 = 3;
int m8 = 2;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  pinMode(m6, OUTPUT);
  pinMode(m7, OUTPUT);
  pinMode(m8, OUTPUT);
}

void loop() {
  digitalWrite(m1, HIGH);
  delay(2000);
  digitalWrite(m1, LOW);
  delay(2000);
}
