/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
int main () 
{
  FILE * archivo;
  char nom[] = "licencia0.est";
  archivo = fopen ( nom, "a" );
  fclose ( archivo );
  return 0;
}

