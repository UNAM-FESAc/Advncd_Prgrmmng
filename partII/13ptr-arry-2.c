#include<stdio.h>

int main(void)
{
  int mi_arreglo[] = {-1, 2, -3, 4, -5}, * ptr, i;


  ptr=&mi_arreglo[0];
  /*
Es importante resaltar que el nombre del primer arreglo es
la direccion del primer elemento que contiene el arreglo
*/

  for (i = 0; i < 5; i++)
    {
      printf("\t\t ptr + %d = %d\n ", i, * (ptr + i) );
      printf("\n mi_arreglo[%d] = %d\n ", i, mi_arreglo[i]);
    }
  return 0; }

