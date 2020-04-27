/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

//https://www.programmingsimplified.com/c/graphics.h
// https://www.cs.colorado.edu/~main/bgi/doc/
#include<graphics.h>
#include<SDL_bgi.h>

int main()
{
 int gd = DETECT, gm;
initgraph(&gd, &gm, NULL);

 delay(9000);
  closegraph();
    return 0;
}


