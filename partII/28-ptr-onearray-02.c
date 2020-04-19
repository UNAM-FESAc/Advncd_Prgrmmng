/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h> 
  
int main() 
{ int i,j;
  int arr[3][4] = {  
                    {10, 11, 12, 13},  
                    {20, 21, 22, 23},  
                    {30, 31, 32, 33}  
                  }; 
  int (*ptr)[4]; 
  ptr = arr; 

for(i=0;i<=2;++i){
for(j=0;j<=3;++j){
printf("Salida: %d\n", *(*(ptr + i) + j) );
};
};



/**
  printf("%p %p %p\n", ptr, ptr + 1, ptr + 2); 
  printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2)); 

  printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3)); 
  printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]); 
/**/



  return 0; 
} 
