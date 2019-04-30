/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
#include<stdio.h>
	// definimos (sin inicializar) la estructura con rotulo complejo

struct complejo{
  float pre;
  float pim;
};
	// La funcion principal

int main(){
	// Declaramos dos variables de estructura: una ordinaria y un puntero
  struct complejo complejo1, *pointer_complejo;
	// para referenciar el apuntador a la direccion de memoria de complejo1.	
  pointer_complejo = &complejo1;

	// Ingresamos la parte real e imaginaria del complejo.
printf("Ingrese parte real: ");
scanf("%f", &complejo1.pre);

printf("Ingrese parte imaginaria: ");
scanf("%f", &complejo1.pim);


	// Imprimir en pantalla en el formato deseado.
  printf("El complejo es: z = %.2f + (%.2f) i \n", pointer_complejo->pre, pointer_complejo->pim);

  return 0;
}




