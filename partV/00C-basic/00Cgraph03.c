/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<graphics.h>

int main()
{

 int gd = DETECT, gm;
 initgraph(&gd, &gm, NULL);


	ellipse(100, 100, 0, 360, 50, 25);

 	delay(5000);
  	closegraph();


    return 0;
}


