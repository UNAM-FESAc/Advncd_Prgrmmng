/*
Veamos otro operador de direcciones de memoria
*/

#include <stdio.h>

void intercambio(int *a, int *b){ 
int aux = *a;
*a=*b; 
*b=aux;
}

int main(){
int i=3, j=50;

printf("i=%d y j=%d\n", i,j); 
intercambio(&i, &j); 

printf("i=%d y j=%d\n", i,j);

return 0; 
}

/*
El operador * lee o modifica el valor apuntado

*/
