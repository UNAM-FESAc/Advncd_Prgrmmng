/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
/*
Ejemplo de un archivo llamando a otro.
gcc 06-fun-02.c
*/

#include<stdio.h>
float suma(float x, float y);

int main(){
float a = 2;
float b = 4;
printf("suma a + b = %f\n",suma(a, b));

return 0;
}
