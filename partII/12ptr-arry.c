/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

int main(){
int i, sum = 0, dt;

printf("Ingrese el numero de datos a sumar\n");
scanf("%d", &dt);

int clases[dt];


printf("Ingrese %d numeros\n", dt);

for(i = 0; i < dt; ++i)
{
	scanf("%d",  &clases[i]);
	sum += clases[i];
}

printf("La suma es %d\n", sum);

return 0;
}
