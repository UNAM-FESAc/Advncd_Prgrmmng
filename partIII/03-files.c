/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
 
int main () 
{
  FILE * archivo;
  char caracter;
  archivo = fopen ( "03-files01.txt", "w" );// asigna fopen() a archivo
  
  printf("\nIntroduce un texto: \n");
  
  while((caracter = getchar()) != '\n')
    {fputc(caracter, archivo);}

 fclose ( archivo ); // cerrar el archivo
  printf("\nRevisa el archivo 03-files01.txt\n");    
  return 0;
}

