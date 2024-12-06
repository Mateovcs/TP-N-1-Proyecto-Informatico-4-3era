#define led 2 
int array[] = {1, 0, 0, 1, 1, 0, 1, 1}; 
int arraySize = sizeof(array) / sizeof(array[0]); 

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  for (int i = 0; i < arraySize; i++) {
    if (array[i] == 1) {
      digitalWrite(led, HIGH); 
    } else {
      digitalWrite(led, LOW); 
    }
    
    delay(500); 
  }
}
