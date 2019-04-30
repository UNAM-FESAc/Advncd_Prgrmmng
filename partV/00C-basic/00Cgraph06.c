/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <graphics.h>
#include <string.h>
#include <locale.h>

#define n 200
int main()
{
//setlocale(LC_ALL, "en_US.UTF-8");

   int gd = DETECT,gm;
   initgraph(&gd,&gm,NULL);

char name[n] = "Grupo de Programacion II. UNAM\n\t\t\tEstamos en la FES Acatlán"; 

   outtextxy(100, 100, name);

   delay(8000);
   closegraph();
   return EXIT_SUCCESS;
}
