int Valor = 0;

void setup()
{
  pinMode(A5, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  Valor = analogRead(A5);
  analogWrite(6, map(Valor, 0, 1023, 0, 255));
  delay(10); // Delay a little bit to improve simulation performance
}
