/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos
// circle(int xc, int yc, int radius);

#include<graphics.h>

int main()
{
 int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);


    	circle(50, 50, 30);

    	delay(5000);
    	closegraph();
    return 0;
}


