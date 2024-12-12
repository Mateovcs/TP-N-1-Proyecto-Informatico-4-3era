// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
  pinMode( A0 , INPUT );
  pinMode( A1 , INPUT );
  pinMode( A2 , INPUT );
}

void loop()
{
  analogWrite( 3 , analogRead(A0) );
  analogWrite( 5 , analogRead(A1) );
  analogWrite( 6 , analogRead(A2) );
  delay(1000);
  analogWrite( 3 , analogRead(A0) );
  analogWrite( 5 , analogRead(A1) );
  analogWrite( 6 , analogRead(A2) );
  delay(1000);
}