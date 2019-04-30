/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>

struct dat
{
    int m1;
    int m2;
    char m3;
  char m4;
};

int main()
{
    struct dat * pdat;

    pdat=(struct dat *) malloc (sizeof(struct dat));
    (*pdat).m1=10;
    (*pdat).m2=3;
    (*pdat).m3='a';
    (*pdat).m4='h';

      printf("%d %d %c, %c. El tamanio es %zu B.\n",\
	     (*pdat).m1,(*pdat).m2,(*pdat).m3, (*pdat).m4,sizeof(struct dat));

    free(pdat);
    return 0;
}
