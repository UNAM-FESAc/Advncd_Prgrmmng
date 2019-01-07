/*
Piensa que tienes que quieres apuntar pc a la direccion 
c.
*/

#include<stdio.h>

int main(){

int c, * pc

// Las formas correctas son:

// de la siguiente forma: consideremos que tanto pc como &c son direcciones de memoria
pc = &c;


// *pc es la direccion de memoria apuntada y c es un valor asociado en esa direccion de memoria
*pc = c;

}
