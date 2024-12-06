int array[] = {10, 4, 2};
int arraySize = sizeof(array) / sizeof(array[0]); 

void setup() 
{
  Serial.begin(9600);

  for (int i = 0; i < arraySize - 1; i++) {
    for (int j = 0; j < arraySize - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < arraySize; i++) 
  {
    Serial.print(array[i]);
    Serial.print(" ");
  }
}

void loop() 
{
}
