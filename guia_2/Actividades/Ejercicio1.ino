int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int arraySize = sizeof(array) / sizeof(array[0]); 

void setup() 
{
  Serial.begin(9600);
  
  int suma = 0;

  for (int i = 0; i < arraySize; i++) 
  {
    suma += array[i];
  }

  float media = (float)suma / arraySize;

  Serial.print("La media del array es: ");
  Serial.println(media);
}

void loop() 
{
}