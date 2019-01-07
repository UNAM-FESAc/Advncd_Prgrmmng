/*
Ejemplo de un archivo llamando a otro.
gcc 06-fun-02.c
*/

#include<stdio.h>
#include"06-fun-01.c"

float suma(float x, float y);

int main(){

float a = 2;
float b = 4;
printf("suma a + b = %f\n",suma(a, b));


return 0;
}
