#include<stdio.h> 
struct sData
{
   unsigned int a: 2;
   unsigned int b[5]: 2;
};
 
 
int main()
{
   struct sData data;
   
   data.a = 2;
    
   return 0;
}
