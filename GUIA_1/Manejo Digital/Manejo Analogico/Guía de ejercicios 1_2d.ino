void setup()
{
  pinMode( 3 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 10 , OUTPUT );
  pinMode( 11 , OUTPUT );
  pinMode( A0 , INPUT );
}
void loop()
{
  analogWrite( 3 , 255 );
  analogWrite( 5 , 255 );
  analogWrite( 6 , 0 );
  delay(analogRead(A0));
  analogWrite( 3 , 0 );
  analogWrite( 5 , 0 );
  analogWrite( 6 , 0 );
  delay(analogRead(A0));
  analogWrite( 9 , 255 );
  analogWrite( 10 , 0 );
  analogWrite( 11 , 255 );
  delay(analogRead(A0));
  analogWrite( 9 , 0 );
  analogWrite( 10 , 0 );
  analogWrite( 11 , 0 );
  delay(analogRead(A0));
}