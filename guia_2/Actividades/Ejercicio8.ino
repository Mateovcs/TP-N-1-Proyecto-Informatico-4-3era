#define ledPin    5 
#define botonPin  2

int secuencia[5];

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(botonPin, INPUT);
  
  Serial.begin(9600);
}

void loop() 
{
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(1000); 
    
    secuencia[i] = digitalRead(botonPin);
    
    digitalWrite(ledPin, LOW);
    delay(1000); 
  }

  Serial.print("Secuencia guardada: ");
  for (int i = 0; i < 5; i++) {
    Serial.print(secuencia[i]);
    Serial.print(" ");
  }
  Serial.println(); 

  for (int i = 0; i < 5; i++) {
    secuencia[i] = 0;
  }
  
  delay(1000);
}
