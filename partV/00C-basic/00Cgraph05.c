/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<graphics.h>

int main()
{
 int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);

bar3d(100, 150, 200, 350, 20, 20);

 delay(5000);
  closegraph();
    return 0;
}


