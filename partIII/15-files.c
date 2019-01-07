/*
codigo que solicita un archivo externo que leera e imprimira en 
pantalla. NO OLVIDE COLOCARLE LA EXTENSION.


*/

#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    FILE *fptr;
    char filename[15];
    char ch;
 
 printf("Ingrese el nombre del archivo que se leera \n");
    scanf("%s", filename);
    /*  abrir el archivo para lectura */
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("No puede abrir el archivo \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
   printf ("\n");
}
/*
Ejercicio: 
que es y para que sirve EOF?
*/

