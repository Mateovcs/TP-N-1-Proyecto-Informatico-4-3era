void activarPines(int pines[], int cantidadPines) 
{
  for (int i = 0; i < cantidadPines; i++) {
    digitalWrite(pines[i], HIGH);  
  }
}

void setup() 
{
  int pines[] = {2, 3, 4, 5, 6};  

  for (int i = 0; i < 5; i++) {
    pinMode(pines[i], OUTPUT);
  }

  activarPines(pines, 5);
}

void loop() 
{
}
