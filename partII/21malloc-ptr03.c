/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
// Ejercicios: 
// 1. implementa malloc().
// 2. Implementa otras funciones creadas por el usuario (convertir cadena, transformar la cadena).
// 2. haz que el tamano dependa de información externa (cuenta la cadena) 
// 3. Crea archivos de cabecera y externos.
#include <stdio.h>
#include <stdlib.h>

int longitud(char *);

int main()
{
    char arreglo[20];
char * cadena=arreglo;
int cuenta = 0;
printf("Dame el nombre ");
scanf("%s", &(*cadena));
printf("Longitud %d",longitud(cadena));
return 0;
}


int longitud(char * cadena)
{
	int cuenta=0;
while (* cadena++)
	{
		cuenta++;
	}
return cuenta;
}

