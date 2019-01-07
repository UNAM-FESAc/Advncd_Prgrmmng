#include <stdio.h>

int main () {

 /* definicion de la variable */
   int  var = 20;
   /* declaracion de la variable apuntador */  
   int  *ip;

/* guardar direccion de var en la variable apuntador*/
   ip = &var;  

   printf("La direccion de la variable var es: %x\n", &var  );

   /* Direccion guarda en la variable apuntador*/
   printf("La direccion guardada en la variable  ip es: %x\n", ip );

   /* Aceder al valor usando el apuntador */
   printf("Valor de la variable *ip: %d\n", *ip );

   return 0;
}
