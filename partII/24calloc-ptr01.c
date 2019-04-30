/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
  
    int * ptr; 
    int n = 5, i, sum = 0; 

    printf("Ingrese el numero de elementos: %d\n", n); 
  
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
