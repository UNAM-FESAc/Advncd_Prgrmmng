/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main() {

int grades[4];
int count=4, i, sum=0;
float average=; 


for(i = 0; i< count; ++i){
printf("%d\t", i+1);
scanf("%d", &grades[i]);
sum+=grades[i];
}
average=(float)sum/count;
printf("El promedio es: %f\n",average);

return 0;
}
