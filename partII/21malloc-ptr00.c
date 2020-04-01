/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
   char *str;

   str = (char *) malloc(1);
   strcpy(str, "Universidad"); //Nacional  Autonoma de Mexico
   printf("String = %s y %zu\n", str,sizeof(1));

   free(str);
   
   return(0);
}

