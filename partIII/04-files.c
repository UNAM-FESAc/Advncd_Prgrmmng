
#include <stdio.h>
#include <stdlib.h>
 
int main () 
{
  FILE * archivo1, * archivo2;
  
  
  archivo1 = fopen ( "04-files01.dat", "at" );
  archivo2 = fopen ( "04-files02.txt", "at" );
 
  fclose ( archivo1 );
  fclose ( archivo2 );

  return 0;
}

