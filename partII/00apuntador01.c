#include <stdio.h>

int main(){
    int var1=6, var2=4;
    int * var1_ap, * var2_ap;


    var1_ap = &var1;
    var2_ap = &var2;

    printf("%p %d\n", var1_ap, var1);
    printf("%p %d\n", var2_ap, var2);


}
