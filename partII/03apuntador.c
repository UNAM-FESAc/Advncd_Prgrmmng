/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

 #include <stdio.h>

const int MAX = 3;

int main () {

   int  var[3] = {10, 100, 200};
   int  i, *ptr;

   ptr = var;

   for ( i = 0; i < MAX; i++) {
      printf("Direccion de var[%d] = %p\n", i, ptr );
      printf("\t\t\tValor de var[%d] = %d\n", i, *ptr );
      ptr++;
   }
	
   return 0;
}
