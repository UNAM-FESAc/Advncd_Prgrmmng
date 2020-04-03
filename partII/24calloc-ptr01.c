/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
// Ejercicios:
// 1. Modifica el código para que el usuario ingrese el valor de n.
// 2. Implementa funciones creadas por el programador.
// 3. Modifica el código para que te regrese la misma lista de 
// 	elementos, pero en orden invertido. 
#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
    int * ptr; 
    int n = 5, i, sum = 0; 
    ptr = (int*)calloc(n, sizeof(int)); 
    if (ptr == NULL) { 
        printf("Error.\n"); 
        exit(0); 
    } 
    else { 
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
        printf("Los elementos del arreglo: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d ", ptr[i]); 
        } 
printf(" \n");
    } 
    return 0; 
} 
