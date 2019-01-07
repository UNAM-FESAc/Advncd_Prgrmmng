#include<stdio.h>

void bin(int);

int main()
{
   int num;
   
   printf("Introduce el numero que deseas convertir a binario:\n");
   scanf("%d",&num);
   bin(num);
   
   printf("\n");
   return 0;
}



void bin(int num)
{
   int aux;

   if(num!=0)
{
   aux=num%2;
   num=num/2;
   bin(num);
   printf("%d",aux);
}else{
return;
}
}
