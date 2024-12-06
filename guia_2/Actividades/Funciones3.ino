#include <LiquidCrystal.h>



LiquidCrystal lcd(2, 3, 4, 5, 11, 12);

void configurarPantalla() 
{
  lcd.begin(16, 2);   
}

void mostrarBienvenida() 
{
  lcd.clear();
  lcd.setCursor(0, 0); 
  lcd.print("Bienvenido!");
  lcd.setCursor(0, 1); 
  lcd.print("Toca para empezar");
  delay(1000); 
}

void mostrarInicioJuego() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Juego Iniciado!");
  lcd.setCursor(0, 1);
  lcd.print("Buena suerte!");
  delay(1000); 
}

void mostrarFinJuego() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Juego Terminado");
  lcd.setCursor(0, 1);
  lcd.print("Hasta pronto!");
  delay(1000); 
}

void mostrarPuntuacion() 
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Puntuacion: ");

  int puntaje = random(0, 101);
  lcd.setCursor(0, 1);
  lcd.print(puntaje);
  delay(3000); 
}

void setup() 
{
  configurarPantalla();
  mostrarBienvenida();
  delay(1000); 
}

void loop() 
{
  mostrarInicioJuego();
  delay(1000); 

  mostrarFinJuego();
  delay(1000); 

  mostrarPuntuacion();
}
