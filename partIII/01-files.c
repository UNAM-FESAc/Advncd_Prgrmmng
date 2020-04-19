/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
int main () 
{
  FILE * archivo;
  char * nom[2] = {"licencia0.est","licencia1.est"};
  archivo = fopen ( nom[0], "a" );
  fclose ( archivo );
  return 0;
}

