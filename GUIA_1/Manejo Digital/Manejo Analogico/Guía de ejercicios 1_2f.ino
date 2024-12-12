const int potPin = A0;
const int ledPin = 3;

void setup()
{
  pinMode( ledPin , OUTPUT );
  pinMode( potPin , INPUT );
}

void loop()
{
  int potValue = analogRead(potPin);
  int delayTime = map(potValue, 0, 1023, 200, 10000);
  analogWrite( ledPin , 255 );
  delay(delayTime / 2);
  analogWrite( ledPin , 0 );
  delay(delayTime / 2);
}