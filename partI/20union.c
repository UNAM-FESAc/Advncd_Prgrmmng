#include<stdio.h>
#include<string.h>


union libros{
char titulo; 	// 1
int num;	// 4
float precio;	// 4
double version;	// 8
};


int main(){

union libros tam;


printf("tamano %d\n",sizeof(tam.titulo));
printf("tamano %d\n",sizeof(tam.num));
printf("tamano %d\n",sizeof(tam.precio));
printf("tamano %d\n",sizeof(tam.version));
return 0;
}


