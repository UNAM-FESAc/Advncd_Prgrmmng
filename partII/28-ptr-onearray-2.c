#include<stdio.h>
#define N 5
int main(){
  int v[N]; 
  int i, *p;
  
  for (i=0; i < N; i++) {v[i] = i;}
  for (i=0; i < N; i++) {printf ("%d\n", v[i]);}

  p = v;
  for (i=0; i < N; i++){printf ("\t%d\n", *(p+i));}
  return 0;
}

/*
Reflexiona sobre la salida de este codigo. 
Comenta este codigo basado en tu investigación 
sobre apuntadores y arreglos unidimensionales.

*/
