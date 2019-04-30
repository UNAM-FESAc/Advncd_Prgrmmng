/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, *ptr, sum = 0;

    printf("Ingrese el numero de elementos: ");
    scanf("%d", &num);

    ptr = (int*) malloc(num * sizeof(int));  

    if(ptr == NULL)                     
    {
        printf("Error! Memoria no asignada.");
        exit(0);
    }

    for(i = 0; i < num; ++i)
    {
      printf("escriba el %d-numero\n",i+1);
      scanf("%d", ptr + i);
      sum += *(ptr + i);
    }
    printf("Suma = %d. \n \tEl tamanio es %zu B.\n", sum, num * sizeof(int));

    free(ptr);
    return 0;
}
