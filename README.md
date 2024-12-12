Alumno: Mateo Villegas
Docente: Gonzalo Consorti
Gmail: mateovillegas012@gmail.com
Division: 4°3era


En el Branch "TP-7" esta la resolucion de la actividad "TP N°7: Vectores-TONE".

consigna:
El objetivo de este proyecto es que cada estudiante cree una melodía original y personalizada utilizando un buzzer y un Arduino. La melodía debe ser creada por el propio estudiante sin descargar melodías de internet.

1-Crear tu propia melodía:
        Utiliza la herramienta en línea Online Sequencer para componer una melodía original.
        Configura la melodía con los siguientes parámetros:
Grid: 1/4
Time Signature: 4/4
Key: C mayor
Instrument: Grand Piano
Ajusta el BPM (beats por minuto / tempo) para que esté entre 90 y 130. Esta configuración determina la velocidad de la melodía.

2-Exportar la melodía a formato MIDI:
        Una vez creada la melodía, expórtala como un archivo MIDI.

3-Convertir el archivo MIDI a datos para Arduino:
Usa la herramienta en línea MIDI to Arduino Converter para convertir tu archivo MIDI a datos que puedas usar en tu código de Arduino.
La herramienta proporcionará las notas y los tiempos correspondientes. Deberás interpretar estos datos y convertirlos en vectores para el código Arduino, siguiendo las reglas de duración y silencio descritas a continuación.

4- Implementar la melodía en Arduino:
        Notas y Duraciones:
La melodía debe contener un mínimo de 50 notas (sin contar los silencios).
La melodía debe repetirse infinitamente: una vez que termine, debe esperar unos segundos y luego comenzar nuevamente desde el principio.
5-Duraciones de las Figuras Musicales:
            Blanca = 16 cuadraditos
            Negra = 8 cuadraditos
            Corchea = 4 cuadraditos
            Semicorchea = 2 cuadraditos

            Silencio de Blanca = -16 cuadraditos sin nota
            Silencio de Negra = -8 cuadraditos sin nota
            Silencio de Corchea = -4 cuadraditos sin nota
            Silencio de Semicorchea = -2 cuadraditos sin nota

En el vector de nota va la nota musical, en el vector de figura la duración de dicha nota (cuadritos)
Si no se va a tocar ninguna nota porque quieren que este sonando nada, en el vector de notas iría un 0 y en el de figura el silencio correspondiente
Utiliza las notas musicales de la biblioteca pitches.h - estas deben ser declaradas como constantes globales sin tipo y solo debes incluir las notas que vas a usar.  ( que tiene el formato NOTE_G3 = 196  )
           
Puntos a considerar:
La calidad estética o la complejidad de la melodía no será un factor determinante en la evaluación. Lo importante es la originalidad y el cumplimiento de los requisitos.
Asegúrate de que tu código sea claro y esté bien comentado.
Asegúrate de que el vector de notas y el vector de figuras estén
alineados verticalmente para que sea fácil ver qué nota corresponde con
qué figura, que coincidan uno debajo del otro verticalmente . Cada vector debe estar en una única línea.
El Arduino no puede reproducir dos notas simultáneamente. Asegúrate de que tu melodía solo toque una nota a la vez.
