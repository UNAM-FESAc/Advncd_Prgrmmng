/*
Codigo para mostrar la condicion de terminacion o byte cero.
El cual funciona para terminar un bucle.
*/
#include <stdio.h>


// declaramos los arreglos
char strA[80] = "Cadena para mostrar: UNAM";
char strB[80];

int main(void)
{
  // declaramos los apuntadores
char * pA;
char * pB;

puts(strA);
pA = strA;

puts(pA);
pB = strB;


// un bucle con condicion sobre el apuntador de la cadena A
// Notese la sintaxis para usar el byte cero.
while(* pA != '\0')
{
* pB++ = * pA++;
}

puts(strB);

    return 0;
}
