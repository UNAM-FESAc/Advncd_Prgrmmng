
#include <stdio.h>
 
int main () 
{
  int a;
  int b = 8;

  printf("Introduzca un numero\n");
  scanf("%d",&a);

  printf("Comparamos con un binario para conocer el cuarto bit\n");
  printf("Los numeros son: a = %d & b = %d\n", a, b);

if(a & b){
  printf("El cuarto bit es 1 \n");
}else{
  printf("El cuarto bit es 0 \n");
}

  return 0;
}
/*
Ejericio:
El estudiante debe modificar (o crear)
el codigo para diga el valor de un digito 
binario de un numero introducido por consola.
*/
