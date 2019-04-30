/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include<stdio.h>

int main(){
  FILE * fptr;
	char cadr;


fptr = fopen("11-fles00.txt","a");

puts("Escribe algo (un caracter)\n");

scanf("%c", &cadr);

fprintf(fptr,"El caracter es...%c\n", cadr);

fclose(fptr);
  return 0;
}

