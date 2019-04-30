/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <ctype.h>
#define func(x) x*x*x + 2*x*x + 2
#define fDer(x) 3*x*x + 4*x
 
int main () 
{
  FILE * fptr1, * fptr2;
  float x;


fptr1 = fopen("fptr1.txt", "w");
fptr2 = fopen("fptr2.txt", "w");

printf("f(x) = x*x*x + 2*x*x + 2\n");
fprintf(fptr1,"#===========%*s\n",1,"");
fprintf(fptr1,"#  x\t\t\tf(x) = x*x*x + 2*x*x + 2\n");
fprintf(fptr1,"#===========%*s\n",1,"");


printf("f'(x) = 3*x*x + 4*x\n");
fprintf(fptr2,"#===========%*s\n",1,"");
fprintf(fptr2,"#  x\t\t\tf'(x) = 3*x*x + 4*x\n");
fprintf(fptr2,"#===========%*s\n",1,"");


for(x=-5;x<=5;x++){
fprintf(fptr1,"%6.1f\t\t\t%6.1f\n", x, func(x));
fprintf(fptr2,"%6.1f\t\t\t%6.1f\n", x, fDer(x));
}


  fclose (fptr1);
  fclose (fptr2);
  return 0;
}

