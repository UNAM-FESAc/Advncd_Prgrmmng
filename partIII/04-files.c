/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>

int main () 
{
  char * archivo[2]={"04-files01.dat", "04-files01.txt"};//, * archivo2;
  FILE * archivo1, * archivo2;

  archivo1 = fopen ( archivo[0], "at" );
  archivo2 = fopen ( archivo[1], "at" );

  fclose(archivo1);
  fclose(archivo2);
  return 0;
}