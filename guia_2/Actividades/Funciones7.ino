void ordenarDeMayorAMenor(int numeros[], int cantidad) 
{
  for (int i = 0; i < cantidad - 1; i++) {
    for (int j = 0; j < cantidad - i - 1; j++) {
      if (numeros[j] < numeros[j + 1]) 
      {
        int temp = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp;
      }
    }
  }
}

void mostrarVector(int numeros[], int cantidad) 
{
  for (int i = 0; i < cantidad; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println(); 
}

void setup() 
{
  Serial.begin(9600); 
  
  int numeros[] = {5, 3, 8, 1, 4};
  int cantidad = sizeof(numeros) / sizeof(numeros[0]); 

  Serial.print("Vector original: ");
  mostrarVector(numeros, cantidad); 

  ordenarDeMayorAMenor(numeros, cantidad);

  Serial.print("Vector ordenado: ");
  mostrarVector(numeros, cantidad); 
}

void loop() 
{
}
