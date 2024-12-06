const int tama = 5; // Tamaño del vector
int numeros[tama];   // Vector global de tamaño 5

void generarNumerosAleatorios() {
  for (int i = 0; i < tama; i++) {
    // Generar un número aleatorio del 0 al 10
    numeros[i] = (random(0, 11) * 10); // Multiplica directamente por 10
  }
}

void mostrarVector() {
  for (int i = 0; i < tama; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println(); // Salto de línea al final
}

void setup() {
  Serial.begin(9600); // Inicializamos la comunicación serial

  // Generamos los números aleatorios y los llenamos en el vector
  generarNumerosAleatorios();
  
  // Mostramos el vector lleno en la consola
  Serial.print("Vector lleno con multiplos de 10: ");
  mostrarVector();
}

void loop() {
  // No se necesita hacer nada en el loop
}
