/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

int main(void)
{
  int mi_arreglo[] = {-1, 2, -3, 4, -5}, * ptr, i;

  ptr=&mi_arreglo[2];

  for (i = 0; i < 5; i++)
    {
      printf("*(ptr + %d) = %d \t\tmi_arreglo[%d] = %d \n", i, * (ptr + i), i, mi_arreglo[i]);
    }
  return 0; }

