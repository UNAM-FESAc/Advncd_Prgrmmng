/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos


#include <stdio.h>

int main() 
{
    int i, * ptr_i, ** ptr_ptr_i;
    i = 10;
    ptr_i = &i;
    ptr_ptr_i = &ptr_i;    
    printf("ptr_ptr_i = %p\n ptr_1= %p\n i =%i\n",\
	   &ptr_ptr_i, &ptr_i, i);
    return 0;
}
