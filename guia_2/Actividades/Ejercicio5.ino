#define ledPin1  9 
#define ledPin2  10

int secuencia1[] = {1, 0, 0, 1, 1, 0, 1, 1};
int secuencia2[] = {0, 1, 0, 1, 0, 0, 1, 0};
int arraySize = sizeof(secuencia1) / sizeof(secuencia1[0]); 

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() 
{
  for (int i = 0; i < arraySize; i++) {
    if (secuencia1[i] == 1) 
    {
      digitalWrite(ledPin1, HIGH); 
    } else {
      digitalWrite(ledPin1, LOW); 
    }
    
    if (secuencia2[i] == 1) 
    {
      digitalWrite(ledPin2, HIGH); 
    } else {
      digitalWrite(ledPin2, LOW); 
    }
    
    delay(500);
  }
}
