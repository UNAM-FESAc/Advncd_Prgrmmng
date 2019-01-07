#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

   char name[8];
   char *description;

puts("Escriba algo");
scanf("%[^\n]", name);

description = name;
   /* Asignacion dinamica de 1 byte de memoria tipo char a description*/
description = (char *) malloc(1);

strcpy(description, "estas en clase de Programacion II");
   
   printf(" %s %s\n",name, description );
}
