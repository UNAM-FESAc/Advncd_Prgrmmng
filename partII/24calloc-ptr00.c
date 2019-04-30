/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
int m=4;
int * p2;
 

 p2 = calloc(m, sizeof(int[m]));

        for(int n=0; n<m; ++n)
            printf("p2[%d] = %d y %zu Bytes\n", n, *(p2+n), sizeof(int[n]));
  
    free(p2);
}
