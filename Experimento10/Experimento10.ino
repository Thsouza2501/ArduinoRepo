float Sensor = 0;
const int Tom = 7;

void setup()
{
 pinMode(A5, INPUT);
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT); 
}

void loop()
{
 Sensor = analogRead(A5);
 
 
  if(Sensor >= 164.2)
  {  
      digitalWrite(8, HIGH);
      tone(Tom, 500,1000);
  }else{
      digitalWrite(8, LOW);
  }  
     
  delay(10); 
}  
