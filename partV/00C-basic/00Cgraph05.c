/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<graphics.h>

int main()
{
 int gd = DETECT, gm;
 initgraph(&gd, &gm, NULL);
 	int left = 100, right = 200, top = 100, bottom = 200;

 	rectangle(left, top, right, bottom);
    	setcolor(BLUE);
 	rectangle(left/2, top/2, right/2, bottom/2);
 	delay(5000);

  	closegraph();

    return 0;
}

