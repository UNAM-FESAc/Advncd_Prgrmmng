/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    float *data;

    printf("Ingrese el numero total de elementos(1 a 10): ");
    scanf("%d", &num);


    data = (float*) calloc(num, sizeof(float));

    if(data == NULL)
    {
        printf("Error! Memoria no asignada.");
        exit(0);
    }

    printf("\n");

    for(i = 0; i < num; ++i)
    {
       printf("Ingrese el %d-numero: ", i + 1);
       scanf("%f", data + i);
    }
 

    for(i = 1; i < num; ++i)
    {
       if(*data <*(data + i))
           *data = *(data + i);
    }

    printf("El elemento mas grande es = %.4f\n", *data);

    free(data);
    return 0;
}

