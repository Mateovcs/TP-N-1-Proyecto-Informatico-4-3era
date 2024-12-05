const int buttonPin = 2; // Pin del botón
const int buzzerPin = 9; // Pin del buzzer

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configura el botón como entrada con resistencia pull-up interna
  pinMode(buzzerPin, OUTPUT);      // Configura el buzzer como salida
}

void loop() {
  // Leer el estado del botón
  int buttonState = digitalRead(buttonPin);

  // Si el botón está presionado (estado LOW por pull-up)
  if (buttonState == LOW) {
    playAlarm(); // Inicia la secuencia de sonidos
  } else {
    noTone(buzzerPin); // Apaga el buzzer si el botón no está presionado
  }
}

void playAlarm() {
  tone(buzzerPin, 1000, 200); // Emite un sonido de 1000 Hz durante 200 ms
  delay(200);                 // Pausa de 200 ms
  tone(buzzerPin, 1500, 200); // Emite un sonido de 1500 Hz durante 200 ms
  delay(200);                 // Pausa de 200 ms
}

