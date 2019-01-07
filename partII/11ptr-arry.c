/*

Un puntero que se indirecciona para obtener los valores de otras 
varibles.
*/

#include<stdio.h>

int main(){

float v1 = 3.4;
float v2 = 2.9;

float * ptr_vi;

ptr_vi = &v1;
printf("salida uno %f\n", * ptr_vi);


ptr_vi = &v2;
printf("salida dos %f\n", * ptr_vi);

return 0;
}
