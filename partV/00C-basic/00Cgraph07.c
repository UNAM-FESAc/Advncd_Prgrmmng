/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<graphics.h>

int main()
{
 int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);

	setcolor(GREEN);
	for(int i=0; i<=300; i=i+50){
	bar3d(50+i, 50, 100+i, 150, 10, 10);
	delay(1000);
	cleardevice();
	};
	setcolor(RED);
	bar3d(100, 150, 200, 350, 20, 20);
	delay(5000);
	closegraph();
    return 0;
}


