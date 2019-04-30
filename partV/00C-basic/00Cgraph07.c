/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());

	setcolor(BLUE);
	circle(getmaxx()/2,getmaxy()/2,150);

	setcolor(GREEN);
	circle(getmaxx()/2,getmaxy()/2,75);

	setcolor(RED);
	circle(getmaxx()/2,getmaxy()/2,25);


	delay(9000);
	closegraph();
	return 0;
}
