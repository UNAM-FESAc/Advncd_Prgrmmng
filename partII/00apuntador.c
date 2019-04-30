/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#define N 5
int main () {
   int  var1, i;
   char var2[N];

   printf("Direccion de la variable var1: %p\n", &var1  );
   printf("Direccion de la variable var2: %p\n", &var2  );

for(i=0; i<N; i++){
   printf("Direccion de la variable var2[%i]: %p\n", i, &var2[i]  );
   }

   return 0;
}

