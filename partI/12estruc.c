/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>

// Declaracion de la estructura
struct pto
{

	float x;
	float y;
};

// Declaracion de la funcion
void sumapuntos(struct pto p1);

// Funcion principal
int main(){

struct pto pto1;

printf("Escriba el valor de x ");
scanf("%f", &pto1.x);
printf("Escriba el valor de y ");
scanf("%f", &pto1.y);

// Paso de la variable de estructura como argumento
sumapuntos(pto1);

return 0;
}

// Definicion de la funcion con argumento de tipo struc
void sumapuntos(struct pto p1)
{
float ZZ;

ZZ = p1.x*p1.x + p1.y*p1.y;

printf("ZZ=%.1f\n", ZZ);
}
