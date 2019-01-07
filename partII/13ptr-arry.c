/*
Veamos como podemos acceder a los datos de un arreglo de tipo entero 
usando el operador de indireccion

*/

#include <stdio.h>

int main()
{
   	char * data[5] = {"enero1","enero2","enero3","enero4","enero5"};
	int i;


 printf("Valores guardados: \n");


   for(i = 0; i < 5; ++i)
{
      printf("%s\n", * (data + i));
}

   return 0;
}


