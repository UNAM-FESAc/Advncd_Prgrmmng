/*
Programa que calcula el cubo de un numero introducido por terminal.
Observa y analiza el codigo, discute con tus companeros 
y con el profesor. 
*/

#include <stdio.h>
void Func_Cubo(float * numero);

void main(){

  float num;

printf("De un valor: ");
scanf("%f", &num);
Func_Cubo(&num);
}

void Func_Cubo(float * numero){
 * numero = (* numero) * (* numero) * (* numero);
 printf("El cubo es: %2.2f \n", * numero);
}

/*
El estudiante debe usar este codigo para que el codigo calcule la 
suma, la resta y la division del mismo numero N veces, donde N 
sera un numero dado por terminal. Ayuda: implemente diferentes funciones 
con apuntadores. 
*/
