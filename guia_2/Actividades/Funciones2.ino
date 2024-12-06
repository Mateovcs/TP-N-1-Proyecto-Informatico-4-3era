#define trig  9 
#define echo  10   

long distancia;

void setup() 
{
  
  Serial.begin(9600);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void medirDistancia() 
{
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duracion = pulseIn(echo, HIGH);

  distancia = duracion * 0.034 / 2;
}

void loop() 
{
  medirDistancia();
  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(1000); 
}

