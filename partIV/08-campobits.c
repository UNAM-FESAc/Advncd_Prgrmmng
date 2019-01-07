#include <stdio.h>
#include <string.h>

/* Definicion de una estructura simple */
struct {
   unsigned int var1;
   unsigned int var2;
} st1;

/* Definicion de una estructura con campo de bits */
struct {
   unsigned int var1 : 16;
   unsigned int var2 : 1;
   unsigned int var3 : 21;
   unsigned int var4 : 31;
   unsigned int var5 : 32;
   unsigned int var6 : 16;

} st2;
 
int main(){

   printf("Tamanio de memoria ocupada por st1= %d\n", (int)sizeof(st1));
   printf("Tamanio de memoria ocupada por st2= %d\n", (int)sizeof(st2));


   return 0;
}
