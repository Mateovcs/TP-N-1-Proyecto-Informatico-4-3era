Alumno: Mateo Villegas
Docente: Gonzzalo Consorti
Correo: mateovillegas012@gmail.com
Curso: 4°3



Use otro Branch titulado "TP3" en el que ahi subi la resolucion de la actividad "TP N° 3:Lectura análogica y Monitor Serial"


CONSIGNA:

Cuando se pulsa una vez el pulsador (con funcionalidad BOTON),  se ejecuta un tiempo de espera (pausa en la que el codigo no haga nada) que dure 5s en donde se le da tiempo al usuario a mover cada potenciómetro al punto que quiera y luego el LED RGB cambie su color en cada uno de sus espectros de luz (rojo, verde, azul) y quede prendido por otros 5s, luego se apagara, hasta que se vuelva a presionar el pulsador y le deje usuario devuelta seleccionar otra combinación de colores.
Cuando se toca el botón mostrar solo 1 vez el mensaje:
- "Tiene 5 s para configurar el color del led...."

Cuando ya se acabe el tiempo y se muestre el color del led mostrar una sola ves el mensaje:
-"El led esta usando esta configuración de colores RGB:   ( xx; xx ; xx )"

Siendo cada xx los valores de 0 a 255 de cada color  ( rojo , verde , azul )
Pista: Uso de MAP, Serial.print y Serial.println()


Tuve complicaciones en las conexiones de los potenciometros y eso provocaba que en el monito serial me aparezca un unico valor, "( 0; 0; 255 )".
Tambien tuve complicaciones con las condicionales y por ultimo con hacer una funcion llamada "config" que  masomenos era para que una vez que pulse el boton, no me aparezcan los mismo datos en forma de bucle.
