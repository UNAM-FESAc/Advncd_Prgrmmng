/*
Veamos un ejemplo de un vector, usando 
un arreglo y punteros.
*/

#include<stdio.h>
#define N 5

int main()
{
  int vc[N];
  int i, * p;

  for(i=0; i<N; i++){
    vc[i]=i;
    /* En la siguiente linea, puedes cambiar 
       por la equivalencia mostrada en los codigos anteriores.
     */
    printf("\t%d\n ", vc[i]);
      }

  return 0;
}
/*
Ayuda: 
No olvides inicializar el arreglo y referenciarla al apuntador.
Y recuerda:
p+0 apunta a la posicion inicial del vector.
p+1 apunta a la segunda posicion del vector.

*/
