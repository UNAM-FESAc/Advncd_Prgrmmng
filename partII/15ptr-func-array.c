/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
void Func_Cubo(float * numero);

void main(){

  float num;

printf("De un valor: ");
scanf("%f", &num);
Func_Cubo(&num);
}

void Func_Cubo(float * numero){
 * numero = (* numero) * (* numero) * (* numero);
 printf("El cubo es: %2.2f \n", * numero);
}

