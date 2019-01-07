#include <stdio.h>
 
int main () 
{
  FILE *archivo;
  
  char caracter;
  

  archivo = fopen ( "03-files01.py", "a" );
  
  printf("\nIntroduce un texto: \n");

  
  while((caracter = getchar()) != '\n')
    {
	fputc(caracter, archivo);
    }

 
 fclose ( archivo );

  printf("\nRevisa el archivo prueba.txt\n");    

  return 0;
}

