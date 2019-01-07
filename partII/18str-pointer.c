#include <stdio.h>
#include <string.h>
// Datos de tipo struct 
struct data{
	char nombre[20];
   	int edad;
   	float salario;
}   my_data;
// Declaracion de la funcion 
void sh_name(struct data * p);
int main(){
// declaramos un apuntador del tipo struct Data
 struct data * st_ptr_data;
// Referenciamos
 st_ptr_data = &my_data;
// Ingresamos datos
	strcpy(my_data.nombre, "Javier");
	my_data.edad=29;
// Impresion en pantalla
   printf("Dato nombre: %s\n", my_data.nombre);
   printf("Dato edad: %i\n", my_data.edad);
// LLamamiento de la funcion
	sh_name(st_ptr_data);
   return 0;
}
// Definicion de la funcion
void sh_name(struct data * p){
	strcpy(p->nombre, "Jose");
	p->edad=35;
printf("%s\n", p -> nombre);
printf("%i\n", p -> edad);
}



