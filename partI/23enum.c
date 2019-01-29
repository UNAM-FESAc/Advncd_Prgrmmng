/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>
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

