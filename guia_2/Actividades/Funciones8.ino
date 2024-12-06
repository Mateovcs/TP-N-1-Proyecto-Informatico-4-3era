void verificarMultiplo(int numero, int posibleMultiplo) 
{
  if (posibleMultiplo != 0) { 
    if (numero % posibleMultiplo == 0) {
      Serial.print(numero);
      Serial.print(" es multiplo de ");
      Serial.println(posibleMultiplo);
    } else {
      Serial.print(numero);
      Serial.print(" no es multiplo de ");
      Serial.println(posibleMultiplo);
    }
  } else {
    Serial.println("No se puede verificar, el segundo numero es cero.");
  }
}

void setup() 
{
  Serial.begin(9600); 

  verificarMultiplo(10, 2);  
  verificarMultiplo(10, 3);  
  verificarMultiplo(15, 5); 
  verificarMultiplo(7, 0);    
}

void loop() 
{
}
