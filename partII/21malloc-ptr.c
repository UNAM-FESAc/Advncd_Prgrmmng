/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 40

int main() {

   char name[80];
   char *description;
   strcpy(name, "Jose Perez y Juan Rodriguez son ");

description = malloc( n * sizeof(char) );

strcpy(description, "estudiantes de Programacion II en la carrera de \
MAC en la Faculatad de estudios superiores acatlan, ubicada en Naucalpan.");


   printf("Nombre = %s\n", name );
   printf("Descripcion: %s. El tamanio es %zu B.\n", description,n * sizeof(char) );
}
