/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
 
int main () 
{
<<<<<<< HEAD
  FILE *archivo;
  char caracter;

  archivo = fopen ( "03-files01.txt", "a" );
  printf("\nIntroduce un texto: \n");

  while((caracter = getchar()) != '\n')
  {fputc(caracter, archivo);}
 fclose ( archivo );
=======
  FILE * archivo;
  char caracter;
  archivo = fopen ( "03-files01.txt", "w" );// asigna fopen() a archivo
  
  printf("\nIntroduce un texto: \n");
  
  while((caracter = getchar()) != '\n')
    {fputc(caracter, archivo);}
>>>>>>> c77a9bc6a0e0bbbcdddd808feb7ec11ab64db53d

 fclose ( archivo ); // cerrar el archivo
  printf("\nRevisa el archivo 03-files01.txt\n");    
  return 0;
}

