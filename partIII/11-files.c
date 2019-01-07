#include<stdio.h>

int main(){
  FILE * fptr;
	char cadr;


fptr = fopen("11-fles.txt","a");

puts("Escribe un algo (un caracter)\n");

scanf("%c", &cadr);

fprintf(fptr,"El caracter es...%c\n", cadr);


fclose(fptr);
  return 0;
}

/*
Este programa captura un caracter.
Ejericio: modificar este programa para que capture una cadena de 
caracteres usando la funcion fprontf()
*/
