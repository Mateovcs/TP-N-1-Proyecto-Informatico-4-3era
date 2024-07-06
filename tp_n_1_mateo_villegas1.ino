//Declaracion de variables

int rojo = A0;
int azul = A1;
int verde = A2;
int rojo1 = 6;
int azul1 = 5;

void setup()
{
  pinMode( rojo , OUTPUT );
  pinMode( azul , OUTPUT );
  pinMode( verde , OUTPUT );
  pinMode( 8 , OUTPUT );//declaracion del buzzer
  pinMode( rojo1 , OUTPUT );
  pinMode( azul1 , OUTPUT );
  
}//fin del setup


void loop()
{
  analogWrite( rojo , 255 );
  digitalWrite( azul , LOW );
  digitalWrite( verde , LOW );
  digitalWrite( 8 , LOW );
  digitalWrite( rojo1 , LOW );
  digitalWrite( azul1 , LOW );
  
  delay( 3000 );
  
  digitalWrite( 8 , HIGH );
  delay( 100 );
  
  analogWrite( rojo , 0 );
  digitalWrite( azul , LOW );
  digitalWrite( verde , LOW );
  digitalWrite( 8 , LOW );
  digitalWrite( rojo1 , HIGH );
  digitalWrite( azul1 , HIGH );
 
  delay( 3000 );
  
  digitalWrite( 8 , HIGH );
  delay( 100 );
  
  analogWrite( rojo , 0 );
  digitalWrite( azul , 255 );
  digitalWrite( verde , 255 );
  digitalWrite( 8 , LOW );
  digitalWrite( rojo1 , LOW );
  digitalWrite( azul1 , LOW );
 
  delay( 3000 );
  
  digitalWrite( 8 , HIGH );
  delay( 100 );
 
}//fin del loop