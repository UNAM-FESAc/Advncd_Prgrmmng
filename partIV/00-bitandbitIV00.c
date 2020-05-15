/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
 
int main () 
{
  char a = 'A';
  char b = 'B';
  int resultado;
  printf("a = %c y b = %c\n", a, b);
  resultado = a & b;
  printf("a & b  = %c\n",resultado);
  return 0;
}

