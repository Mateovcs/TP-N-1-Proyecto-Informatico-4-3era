#define pir  7   
#define led  2       

void configurarSistema() 
{
  pinMode(pir, INPUT);   
  pinMode(led, OUTPUT);       
}

void detectarMovimiento() 
{
  int estadoMovimiento = digitalRead(pir);   
  if (estadoMovimiento == HIGH) 
  {  
    digitalWrite(led, HIGH);    
  } else {                         
    digitalWrite(led, LOW);    
  }
}

void setup() 
{
  configurarSistema(); 
}

void loop() 
{
  detectarMovimiento(); 
}
