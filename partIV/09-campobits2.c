#include<stdio.h> 
struct 
{
   unsigned int a: 6;
} data;
 
 
/*
Realiza cambios en la cantidad bits u observa que sucede
*/

int main()
{

   
   data.a = 45;
   
   printf("%d\n", data.a);
   printf("Address of data.a =  %X\n", data.a );
   return 0;
}

/*
Realiza cambios en el numero data.a y observar lo que sucede.
Modifica todos los datos.
Implementa documentacion interna.
*/
