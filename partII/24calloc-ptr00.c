/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
int m=4, n=0;
int * p2;
 p2 = calloc(m, sizeof(int[m]));
for(n=0; n<m; ++n){
    *(p2+n)+=n*n;
printf("p2[%d] = %d y %p Bytes, %zu\n", n, *(p2+n), (p2+n), sizeof(p2[n]);
}
    free(p2);
return 0;
    
}
