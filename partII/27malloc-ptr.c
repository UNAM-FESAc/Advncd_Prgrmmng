/*
Implementa documentacion interna

*/

#include<stdio.h>
#include<stdlib.h>

void Func_Reordenar(int n, int *x);

int main(){
  int i, n, *x;


  printf("Numeros a ingresar\n");
  scanf("%d",&n);
  printf("\n");

  // Asiganacion de memoria
  x = (int *) malloc(n * sizeof(int));
  for(i = 0; i < n; ++i)
    {
      printf("%d-elemento; x = ", i + 1);
      scanf("%d", x + i);
}
  // Reordena la lista
  Func_Reordenar(n, x);

  printf("Lista invertida\n");
  for(i = 0; i < n; ++i){
    printf("%d-elemento x = %d\n",i + 1,*(x+i));
}

  free(x);
  return 0;
}


void Func_Reordenar(int n, int *x){
  int i, item, temp;

  for (item = 0; item < n - 1; ++item)
    for (i = item + 1; i < n; ++i){
	temp = *(x + item);
	*(x +item) = *(x + i);
	*(x +i) = temp;
    }
}
