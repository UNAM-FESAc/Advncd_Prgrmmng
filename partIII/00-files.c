/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h> 
int main () 
{
  FILE * archivo;
  archivo = fopen ("prueba.txt", "a");
  fclose ( archivo );
  return 0;
}