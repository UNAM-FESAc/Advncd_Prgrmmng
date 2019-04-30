/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
void main(){

FILE *fptr;
    char nombre[20];
    int edad;
    int num_cta;
 
    fptr = fopen("13-files.txt", "w");
 
    if (fptr == NULL)
    {
        printf("Error: el archivo no existe \n");
        return;
    }
    printf("Ingrese su nombre \n");
    scanf("%s", nombre);
    fprintf(fptr, "Nombre: %s\n", nombre);
    
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    fprintf(fptr, "Edad     = %d\n", edad);
    
    printf("Ingrese su numero de cuenta\n");
    scanf("%d", &num_cta);
    fprintf(fptr, "Numero de cuenta  = %d\n", num_cta);
    fclose(fptr);
        
    }    
