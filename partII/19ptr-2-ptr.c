/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

int main() 
{
    int i, * ptr_i, ** ptr_ptr_i;
    i = 10;
    ptr_i = &i;
    ptr_ptr_i = &ptr_i;    
    ** ptr_ptr_i = 30;
printf("Valor de i = %d, * ptr_i = %d y de ** ptr_ptr_i = %d\n",i ,* ptr_i, ** ptr_ptr_i);
printf("Valor de i = %p, * ptr_i = %p y de ** ptr_ptr_i = %p\n",i ,* ptr_i, ** ptr_ptr_i);

    return 0;
}
