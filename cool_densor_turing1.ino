// Definición de variables

int temp = A0;   // Pin analógico para el sensor de temperatura (TPM35)
int LDR = A1;           // Pin analógico para el sensor de luz ambiental (LDR)
int rojo = 9;        
int verde = 10;      
int azul = 11;       

const int temp_alta = 90; // Umbral superior de temperatura (en grados Celsius)
const int temp_baja = 18; // Umbral inferior de temperatura (en grados Celsius)
const int luz_min = 30;       // Umbral mínimo de luz (en porcentaje)
const int luz_max = 70;       // Umbral máximo de luz (en porcentaje)

// Macros 
#define msj_luz "El nivel de luz actual es: "
#define msj_temp " y la temperatura actual: "

void setup() 
{
  
  Serial.begin(9800);  
  pinMode(rojo, OUTPUT);  
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);

}//Fin setup

void loop() {
  // Leer valores del sensor de temperatura y luz
  int valorTemperatura = analogRead(temp);
  int valorLDR = analogRead(LDR);

  // Convertir valor de temperatura a grados Celsius
  float temperatura = (valorTemperatura / 1023.0) * 100.0;  // Suponiendo rango 0-100°C

  // Mostrar datos por el Monitor
  
  Serial.print(msj_luz);
  Serial.print(map(valorLDR, 0, 1023, 0, 100));  // Convertir valor LDR a porcentaje de luz
  Serial.print("%");
  Serial.print(msj_temp);
  Serial.print(temperatura);
  Serial.println("ºC");

  // Control del LED RGB según las condiciones especificadas
  if (map(valorLDR, 0, 1023, 0, 100) >= luz_min && map(valorLDR, 0, 1023, 0, 100) <= luz_max) 
  {
    if (temperatura > temp_alta) 
    {
    
      // Rojo si la temperatura es mayor a 90°C
      digitalWrite(rojo, HIGH);
      digitalWrite(verde, LOW);
      digitalWrite(azul, LOW);
    } 
    else if (temperatura < temp_baja) {
      // Azul si la temperatura es menor a 18°C
      digitalWrite(rojo, LOW);
      digitalWrite(verde, LOW);
      digitalWrite(azul, HIGH);
    } 
    else {
      // Verde si la temperatura está entre 18°C y 90°C
      digitalWrite(rojo, LOW);
      digitalWrite(verde, HIGH);
      digitalWrite(azul, LOW);
    }
  } else 
  {
    // Apagar el LED si no se cumple la condición de luz
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }

  delay(100);  // Pequeña pausa para estabilidad
}
