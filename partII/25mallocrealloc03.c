/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
#define nold 1
#define nnew 2

struct dat
{
    int m1;
    int m2;
    char m3;
};

int main()
{
 struct dat * pdatA, * pdatB;

pdatA = (struct dat *) malloc(nold*sizeof(struct dat)); 
//free(pdatA);
printf("%zu bytes asignados.\n", nold*sizeof(struct dat));
free(pdatA);
pdatB = (struct dat *) realloc(pdatA, nnew*sizeof(struct dat));

//free(pdatB);
printf("\n%zu bytes asignados\n", nnew*sizeof(struct dat));

free(pdatB);
return 0; 

}
