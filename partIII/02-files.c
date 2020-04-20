/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>
#include<stdlib.h>
#define n 3
struct numeros{
     int par;
     int imp;   
} _nume[n]={
	{20,4},
	{1,30}
	};
	
struct letras{
     char may;
     char min;   
} _letras[n]={
	{'a','b'},
	{'e', 'f'}
	}; 

int main(){
    int i,m;
    FILE * pFile = fopen("02-files.txt", "a+t");    

 for (i=0; i<=1;i++){
fprintf(pFile, "%i %i \n", _nume[i].imp, _nume[i].par);
   };

fprintf(pFile, "\n");

 for (i=0; i<=1;i++){
fprintf(pFile, "%c %c\n", _letras[i].may, _letras[i].min);
   };

   fclose(pFile);

   return 0;
}


