# Competencia educativa

Este simple proyecto apunta a colaborar con la implementación de la "gamificación" en clase y a fomentar el trabajo en equipo. El objetivo principal es permitir al docente/tutor/facilitador la organización de "competencias" educativas para repasar conceptos o evaluar conocimientos generales.

Desarrollado en Qt Creator, bajo Windows 64 bits.

**Versión: 1.0 (septiembre 2019)**


## Requerimientos para la ejecución

Requiere el framework Qt 4.3 o superior.
  
Para ejecutar el programa, ejecutar Competencia.exe. En caso de errores por bibliotecas faltantes, incluirlas de alguna de las siguientes formas:
  
A) Copiar las bibliotecas necesarias a la carpeta del programa, desde la carpeta de bibliotecas de Qt (por ejemplo, C:\Qt\Qt5.12.0\5.12.0\mingw73_64\bin).
    
B) Agregar la ruta de la carpeta de bibliotecas de Qt a la variable de entorno PATH. Aclaración: agregar la ruta a PATH puede causar que otras aplicaciones que necesiten una versión diferente de Qt no funcionen adecuadamente por utilizar las bibliotecas que se encuentran en esta ruta.

Este programa es un apoyo para realizar "competencias" en clase, de forma presencial. Requiere una pantalla de tamaño adecuado, o proyección de la pantalla sobre una pared, de modo que todos los estudiantes puedan verla cómodamente.


## Funcionamiento

*Nota: la herramienta está pensada para su utilización en clases presenciales*

Los competidores se dividirán en dos equipos y cada equipo seleccionará un "representante".

Por turnos, el representante de un equipo se colocará de espaldas a la pantalla (de manera que no pueda verla), mientras el resto del equipo estará frente a él (de forma que pueda ver la pantalla).

El moderador (docente) presionará el botón "Equipo 1" o el botón "Equipo 2" para indicar cuál de los dos está compitiendo (no es necesario para la funcionalidad básica del programa: sólo cambia el color de fondo). Luego escribirá una palabra o concepto en el espacio disponible en el centro de la pantalla. Cuando el equipo está listo para comenzar, presionará el botón "Empezar" que dejará correr el reloj.

El resto del equipo debe ayudar a su representante a que adivine la palabra o concepto, sin utilizar la o las palabras escritas por el moderador. El turno del equipo llega a su fin si el representante adivina la palabra o si el reloj llega a 0:00.

Finalizado el turno, si el representante acertó, el moderador incrementará el puntaje del equipo utilizando el botón "^" que se encuentra debajo de la etiqueta de puntaje. A continuación, el turno pasará al otro equipo.

El reloj puede detenerse presionando el botón "Detener". Al presionar "Empezar" se reiniciará y comenzará a correr automáticamente desde 1:00.


