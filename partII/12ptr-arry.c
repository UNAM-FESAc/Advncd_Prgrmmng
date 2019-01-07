/*

En el siguiente programa se demuestra que 
&clases[i]) es equivalente a (clases+i)
y que 
clases[i] es equivalente a *(clases + i)
*/

#include<stdio.h>

int main(){

int i, sum = 0;

int dt;

printf("Ingrese el numero de datos a sumar\n");
scanf("%d", &dt);

int clases[dt];

printf("Ingrese %d numeros\n", dt);

for(i = 0; i < dt; ++i)
{

scanf("%d", &clases[i]);
sum += clases[i];
}

printf("La suma es %d\n", sum);

return 0;
}

/*
El estudiante debe realizar los cambios mencionados en la parte 
superior de este codigo, observar que sucede y explicar por que.
*/
