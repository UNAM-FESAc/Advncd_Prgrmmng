/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    FILE * fptr;
    char filename[15];
    char ch[20];
 
    printf("Ingrese el nombre del archivo que se leera (no olvide la extension)\n");
    scanf("%s", filename);
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("No puede abrir el archivo \n");
        exit(0);
    }
    fclose(fptr);
   printf ("\n");
}

