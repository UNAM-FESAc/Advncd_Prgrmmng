/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <ctype.h>

int main () 
{
  FILE * f_ptr;
char c;

f_ptr = fopen("ejemplo.dat", "w");

printf("Escribe algo (terminal) \n");

fprintf(f_ptr,"Escribe algo (fichero)\n");
do{
putc(toupper(c = getchar()), f_ptr);
}while(c !='\n');

  fclose (f_ptr);
  return 0;
}

