/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<graphics.h>

int main()
{
 int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);
// circle(int xc, int yc, int radius);
circle(250,50, 30);
    circle(50, 50, 30);
setcolor(GREEN);
    circle(200, 200, 100);
 delay(9000);
  closegraph();
    return 0;
}


