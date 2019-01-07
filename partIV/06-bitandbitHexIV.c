
#include <stdio.h>
 
int main () 
{
  int a=0XF5;
  int b = 0XFA, resultado;

  printf("Los numeros son: a = 0x%X & b = 0x%X\n", a, b);

  printf("Los numeros son: a = %d & b = %d\n", a, b);

resultado = a & b;

  printf("Los numeros son: a  & b = 0x%X  \n", resultado);

  printf("Los numeros son: a  & b = %d  \n", resultado);

  return 0;
}

