/*
Este archivo implementa datos de diferente tipo
en la terminal y los guarda en un archivo de texto.
*/

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
/*
Ejercicio:
1) Implementa documentacion interna de este codigo.
2) Implementa structuras para que se obtenga el
mismo resultado. Agrega otros miembros, 
por ejemplo, apellido.
*/    
    
    
