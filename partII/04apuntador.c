/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   ptr = &var[MAX-1];
	
   for ( i = MAX; i > 0; i--) {
      printf("Direccion de var[%d] = %p\n", i-1, ptr );
      printf("\t\t\tValor de var[%d] %d\n", i-1, *ptr );
      ptr--;
   }
	
   return 0;
}
