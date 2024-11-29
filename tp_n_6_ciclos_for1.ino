int Pinrojo = 9;    // Pin rojo del LED RGB
int Pinverde = 10; // Pin verde del LED RGB
int Pinazul = 11;  // Pin azul del LED RGB
int ROJO, VERDE, AZUL;

void setup() {
  pinMode(Pinrojo, OUTPUT);  
  pinMode(Pinverde,INPUT); 
  pinMode(Pinazul,INPUT);  
}

void loop() {
  
  // Bucle para las combinaciones
  for (ROJO = 0; ROJO <= 255; ROJO += 1) { 
    for (VERDE = 0; VERDE <= 255; VERDE += 1) {
      for (AZUL = 0; AZUL <= 255; AZUL += 1) {
        
        analogWrite(Pinrojo, ROJO);
        analogWrite(Pinverde, VERDE);
        analogWrite(Pinazul, AZUL);

        delay(10); // Pausa para ver los cambios
      }
    }
  }
}
 