/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>
/* Definicion de una estructura simple */
struct {
   unsigned int var1;
   unsigned int var2;
   unsigned int var3;
   unsigned int var4;
   unsigned int var5;
   unsigned int var6;
} st1;
/* Definicion de una campo de bits */
struct {
   unsigned int var1 : 15;
   unsigned int var2 : 1;
   unsigned int var3 : 21;
   unsigned int var4 : 10;
   unsigned int var5 : 10;
   unsigned int var6 : 15;
} st2;
 
int main(){

   printf("Tamanio de memoria ocupada por (st1) la estructura= %d\n", (int)sizeof(st1));
   printf("Tamanio de memoria ocupada por (st2) el campo de bits= %d\n", (int)sizeof(st2));
   return 0;
}
