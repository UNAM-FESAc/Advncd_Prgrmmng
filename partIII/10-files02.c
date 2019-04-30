/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
#define n 10
int main () {
  FILE * fptr;
  char * cr;
  cr=(char*) malloc(n*sizeof(cr));

  fptr = fopen("10-files00.txt","r");
   if(fgets(cr,n*sizeof(cr), fptr)!=NULL) {
      puts(cr);
   }

fclose(fptr);
   
   return(0);
}
