const int buttonPin = 2; // Pin del botón

// Pines de los LEDs RGB
const int leds[3][3] = {
  {9, 10, 11}, // LED 1: R, G, B
  {6, 7, 8},   // LED 2: R, G, B
  {3, 4, 5}    // LED 3: R, G, B
};

int currentLED = 0;        // LED actual encendido
bool buttonState;          // Estado actual del botón
bool lastButtonState = HIGH; // Estado previo del botón

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configura el botón como entrada con resistencia pull-up

  // Configura los pines de los LEDs como salida
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      pinMode(leds[i][j], OUTPUT);
      digitalWrite(leds[i][j], LOW); // Apaga todos los LEDs al inicio
    }
  }

  // Enciende el primer LED al inicio
  turnOnLED(currentLED);
}

void loop() {
  buttonState = digitalRead(buttonPin); // Lee el estado del botón

  // Detecta un cambio en el estado del botón (presión)
  if (buttonState == LOW && lastButtonState == HIGH) {
    delay(50); // Pequeño debounce
    currentLED = (currentLED + 1) % 3; // Cambia al siguiente LED (0 -> 1 -> 2 -> 0)
    turnOffAllLEDs(); // Apaga todos los LEDs
    turnOnLED(currentLED); // Enciende el LED actual
  }

  lastButtonState = buttonState; // Actualiza el estado previo del botón
}

// Función para apagar todos los LEDs
void turnOffAllLEDs() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      digitalWrite(leds[i][j], LOW);
    }
  }
}

// Función para encender un LED con un color específico
void turnOnLED(int ledIndex) {
  digitalWrite(leds[ledIndex][0], HIGH); // Rojo
  digitalWrite(leds[ledIndex][1], LOW);  // Verde
  digitalWrite(leds[ledIndex][2], LOW);  // Azul
}
