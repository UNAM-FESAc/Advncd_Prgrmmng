/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>

struct data{
	char nombre[20];
   	int edad;
   	float salario;
}   my_data;

void sh_name(struct data * p);

int main(){

 struct data * st_ptr_data;

 st_ptr_data = &my_data;
	strcpy(my_data.nombre, "Javier");
	my_data.edad=29;

   printf("Dato nombre: %s\n", my_data.nombre);
   printf("Dato edad: %i\n", my_data.edad);

	sh_name(st_ptr_data);
   return 0;
}

void sh_name(struct data * p){
	strcpy(p->nombre, "Jose");
	p->edad=35;
printf("%s\n", p -> nombre);
printf("%i\n", p -> edad);
}



