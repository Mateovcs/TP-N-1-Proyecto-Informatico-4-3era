#define buzz  2

#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494

void setup() 
{
  pinMode(buzz, OUTPUT); 
  
}

void loop() 
{
 
  int melody1[] = {NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C4};
  for (int Nota = 0; Nota < 4; Nota++) {
    int duracion = 500; 
    tone(buzz, melody1[Nota], duracion);
    delay(duracion);
    noTone(buzz);
    delay(50); 
  }
  delay(2000); 

  int melody2[] = {NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4};
  for (int Nota = 0; Nota < 4; Nota++) {
    int duracion = 500; 
    tone(buzz, melody2[Nota], duracion);
    delay(duracion);
    noTone(buzz);
    delay(50); 
  }
  delay(2000); 

  int melody3[] = {NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C4};
  for (int Nota = 0; Nota < 4; Nota++) {
    int duracion = 500; 
    tone(buzz, melody3[Nota], duracion);
    delay(duracion);
    noTone(buzz);
    delay(50); 
    
  }
}
