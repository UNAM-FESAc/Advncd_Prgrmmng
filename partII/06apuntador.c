/*
Vamos a ver un puntero a una cadena de caracteres.

*/

#include<stdio.h>


int main(){

/*declaramos un array de caracteres*/
char nombre[]="Javier Orduz"; 

/*Asignamos al puntero el comienzo del array*/
char *puntero=nombre;


/*Escribimos en pantalla nombre...*/
printf("%s \n Ingrese otro nombre: \n", puntero);


/*leemos otro nombre*/
gets(puntero); 


/*escribimos el nuevo nombre...
printf("%s\n",puntero); 

}

/*
Es importante notar la informacion sobre  la funcion gets
*/