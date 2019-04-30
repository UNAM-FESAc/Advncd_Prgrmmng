/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include<stdio.h>
struct libros{
char titulo;  // 1
int num;	// 4
double version;	// 8
};
int main(){
  struct libros tam;

printf("tamano %i\n", sizeof(tam.titulo));
printf("tamano %i\n", sizeof(tam.num));
printf("tamano %i\n", sizeof(tam.version));
printf("tamano %i\n", sizeof(tam));
return 0;
}


