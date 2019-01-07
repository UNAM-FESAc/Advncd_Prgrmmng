/*
Apuntadores a apuntadores y a apuntadores dobles
*/

#include <stdio.h>

int main() 
{
// declaracion de una variable, un apuntador y un apuntador de un apuntador
    int i, * ptr_i, ** ptr_ptr_i;

// Definicion de i
    i = 10;

// Referenciar la direccion de memoria de un entero a un apuntador
    ptr_i = &i;
    
// Referenciar la direccion de un apuntador a un doble apuntador
    ptr_ptr_i = &ptr_i;
// Definicion del valor con doble indireccion
    ** ptr_ptr_i = 30;

printf("Valor de i = %d, * ptr_i = %d y de ** ptr_ptr_i = %d\n",i ,* ptr_i, ** ptr_ptr_i);


printf("Valor de i = %p, * ptr_i = %p y de ** ptr_ptr_i = %p\n",i ,* ptr_i, ** ptr_ptr_i);

    return 0;
}

/*
Comenta tu analisis y conclusiones.
*/
