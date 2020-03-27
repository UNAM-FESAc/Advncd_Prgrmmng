/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h> 
int fun(int a);

int main() 
{ 
	int (* fun_ptr)(int) = &fun; // precedencia

	printf("n*n=%d",(* fun_ptr)(2)); // 

	return 0; 
}
int fun(int a) {return a*a;} 