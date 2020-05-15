/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<graphics.h>


int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);


setcolor(GREEN);
	for(int i=0; i<=600; i=i+50){
	bar(100+i, 150, 200+i, 350);
	delay(1000); // Warning!
	cleardevice();
	};

closegraph();

    return 0;
}


