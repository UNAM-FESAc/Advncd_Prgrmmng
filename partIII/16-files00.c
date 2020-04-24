/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>

int main()
{
FILE * archivo16;
char nombre[15] = "16-files.bin";
unsigned int i, calificaciones[10] = { 9, 7, 4, 5, 7, 8, 9, 3, 5, 1};

archivo16 = fopen( nombre, "w+b" );
printf( "archivo16: %s -> ", nombre );
printf( "Escribiendo al archivo:\n\n" );

for( i=0; i < 10; i++ )
{
printf( "%d\t", calificaciones[i]);
}
printf( "\n");
fwrite( calificaciones, sizeof(int), sizeof(calificaciones), archivo16 );
printf("\n");
fclose(archivo16);
return 0;
}
