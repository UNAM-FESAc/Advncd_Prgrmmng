#include<stdio.h>

int main(){

  int month[12]={31, 28, 31, 30, 31, 30,\
31, 31, 30, 31, 30, [11]=0};
 int i, sum=0;

 for(i = 0; i < 12; i++){
   sum += month[i];
}
 printf("El total es: %d\n", sum);

  return 0;
}
