/*
Tarea:
Implemente este codigo para calcular el numero mas chico
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    float *data;

    printf("Ingrese el numero total de elementos(1 a 100): ");
    scanf("%d", &num);

    // Asigna la memoria para  'num' elementos.
    data = (float*) calloc(num, sizeof(float));

    if(data == NULL)
    {
        printf("Error! Memoria no asignada.");
        exit(0);
    }

    printf("\n");

    // Almacena el numero ingresado por el usuario.
    for(i = 0; i < num; ++i)
    {
       printf("Ingrese el %d-numero: ", i + 1);
       scanf("%f", data + i);
    }

    // Bucle para almacenar el numero mas grande en los datos de la direccion
    for(i = 1; i < num; ++i)
    {
       if(*data <*(data + i))
           *data = *(data + i);
    }

    printf("El elemento mas grande es = %.4f\n", *data);

    free(data);
    return 0;
}



/*
Programa implementado de:
https://www.programiz.com/c-programming/examples
/dynamic-memory-allocation-largest
*/
