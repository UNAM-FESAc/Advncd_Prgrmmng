/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main () {

   int  var = 20;

   int  *ip;

   ip = &var;  

   printf("La direccion de la variable var es: %x\n", &var  );

   printf("La direccion guardada en la variable  ip es: %x\n", ip );

   printf("Valor de la variable *ip: %d\n", *ip );

   return 0;
}
