/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h> 
int add(int a, int b);
int subs(int a, int b);
int prod(int a, int b);

int main() 
{ 
	int (* fun_ptr[3])(int, int) = {add,subs,prod}; // precedencia
	printf("n+n=%d\n",(* fun_ptr[0])(2,3));
	return 0; 
}
int add(int a, int b) {return a+b;} 
int subs(int a, int b) {return a-b;} 
int prod(int a, int b) {return a*b;} 