const int ledRojo = 9;   // Pin del LED rojo
const int ledVerde = 10; // Pin del LED verde
const int buzzer = 11;   // Pin del buzzer

void setup() {
  pinMode(ledRojo, OUTPUT);  // Configura LED rojo como salida
  pinMode(ledVerde, OUTPUT); // Configura LED verde como salida
  pinMode(buzzer, OUTPUT);   // Configura buzzer como salida
}

void loop() {
  // Estado: Tren viene, activar semáforo rojo y buzzer
  digitalWrite(ledRojo, HIGH);  // Enciende LED rojo
  digitalWrite(ledVerde, LOW);  // Apaga LED verde
  tone(buzzer, 1000);           // Activa buzzer con frecuencia de 1000 Hz
  delay(2000);                  // Mantener estado por 2 segundos
  
  // Estado: Tren ya pasó, activar semáforo verde y apagar buzzer
  digitalWrite(ledRojo, LOW);   // Apaga LED rojo
  digitalWrite(ledVerde, HIGH); // Enciende LED verde
  noTone(buzzer);               // Apaga buzzer
  delay(3000);                  // Mantener estado por 3 segundos
}
