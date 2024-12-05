const int leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Pines de los 10 LEDs
const int totalLeds = 10; // Número total de LEDs

void setup() {
  // Configura todos los pines de los LEDs como salida
  for (int i = 0; i < totalLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Encender LEDs impares (índices 0, 2, 4, 6, 8)
  for (int i = 0; i < totalLeds; i += 2) {
    digitalWrite(leds[i], HIGH); // Enciende el LED impar
  }
  for (int i = 1; i < totalLeds; i += 2) {
    digitalWrite(leds[i], LOW); // Apaga los LEDs pares
  }
  delay(500); // Espera 500 ms

  // Encender LEDs pares (índices 1, 3, 5, 7, 9)
  for (int i = 0; i < totalLeds; i += 2) {
    digitalWrite(leds[i], LOW); // Apaga los LEDs impares
  }
  for (int i = 1; i < totalLeds; i += 2) {
    digitalWrite(leds[i], HIGH); // Enciende los LEDs pares
  }
  delay(500); // Espera 500 ms
}
