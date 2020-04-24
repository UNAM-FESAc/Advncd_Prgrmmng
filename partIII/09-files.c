/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

int main(){
  FILE * fptr;
  char cr;

  fptr = fopen("09-files.txt","r");
  cr = fgetc(fptr);
  fclose(fptr);

  printf("El caracter del archivo es...%c\n", cr);
  return 0;
}
