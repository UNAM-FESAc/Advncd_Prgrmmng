/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>
#include <string.h>

// Creamos una estructura con rotulo estudiante

struct estudiante{
  char nombre_estu[10];
  int codigo_estu;
  float califi_estu;
};


int main(){

  // Declaramos dos variables de estructura: una ordinaria y un puntero
  struct estudiante estudiante1, * pointer_estu;
  
  // para referenciar el apuntador a la direccion de memoria del estudiante 1.
  pointer_estu = &estudiante1;

  // Asignamos datos a la estructura
  strcpy(pointer_estu -> nombre_estu, "Jose Perez");
  pointer_estu -> codigo_estu = 21212;
  pointer_estu -> califi_estu = 9.5;

  // imprimir en pantalla
  printf("El nombre del estudiante es: %s \n", estudiante1.nombre_estu);
  printf("El codigo del estudiante es: %i \n", estudiante1.codigo_estu);
  printf("La calificacion del estudiante es: %2.1f \n", estudiante1.califi_estu);
  return 0;
}

