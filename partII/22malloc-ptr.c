/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 10
int main() {

   char name[n*5];
   char * description;

puts("Escriba algo");
scanf("%[^\n]", name);

description = name;

 description = (char *) malloc(n* sizeof(char));
strcpy(description, "estas en clase de Programacion II");
   
   printf(" %s %s\n",name, description );
}
