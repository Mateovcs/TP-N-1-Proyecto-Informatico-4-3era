float array[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
int arraySize = sizeof(array) / sizeof(array[0]);

void setup() 
{
  Serial.begin(9600);

  float max = array[0];

  for (int i = 1; i < arraySize; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }

  Serial.print("El numero mas grande es: ");
  Serial.println(max);
}

void loop() 
{
 
}
