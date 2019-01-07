#include <stdio.h>
 
char texto[] = "hola";
char clave_m = 45;
 
void encripta(char *mensaje, char clave, int tam)
{
 int i;
 for(i=0; i<tam; i++)
 {
 	mensaje[i]^=clave;
 }
}
 
void desencripta(char *mensaje, char clave, int tam)
{
	encripta(mensaje, clave, tam);
}
 
void muestra_mensaje(char *mensaje, int tam)
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("0x%X ", mensaje[i]);
	}
	printf("\n");
}
 
int main(void) 
{
	printf("Mensaje original: %s\n", texto);
	printf("En bytes: ");
	muestra_mensaje(texto, 4);
 
	encripta(texto,clave_m,4);
	printf("Encriptado: %s\n", texto);
	printf("Encriptado en bytes: ");
	muestra_mensaje(texto, 4);
 
	desencripta(texto,clave_m,4);
	printf("Desencriptado: %s\n", texto);
	printf("Desencriptado en bytes: ");
	muestra_mensaje(texto, 4);
 
	return 0;
}
