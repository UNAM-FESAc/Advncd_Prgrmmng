/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>

int main () {

   char cad1[10], cad2[10], cad3[10];
   int gru;
   FILE * fp;

   fp = fopen ("12-files.txt", "a+t");
   fputs("Somos el grupo 2251\n", fp);
   rewind(fp);
   fscanf(fp, "%s %s %s %d", cad1, cad2, cad3, &gru);

   printf("Lee la cadena 1 |%s|\n", cad1 );
   printf("Lee la cadena 2 |%s|\n", cad2 );
   printf("Lee la cadena 3 |%s|\n", cad3 );
   printf("Lee la cadena 4 |%d|\n", gru );

   fclose(fp);
   
   return 0;
}


