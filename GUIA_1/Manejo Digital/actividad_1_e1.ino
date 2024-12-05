// Pines para el primer LED RGB
const int led1R = 9;
const int led1G = 10;
const int led1B = 11;

// Pines para el segundo LED RGB
const int led2R = 5;
const int led2G = 6;
const int led2B = 7;

// Secuencia de colores (valores RGB)
int colors[7][3] = {
  {255, 0, 0},   // Rojo
  {0, 255, 255}, // Cian
  {0, 255, 0},   // Verde
  {255, 0, 255}, // Magenta
  {0, 0, 255},   // Azul
  {255, 255, 255}, //Blanco
  {255, 255, 0}  // Amarillo
};

void setup() {
  // Configura pines como salida
  pinMode(led1R, OUTPUT);
  pinMode(led1G, OUTPUT);
  pinMode(led1B, OUTPUT);

  pinMode(led2R, OUTPUT);
  pinMode(led2G, OUTPUT);
  pinMode(led2B, OUTPUT);
}

void loop() {
  for (int i = 0; i < 7; i++) { 
    // Enciende el primer LED RGB con el color actual
    setColor(led1R, led1G, led1B, colors[i][0], colors[i][1], colors[i][2]);

    // Apaga el segundo LED RGB
    setColor(led2R, led2G, led2B, 0, 0, 0);

    delay(1000); // Mantén el estado por 1 segundo

    // Apaga el primer LED RGB
    setColor(led1R, led1G, led1B, 0, 0, 0);

    // Enciende el segundo LED RGB con el color actual
    setColor(led2R, led2G, led2B, colors[i][0], colors[i][1], colors[i][2]);

    delay(1000); // Mantén el estado por 1 segundo
  }
}

// Función para definir el color de un LED RGB
void setColor(int pinR, int pinG, int pinB, int r, int g, int b) {
  analogWrite(pinR, r);
  analogWrite(pinG, g);
  analogWrite(pinB, b);
}
