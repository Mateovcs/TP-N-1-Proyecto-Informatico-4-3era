int array[] = {2, 6, 10, 11};
int arraySize = sizeof(array) / sizeof(array[0]);

void setup() 
{
  Serial.begin(9600); 
  
  for (int i = 0; i < arraySize; i++) {
    Serial.print("Multiplos de ");
    Serial.print(array[i]);
    Serial.print(": ");
    
    for (int j = 1; j <= 5; j++) {
      Serial.print(array[i] * j);
      if (j < 5) 
      {
        Serial.print(", ");
      }
    }
    Serial.println(); 
  }
}

void loop() 
{
}
