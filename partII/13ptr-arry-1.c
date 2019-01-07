/*
Observemos un codigo con arreglos como apuntadores de tipo 
char

*/

#include <stdio.h>

int main()
{
  // Definimos el arreglo de tipo char. Tambien un apuntador
  char * data[] = {"enero1","enero2","enero3","enero4","enero5"}, * ptr_data;
  // Declaramos un entero (parametro de iteracion)
  int i;

  // Inicializamos el apuntador
  ptr_data = data[0];
  
 printf("Valores guardados: \n");

 for(i = 0; i < 5; i++)
   {
     printf("%s\n", * (data + i));
     printf("%s\n",    data[i]);
   }
 
   return 0;
}

