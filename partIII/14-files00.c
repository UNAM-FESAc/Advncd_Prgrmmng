/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

int main () {

   FILE * fp;

   fp = fopen("14-files00.txt","w+");
   fputs("Este es tu curso", fp);
  
   fseek( fp, 15, SEEK_SET);

   fputs("de programacion en C.", fp);

   fclose(fp);
   
   return(0);
}

