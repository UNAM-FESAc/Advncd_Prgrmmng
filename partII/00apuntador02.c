/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
int main(){
    int var1=6, var2=4, var3=0;
    int * var1_ap, * var2_ap;

var1_ap = &var3;
var3 = var1 + var2;
printf("%p %d %p %d\n", var1_ap, var3, &var3, *var1_ap);
return 0;
}
