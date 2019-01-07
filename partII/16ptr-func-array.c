/*
Programa para mostrar el paso por referencia.
*/

#include <stdio.h>

// Declaramos las funciones
void funcionA(int a, int b);
void funcionB(int * a, int * b);

void main(){
  // declaramos las variables locales
  int aa, bb;

  printf("De el valor de dos numeros enteros a, b:");
  scanf("%d, %d", &aa, &bb);

    funcionA(aa, bb);
    funcionB(&aa, &bb);

}

// Definimos la funcion para usar paso por copia
void funcionA(int a, int b)
{
  printf("Los valores de a=%d y b=%d, usando paso por copia\n", a, b);
}

// Definimos la funcion para usar paso por referencia
void funcionB(int * a, int * b){
  printf("Los valores de a=%d y b=%d, usando paso por referencia\n", * a, * b);
}

/*
Note lo que sucede cuando en la declaracion de la funcionB se omiten 
los identificadores (argumentos fictcios).

El estudiante debe usar paso por referencia para intercambiar informacion con funciones que 
tengan diferente tipo de parametros. P.e.: int, float, char, etc.
Ayuda: modifique el programa para intercambie un caracter y, posteriormente, una cadena.


Ir al ejercicio 10 de GitHub/practice-works/classworks.txt
*/
