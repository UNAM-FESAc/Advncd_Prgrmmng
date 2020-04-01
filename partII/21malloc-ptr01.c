/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
char * description;
description = malloc( sizeof(char) );

strcpy(description, "estudiantes de Programacion II en la carrera de \
MAC en la Facultad de estudios superiores acatlan, ubicada en Naucalpan.");

  printf("Descripcion: %s\n", description);

return 0;
}


