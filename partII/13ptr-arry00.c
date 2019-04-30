/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main()
{

  char * data[5] = {"enero1","enero2","enero3","enero4","enero5"};
  int i;

 printf("Valores guardados: \n");

 for(i = 0; i < 5; i++)
{
     printf("%s\n", * (data + i));
}

   return 0;
}


