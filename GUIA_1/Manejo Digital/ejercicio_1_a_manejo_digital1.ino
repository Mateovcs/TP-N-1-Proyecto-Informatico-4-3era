// Pines de conexión
const int vehiculoRojo = 2;
const int vehiculoAmarillo = 3;
const int vehiculoVerde = 4;
const int peatonRojo = 5;
const int peatonVerde = 6;

void setup() {
  pinMode(vehiculoRojo, OUTPUT);
  pinMode(vehiculoAmarillo, OUTPUT);
  pinMode(vehiculoVerde, OUTPUT);
  pinMode(peatonRojo, OUTPUT);
  pinMode(peatonVerde, OUTPUT);
}

void loop() {
  
  
  // 1. Vehículo: Rojo | Peatón: Verde
  digitalWrite(vehiculoRojo, HIGH);
  digitalWrite(vehiculoAmarillo, LOW);
  digitalWrite(vehiculoVerde, LOW);
  digitalWrite(peatonRojo, LOW);
  digitalWrite(peatonVerde, HIGH);
  delay(5000); // Tiempo 

  // 2. Vehículo: Amarillo | Peatón: Rojo intermitente
  digitalWrite(vehiculoRojo, LOW);
  digitalWrite(vehiculoAmarillo, HIGH);
  digitalWrite(vehiculoVerde, LOW);
  for (int i = 0; i < 5; i++) {
    digitalWrite(peatonRojo, HIGH);
    digitalWrite(peatonVerde, LOW);
    delay(500); // Parpadeo del rojo peatonal
    digitalWrite(peatonRojo, LOW);
    delay(500);
  }

  // 3. Vehículo: Verde | Peatón: Rojo fijo
  digitalWrite(vehiculoRojo, LOW);
  digitalWrite(vehiculoAmarillo, LOW);
  digitalWrite(vehiculoVerde, HIGH);
  digitalWrite(peatonRojo, HIGH);
  digitalWrite(peatonVerde, LOW);
  delay(5000);

  // 4. Vehículo: Amarillo | Peatón: Rojo fijo
  digitalWrite(vehiculoRojo, LOW);
  digitalWrite(vehiculoAmarillo, HIGH);
  digitalWrite(vehiculoVerde, LOW);
  digitalWrite(peatonRojo, HIGH);
  digitalWrite(peatonVerde, LOW);
  delay(2000);
}
