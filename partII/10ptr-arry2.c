/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int longitud(char * cadena);


void main()
{

char cad[] = "Universidad Nacional Autonoma de Mexico";

printf("La longitud de %s es %d \n", cad, longitud(cad));

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
