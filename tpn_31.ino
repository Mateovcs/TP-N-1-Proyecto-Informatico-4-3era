// Definición de variables
int boton = 2;
int poten1 = A0;
int poten2 = A1;
int poten3 = A2;
int rojo = 9;
int verde = 10;
int azul = 11;
int valorRojo = 0;
int valorVerde = 0;
int valorAzul = 0;
bool boton_presio = false;
bool config = false;

void setup() {
  
  pinMode( boton, INPUT );
  pinMode( rojo, OUTPUT );
  pinMode( verde, OUTPUT );
  pinMode( azul, OUTPUT );
  Serial.begin(9800);

}

void loop() {
  // Esperar a que se presione el botón
  if (digitalRead(boton) == LOW && !boton_presio) {
    boton_presio = true;
    Serial.println("Tiene 5 s para configurar el color del LED...");
    delay(5000); // Pausa de 5 segundos para configurar los potenciómetros

    // Leer los valores actuales de los potenciómetros
    int valorPot1 = analogRead( poten1 );
    int valorPot2 = analogRead( poten2 );
    int valorPot3 = analogRead( poten3 );

    // Mapear los valores leídos a un rango de 0 a 255
    valorRojo = map(valorPot1, 0, 1023, 0, 255);
    valorVerde = map(valorPot2, 0, 1023, 0, 255);
    valorAzul = map(valorPot3, 0, 1023, 0, 255);

    // Imprimir los valores leídos por Serial para depuración
    Serial.print("Valores de los potenciometros: ");
    Serial.print(valorPot1);
    Serial.print(", ");
    Serial.print(valorPot2);
    Serial.print(", ");
    Serial.println(valorPot3);

    // Actualizar el LED RGB con los nuevos valores
    analogWrite( rojo, valorRojo);
    analogWrite( verde, valorVerde);
    analogWrite( azul, valorAzul);

    // Mostrar mensaje con la configuracion de colores por Serial
    Serial.print("El LED está usando esta configuracion de colores RGB: (");
    Serial.print(valorRojo);
    Serial.print("; ");
    Serial.print(valorVerde);
    Serial.print("; ");
    Serial.print(valorAzul);
    Serial.println(")");

    config = true;
  }

  // Si ya se configuró y mostró el mensaje, esperar a que se libere el botón
  if ( config && digitalRead(boton) == HIGH) {
    boton_presio = false;
    config = false;

    // Apagar el LED RGB
    analogWrite( rojo, 0);
    analogWrite( verde, 0);
    analogWrite( azul, 0);
  }
}
