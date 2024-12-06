int ledPins[] = {2, 3, 4, 5, 6}; 
int cantLeds = sizeof(ledPins) / sizeof(ledPins[0]); 

int secuencia[] = {1, 0, 1, 0, 1}; 

void setup() 
{
  for (int i = 0; i < cantLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() 
{
  for (int i = 0; i < cantLeds; i++) {
    if (secuencia[i] == 1) {
      digitalWrite(ledPins[i], HIGH); 
    } else {
      digitalWrite(ledPins[i], LOW); 
    }
  }

  delay(500); 

  int valor = secuencia[cantLeds - 1]; 
  for (int i = cantLeds - 1; i > 0; i--) {
    secuencia[i] = secuencia[i - 1];
  }
  secuencia[0] = valor;
}
