const int potPin = A0; // Pin analógico para el potenciómetro
const int buzzerPin = 3; // Pin digital para el buzzer

void setup() 
{
  // Configura el pin del buzzer como salida
  pinMode(buzzerPin, OUTPUT);
}

void loop() 
{
  // Lee el valor del potenciómetro
  int potVal = analogRead(potPin);
  
  // Mapea el valor del potenciómetro al rango de frecuencia audible (20Hz a 20kHz)
  int frequency = map(potVal, 0, 1023, 20, 20000);
  
  // Genera el tono en el buzzer con la frecuencia calculada
  // El buzzer nunca se apaga, solo se ajusta la frecuencia
  tone(buzzerPin, frequency);
}