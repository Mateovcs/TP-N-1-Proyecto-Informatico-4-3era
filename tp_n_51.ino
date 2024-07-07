// Constantes para los pines y declaracion de variables

const int pir = 2;  // Pin del PIR
const int sensor = 3; // Pin de señal del sensor ultrasonico
const int buzzer = 5;             // Pin del buzzer
const int rojo = 6;              // Pin del LED rojo
const int verde = 7;              // Pin del LED verde 
const int azul = 8;              // Pin del LED azul 

// Macros para mensajes
#define msj_seguro "Sistema seguro"
#define msj_mov "Movimiento detectado"
#define msj_peligro "Alerta de proximidad!"

// Variables globales
int distancia_umbral = 100;  // Distancia del umbral en centimetros (1 metro = 100 cm)
bool movimiento_detectado = false;

void setup() {
  
  pinMode(pir, INPUT);
  pinMode(sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);

  // Estado inicial de los LEDs RGB (verde para sistema seguro)
  analogWrite(rojo, 0);
  analogWrite(verde, 255);
  analogWrite(azul, 0);

}

void loop() {
  // Verificar movimiento con el sensor PIR
  if (digitalRead(pir) == HIGH) {
    movimiento_detectado = true; //Si hay movimiento
    
    // Mostrar color amarillo (LED RGB)
    analogWrite(rojo, 255);
    analogWrite(verde, 255);
    analogWrite(azul, 0);
    Serial.println(msj_mov);
  } else {
    movimiento_detectado = false; //Si NO hay movimiento...
    // Mostrar color verde (LED RGB)
    analogWrite(rojo, 0);
    analogWrite(verde, 255);
    analogWrite(azul, 0);
    Serial.println(msj_seguro);
  }

  // Verificar proximidad con el sensor ultrasónico
  long duracion; //Long viene de la palabra longitud
  float distancia_cm;
  
  digitalWrite(sensor, LOW);
  delayMicroseconds(2);
  digitalWrite(sensor, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor, LOW);
  
  duracion = pulseIn(sensor, HIGH);
  distancia_cm = (duracion / 2) / 29.1;  // Calcular distancia en cm, es la formula que tengo q usar

  // Activar alarma si la distancia es menor al umbral
  if (distancia_cm < distancia_umbral) {
    // Mostrar color rojo (LED RGB)
    analogWrite(rojo, 255);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
    Serial.println(msj_peligro);
   
    // Activar el buzzer o la alarma
    tone(buzzer, 1000);  // Ejemplo de tono para alerta
    delay(500);              // Duración del tono
    noTone(buzzer);      // El "noTone" sirve para detener al buzzer
    delay(500);              // Pausa entre alertas
  }
  
  // Pausa entre iteraciones
  delay(100);
}
