const int buttonpin1 = 10;
const int buttonpin2 = 11;
//int Buttonstate1 = 0;
//int Buttonstate2 = 0;
void setup() {

  Serial.begin(9600);

  pinMode(buttonpin1, INPUT);
  pinMode(buttonpin2, INPUT);
}

void loop() {

  int Buttonstate1 = digitalRead(buttonpin1);
  int Buttonstate2 = digitalRead(buttonpin2);
  delay(1000);

  if (Buttonstate1 == HIGH) {
    int readValue = analogRead(A0);
    Serial.print(readValue);
    if (readValue > 150) {
      Serial.println("<<버튼을 누르고 ");
      Serial.println("밝기가 150이상일떄 조도센서 벨류값");
      delay(1000);
    }
  }
}
