/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

int main(){
  FILE * fptr;

char cad[160] = "Bienvenidos al curso de programacion estudiantes de MAC G2251";

fptr = fopen("10-files00.txt","w");
fputs(cad, fptr);

fclose(fptr);
return 0;
}
