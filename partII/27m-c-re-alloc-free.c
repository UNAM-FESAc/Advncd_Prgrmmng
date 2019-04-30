/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main() 
{
    int n;
    int num;
    int *sum;
    printf("Escribe un numero: ");
    scanf("%d", &n);
     
   sum =(int *)malloc(sizeof(int));
    if( sum==NULL )
    {
        printf("Error-no se puede asignar la memoria requerida\n");
    } 
    else
    {
        printf("Dame otro numero: ");
        scanf("%d", sum);
        *sum=n+*sum;
        printf("La suma es: %d\n", *sum );
    }
   free(sum);
 
    sum =(int *)calloc( 2, sizeof(int));
    if( sum==NULL )
    {
        printf("Error-no se puede asignar la memoria requerida\n");
    } 
    else
    {
        printf("Escribe un numero: ");
        scanf("%d", &n);
        printf("Dame otro numero: ");
        scanf("%d", sum);
        *sum=n-*sum;
        printf("La resta es: %d\n", *sum );
    }

    sum=(int *)realloc(sum, 3* sizeof(int));
    if( sum==NULL )
    {
        printf("Error-no se puede asignar la memoria requerida\n");
    } 
    else
    {
        printf("Escribe un numero: ");
        scanf("%d", &n);
        printf("Dame otro numero: ");
        scanf("%d", sum);
        *sum=n*(*sum);
        printf("La multiplicacion es: %d\n", *sum );
    }
   free(sum);
    
}
