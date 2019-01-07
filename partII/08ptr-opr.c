/*

Programa para mostrar la inicializacion de un puntero e indireccion.
*/
#include<stdio.h>

int main(){

int edad, *p_edad;

// inicializacion
p_edad=&edad;


printf("Cual es tu edad? \n");
 scanf("%d", &(*p_edad));

// Valor de edad
printf("(Valor de la variable) Tu edad es %d anios\n", edad);

// indireccion
printf("(Indireccion p_edad) Tu edad es %d anios\n", * p_edad);

return 0;
}
