const int boton = 2; // Pin del botón
const int rojo = 9;    // Pin del color rojo del LED RGB
const int verde = 10; // Pin del color verde del LED RGB
const int azul = 11;  // Pin del color azul del LED RGB

int colorActual = 0;        // Índice del color actual
bool estadoBoton;          // Estado actual del botón
bool estado_Previo = HIGH; // Estado previo del botón

// Secuencia de colores: {R, G, B}
const int colores[7][3] = {
  {255, 0, 0},   // Rojo
  {0, 255, 255}, // Cian
  {0, 255, 0},   // Verde
  {255, 0, 255}, // Magenta
  {0, 0, 255},   // Azul
  {255, 255, 255}, // Blanco
  {255, 255, 0}  // Amarillo
};

void setup() {
  pinMode(boton, INPUT_PULLUP); // Configura el botón como entrada con resistencia pull-up
  pinMode(rojo, OUTPUT);          
  pinMode(verde, OUTPUT);        
  pinMode(azul, OUTPUT);         

  setColor(0); // Establece el primer color (Rojo) al iniciar
}

void loop() {
  estadoBoton = digitalRead(boton); // Lee el estado del botón

  // Detecta el cambio de estado del botón (presión)
  if (estadoBoton == LOW && estado_Previo == HIGH) {
    delay(50); 
    colorActual = (colorActual + 1) % 7; // Cambia al siguiente color (0 a 6)
    setColor(colorActual); // Cambia el color del LED RGB
  }

  estado_Previo = estadoBoton; // Actualiza el estado previo del boton
}


void setColor(int index) {
  analogWrite(rojo, colores[index][0]);   // Ajusta el brillo del rojo
  analogWrite(verde, colores[index][1]); // Ajusta el brillo del verde
  analogWrite(azul, colores[index][2]);  // Ajusta el brillo del azul
}
