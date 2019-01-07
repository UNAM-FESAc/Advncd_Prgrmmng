#include <stdio.h>
// para usar la funcion de biblioteca tolower() que convierte las mayusculas 
// en minusculas
#include <ctype.h>

enum booleano
{
FALSE, TRUE
};


enum booleano vocal(char c);


void main()
{
char car;
int numvocal=0;

puts("\t\t\tIntroduce un texto\n");
puts("\t(Para terminar: Intro)\n");

while((car = getchar())!= '\n')
{
if (vocal(tolower(car))) 
{
	numvocal++;
}
}

printf("\n Total de vocales leidas: %d\n",numvocal);

}



enum booleano vocal(char c)
{
switch(c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
return TRUE;
default:
return FALSE;
}
}


/*
#include<stdio.h>

enum dias_semana{
	LUNES, MARTES, MIERCOLES,JUEVES,VIERNES, SABADO, DOMINGO
};


int main(){

enum dias_semana dia;

int i;

const int LUNES=0, MARTES=1, MIERCOLES=2,JUEVES=3,VIERNES=4, SABADO=5, DOMINGO=6;



for(i=0; i<=6; dia++){
printf("dias de la semana: %d", dia);
}

return 0;
}
*/
