int Controle = 0;

void setup()
{
  pinMode(13, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  Controle = digitalRead(13);
  if (Controle == 0) {
    digitalWrite(6, LOW);
  } else {
    digitalWrite(6, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
