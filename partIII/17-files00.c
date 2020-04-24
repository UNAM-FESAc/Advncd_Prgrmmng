/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main()
{
FILE * archivo16;
char calificaciones[25] = "16-files.bin";
int leer[10], i;

archivo16 = fopen(calificaciones, "rb" );
printf( "\nLeyendo los datos del archivo \"%s\":\n", calificaciones); 
rewind(archivo16);
fread( leer, sizeof(int), sizeof(calificaciones[25]), archivo16 );
for( i=0; i<9; i++ ){printf( "%d\t", leer[i] );}
printf( "\n");
fclose(archivo16);
return 0;
}
