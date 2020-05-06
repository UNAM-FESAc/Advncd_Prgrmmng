/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main()
{
FILE * archivo16;
char calificaciones[15] = "16-files.bin";
int leer[15], i;

archivo16 = fopen(calificaciones, "r+b" );
printf( "\nLeyendo los datos del archivo \"%s\":\n", calificaciones); 
rewind(archivo16);

fread( leer, sizeof(int), sizeof(calificaciones), archivo16 );

for( i=0; i<9; i++ ){printf( "%d\t", leer[i] );}
printf( "\n");
fclose(archivo16);
return 0;
}
