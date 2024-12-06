#define pinLed    9   
#define pinBoton  2 

void configurarPines() 
{
  pinMode(pinLed, OUTPUT);   
  pinMode(pinBoton, INPUT);  
}

void setup() 
{
  Serial.begin(9600); 
  
  configurarPines();
  
  Serial.println("Pines configurados: LED como OUTPUT y boton como INPUT");
}

void loop() 
{
}
