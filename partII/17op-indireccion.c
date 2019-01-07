/*
El ejercicio del estudiante consiste en realizar documentacion de
este programa
*/

#include <stdio.h>
int main() 
{
    int v1, v2;
    int * ptr_v1, * ptr_v2;

    ptr_v1 = &v1;
    ptr_v2 = &v2;

    v1 = 12;
    v2 = 2;

    * ptr_v1 = 3;
    * ptr_v2 = 4;

    * ptr_v2 = * ptr_v1;
printf("Valor final para * ptr2 = %i\n", * ptr_v2);

    return 0;
}
