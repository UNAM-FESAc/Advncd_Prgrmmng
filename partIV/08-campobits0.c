/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>

/* Definicion de una estructura simple */
struct {
   unsigned int var1;
   unsigned int var2;
} st1;

/* Definicion de un campo de bits */
struct {
   unsigned int var1 : 30;
   unsigned int var2 : 2;
} st2;
 
int main(){
   printf("Tamanio de memoria ocupada por st1= %d\n", (int)sizeof(st1));
   printf("Tamanio de memoria ocupada por st2= %d\n", (int)sizeof(st2));
   return 0;
}
