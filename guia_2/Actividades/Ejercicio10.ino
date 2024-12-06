#define buzz 2

int num[10];

void setup() 
{
  Serial.begin(9600);
  
  pinMode(buzz, OUTPUT);
  
  for (int i = 0; i < 10; i++) {
    num[i] = random(1, 11); 
  }

  Serial.print("Numeros generados: ");
  for (int i = 0; i < 10; i++) {
    Serial.print(num[i]);
    Serial.print(" ");
  }
  Serial.println(); 

  for (int i = 0; i < 10; i++) {
    if (num[i] == 5) 
    {
      tone(buzz, 1000); 
      delay(500);
      noTone(buzz);
    }
  }
}

void loop() 
{
}
