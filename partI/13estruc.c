/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

// Declaracion de la estructura
struct estudiante
{
    char nombre[50];
    int matricula;
};

// Declaracion de la funcion
void display(struct estudiante estdnt);


// Funcion principal
int main()
{
    struct estudiante std;

    printf("Nombre del estudiante: ");
    scanf("%s", std.nombre);
    printf("Matricula: ");
    scanf("%d", &std.matricula);
// Paso de la variable de estructura como argumento
    display(std);
    return 0;
}

// Definicion de la funcion con argumento de tipo struc
void display(struct estudiante estdnt){
  printf("\nNombre del estudiante: %s", estdnt.nombre);
  printf("\nMatricula: %d\n", estdnt.matricula);
}
