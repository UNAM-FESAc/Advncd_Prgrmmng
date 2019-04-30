/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>
int main(){

  FILE * fptr1;
  char c1;


  printf("Introduce un caracter \n");
  scanf("%c", &c1);

  fptr1 = fopen("08-files.txt","w");
  fputc(c1, fptr1);

  fclose(fptr1);



return 0;
}

