/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>
int main(){

int edad, *p_edad;

p_edad=&edad;

printf("Cual es tu edad? \n");
scanf("%d", &(*p_edad));

printf("(Valor de la variable) Tu edad es %d anios\n", edad);
printf("(Indireccion  p_edad) Tu edad es %d\n", * p_edad);

return 0;
}
