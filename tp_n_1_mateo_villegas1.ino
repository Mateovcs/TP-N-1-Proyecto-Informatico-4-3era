int rojo = A0;
int azul = 8;
int verde = 7;
void setup()
{
  pinMode( A0 , OUTPUT);
  pinMode( A1 , OUTPUT);
  pinMode( azul , OUTPUT);
  pinMode( verde , OUTPUT);
  pinMode( 6, OUTPUT);	
}

void loop()
{
  analogWrite( rojo , 255 );
  digitalWrite( azul , LOW );
  digitalWrite( 6 , LOW );
  digitalWrite( verde , LOW);
  analogWrite( A1 , 0 );
  
  delay(2000);
  
  digitalWrite( azul , HIGH );
  digitalWrite( 6 , HIGH );
  analogWrite( rojo , 0 );
  digitalWrite( verde , LOW);
  analogWrite( A1 , 0 );
  
  delay(2000);
  
  digitalWrite( verde , HIGH);
  analogWrite( A1 , 255 );
  digitalWrite( azul , LOW );
  digitalWrite( 6 , LOW );
  analogWrite( rojo , 0 );
  delay(2000);
  

}