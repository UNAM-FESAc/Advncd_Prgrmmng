/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

int main()
{
    int var = 2;
    int *pvar=&var;
    *pvar=3;
    int **ppvar=&pvar;
    **ppvar=4;
    int ***pppvar=&ppvar;
    **ppvar=4;
    printf("%d, &var=%p\n", var, &var);    
    printf("pvar=%p, &pvar=%p\n", pvar, &pvar);
    printf("ppvar=%p, &ppvar=%p\n", ppvar, &ppvar);
    printf("pppvar=%p, &pppvar=%p\n", pppvar, &pppvar);
    printf("***pppvar=%d", ***pppvar);
 return 0;   
}