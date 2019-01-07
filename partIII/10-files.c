#include<stdio.h>

int main(){
  FILE * fptr;

  char cad[160] = "Bienvenidos al curso de programacion estudiantes de MAC";

  fptr = fopen("10-files.txt","r");

  fputs(cad, fptr);
  

 if( fgets(cad, sizeof(cad), fptr)!=NULL ) {
puts(cad);

   }


fclose(fptr);




  return 0;
}
