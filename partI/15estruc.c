/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

struct Todos_Libros
{
char titulo[30];
char autor[30];
char editorial[30];
int anio;
};

// Funcion principal
int main()
{
// Declaracion de una variable-arreglo de estructura
struct Todos_Libros libros[100];

// Inicializacion (Definicion) de los miembros
strcpy(libros[0].titulo,"Programacion I");
strcpy(libros[0].autor,"Perez, P.");
strcpy(libros[0].editorial,"Patito-Hill");
libros[0].anio = 2018;
return 0;
}


