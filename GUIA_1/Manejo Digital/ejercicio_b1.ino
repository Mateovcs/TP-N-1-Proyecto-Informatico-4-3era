const int inicioLED = 2;  // Primer pin donde está conectado un LED
const int finLED = 11;    // Último pin donde está conectado un LED

void setup() {
  // Configuramos los pines como salidas
  for (int pin = inicioLED; pin <= finLED; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Secuencia de encendido de los LEDs
  for (int pin = inicioLED; pin <= finLED; pin++) {
    digitalWrite(pin, HIGH); // Enciende el LED actual
    delay(200);              // Pausa de 200ms
    digitalWrite(pin, LOW);  // Apaga el LED actual
  }

  // Secuencia inversa (opcional, para un efecto de ida y vuelta)
  for (int pin = finLED; pin >= inicioLED; pin--) {
    digitalWrite(pin, HIGH); // Enciende el LED actual
    delay(200);              // Pausa de 200ms
    digitalWrite(pin, LOW);  // Apaga el LED actual
  }
}
