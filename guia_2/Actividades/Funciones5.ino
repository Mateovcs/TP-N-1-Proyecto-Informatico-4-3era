void lanzarDado(int lados) 
{
  int resultado = random(1, lados + 1);

  Serial.print("El dado de ");
  Serial.print(lados);
  Serial.print(" lados ha caido en: ");
  Serial.println(resultado);
}


void setup() 
{
  Serial.begin(9600);
  
  randomSeed(analogRead(0));

  lanzarDado(6);
}

void loop() 
{
}
