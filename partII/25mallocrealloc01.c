/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
#define nold 10
#define nnew 100

int main(void)
{

    int *pa = malloc(nold * sizeof *pa); 
    if(pa) {
        printf("%zu bytes asignados. \n\t Enteros almacenados: \n", nold*sizeof(int));
        for(int n = 0; n < 10; ++n)
            printf("%d ", pa[n] = n);
    }
 
    int *pb = realloc(pa, nnew * sizeof *pb);
    if(pb) {
        printf("\n%zu bytes asignados. \n\t Primeros 10 enteros almacenados: \n", nnew*sizeof(int));
        for(int n = 0; n < 10; ++n)
            printf("%d ", pb[n]); 
	printf("\n");
        free(pb);
    } else {
        free(pa);
    }
}
