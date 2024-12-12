// Definición del pin para el buzzer
const int buzzerPin = 8;

// Frecuencias de las notas (en Hertz)
int frecuencias[] = 
{
  262, 294, 330, 349, 392, 440, 494, 523, 
  392, 349, 330, 294, 262,             
  523, 494, 440, 392, 349,          
  330, 294, 262,                       
  440, 392, 330, 440, 392, 262,       
  330, 349, 392,                      
  392, 349, 330, 294                    
};

// Duraciones de las notas
const int Blanca = 2000;       // Blanca = 16 cuadraditos
const int Negra = 1000;        // Negra = 8 cuadraditos
const int Corchea = 500;       // Corchea = 4 cuadraditos
const int Semicorchea = 250;   // Semicorchea = 2 cuadraditos

int duraciones[] = 
{
  Negra, Negra, Negra, Negra, Negra, Negra, Negra, Negra, 
  Corchea, Corchea, Corchea, Corchea, Blanca,           
  Negra, Negra, Negra, Negra, Negra,                
  Corchea, Corchea, Blanca,                             
  Negra, Negra, Corchea, Negra, Negra, Blanca,        
  Corchea, Corchea, Negra,                             
  Negra, Negra, Negra, Blanca                      
};

// Número total de notas
int numNotas = sizeof(frecuencias) / sizeof(frecuencias[0]);

void setup() 
{
  pinMode(buzzerPin, OUTPUT);  // Configura el pin del buzzer como salida
}

void loop() 
{
  for (int i = 0; i < numNotas; i++) 
  {
    tone(buzzerPin, frecuencias[i]); 
    delay(duraciones[i]);           
    noTone(buzzerPin);           
    delay(50);                 
  }
  
  delay(1000);  // Espera antes de repetir la melodía
}
