/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

int main(){
  int * ptr_x, * ptr_y;
  int a[6] = {50, 40, 30, 20, 10, 4};
  ptr_x = &a[0];
  ptr_y = &a[5];

  printf("ptr_x = %p; ptr_y = %p\n", ptr_x, ptr_y);
  printf("ptr_y - ptr_x = %d \n", (int)(ptr_y - ptr_x));

  return 0;
}


