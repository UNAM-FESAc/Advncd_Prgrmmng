/*Uso del operador ++ en los apuntadores*/

 #include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* La direccion del arreglo en el apuntador*/

   ptr = var;


   for ( i = 0; i < MAX; i++) {

      printf("Direccion de var[%d] = %x\n", i, ptr );
      printf("\t\t\tValor de var[%d] = %d\n", i, *ptr );

      /* usando el operador ++*/
      ptr++;
   }
	
   return 0;
}
