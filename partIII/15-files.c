/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE * fptr;
    char filename[20];
 
    printf("Ingrese el nombre del archivo que se leera (no olvide la extension)\n");
    scanf("%s", filename);
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("No puede crear el archivo \n");
        exit(0);
    }
    fclose(fptr);
   printf ("\n");
   return 0;
}

