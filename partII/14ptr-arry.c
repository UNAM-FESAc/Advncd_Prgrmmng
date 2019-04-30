/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
 
const int MAX = 5;
 
int main () {
   int i = 0, j=0;

   char * names[] = {
      "Simpson, H.",
      "Simpson, M.",
      "Simpson, L.",
      "Simpson, B.",
      "Simpson, M.",
   };

for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s La direccion de memoria es %p\n", i, names[i], &(names[i]));
}
   return 0;
}
