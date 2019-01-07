/*
(Recuerdo que los textos implementados omiten acentos)

Con este programa veremos como crear archivos externos en C.

Lo primero que debemos considerar es que usaremos el estandar <stdio.h>
que nos permite usar varias funciones para la edicion de archivos.

De forma general debes considerar las siguientes lineas:

1) Agregar un tipo 
	FILE *Nom_apuntador
2) Abrir el archivo con 
	fopen("nombre_archivo.extension", "parametros")

	nombre_archivo.extension, debes darle un nombre al archivo.

	parametros puede ser:
 	- r abre para leer
 	- w abre para crear nuevo archivo y escribir (pierde informacion, en caso de existir)
	- a abre para escribir (crear) al final del archivo
	- r+ abre un archivo para lectura y escritura de un archivo existente
	- w+ crea o sobreescribe (en) un archivo para lectura y escritura(pierde informacion, 
									en caso de existir)
	Hay otros parametros que no discutiremos por el momento.

3) Cerrar el archivo con
	  fclose (Nom_apuntador);

4) Escribir algo en el archivo:
	Podemos realizarlo de diferentes formas:

		fputc(variables_introducir, Nom_archi_apuntador) para poner caracteres en el archivo. 

**********************************************
Tarea numero 15 del archivo classworks.txt

**********************************************
*/

