/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

void funcionA(int a, int b);
void funcionB(int * a, int * b);

void main(){
  int aa, bb;
  printf("De el valor de dos numeros enteros a, b:");
  scanf("%d, %d", &aa, &bb);
    funcionA(aa, bb);
    funcionB(&aa, &bb);

}

void funcionA(int a, int b)
{
  printf("Los valores de a=%d y b=%d, usando paso por copia\n", a, b);
}

void funcionB(int * a, int * b){
  printf("Los valores de a=%d y b=%d, usando paso por referencia\n", * a, * b);
}

