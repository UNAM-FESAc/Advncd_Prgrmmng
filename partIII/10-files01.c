/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main () {
  FILE * fptr;
  char cr[70];

  fptr = fopen("10-files00.txt","r");
   if(fgets(cr, 70, fptr)!=NULL) {
      puts(cr);   
   }
fclose(fptr);
   
   return(0);
}
