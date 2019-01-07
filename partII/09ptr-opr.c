/*

Porograma para imprimir el abecedario usando apuntadores.
*/
#include<stdio.h>

char c;

int main(){

char * pcM; 

pcM = &c;



for (c = 'A'; c<= 'Z'; c++)
{

	printf("%c\n", * pcM);

}

return 0;
}
