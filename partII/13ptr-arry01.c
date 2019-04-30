/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>

int main()
{

  char data[]= {"enero y febrero"};
char * ptrdata = data;
  int i;

 printf("Valores guardados: \n");

 for(i = 0; i < strlen(ptrdata); i++)
{
     printf("%c\n", * (ptrdata+i));
}

   return 0;
}


