<!-- badges -->
[license-badge]: https://img.shields.io/badge/Licencia-CC-orange
[license]: https://creativecommons.org/licenses/by-nc-sa/3.0/deed.es
[![CC License][license-badge]][license]


# Laboratorio: Graficación con C<a name="graficacion"></a>

*by: Javier A. Orduz-Ducuara*
![width='80%'](../figs/Header.jpg)

Los siguientes ejercicios tiene como propósito evaluar (de manera general) 
al grupo y conocer sobre las habilidades en programación y, además, repasar 
conceptos **programación.**

En las siguientes líneas encuentras la tabla de contenido de esta carpeta.

## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejericicios](#ejercicios)
<!--3. [Ejercicios Especiales](#ejerciciosespeciales)-->
4. [Referencias](#referencias)


### Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de [ejercicios especiales](#ejerciciosespeciales) que aparecen en 
esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/9taj0tx5p8s81da/gral-templete.pdf?dl=0). 
Este formato puede usarse para la entrega de diferentes reportes, incluso 
tu proyecto final. Coloca tu documento (PDF) en tu dropbox.


# Ejercicios:<a name="ejercicios"></a>

1. Investiga e implementa sobre las siguientes funciones para 
graficación en C. Algunas ya se implementaron en códigos compartidos en clase.
Implementar movimiento en una figura geométrica; 
por ejemplo, rotación o translación.
 gety(),
 moveto(),
 moverel(),
 line(),
 linerel(),
 lineto(),
 circle(),
 arc(),
 pieslice(),
 rectangle(),
 ellipse(),
 sector(),
 floodfill(),
 fillellipse(),
 genellipse(),
 bar(),
 bar3d(),
 grgetch(),
 grgetche(),
 grprintf(),
 grscanf(),
 grputchar(),
 grgetchar(),

 outtext(),
 outtextxy(),
 textheight(),
 textwidth(),

 outtext(),
 outtextxy(),
 textheight() y 
 textwidth().


# Referencias<a name="referencias"></a>
1. http://es.tldp.org/LinuxFocus/pub/mirror/LinuxFocus/Castellano/March2002/article233.shtml

2. http://www.gnu.org/software/ncurses/

3. https://askubuntu.com/questions/525051/how-do-i-use-graphics-h-in-ubuntu

4. https://www.programmingsimplified.com/c/graphics.h

5. https://www.cs.colorado.edu/~main/bgi/doc/

6. https://singhgurjot.wordpress.com/2011/10/26/how-to-use-graphics-h-in-ubuntu/ 


<!---

gcc demo.c -o demo -lgraph

int gety(void);

void moveto(int x, int y);

void moverel(int dx, int dy);

void line(int x1, int y1, int x2, int y2);

void linerel(int dx, int dy);

void lineto(int x, int y);

void circle(int xc, int yc, int radius);

void arc(int xc, int yc, int stangle, int endangle, int radius);

void pieslice(int xc, int yc, int stangle, int endangle, int radius);

void rectangle(int left, int top, int right, int bottom);

void ellipse(int xc, int yc, int stangle, int endangle, int rx, int ry);

void sector(int xc, int yc, int stangle, int endangle, int rx, int ry);

void floodfill(int x, int y, int color);

void fillellipse(int xc, int yc, int rx, int ry);

void genellipse(int xc, int yc, int rx, int ry, int theta);

void bar(int left, int top, int right, int bottom);

void bar3d(int left, int top, int right, int bottom, int depth, int topflag);


 grgetch(void);
int grgetche(void);
int grprintf(const char* text,...);
int grscanf(const char* text,...);
int grputchar(int);
int grgetchar(void);


void outtext(char* textstring);
void outtextxy(int x, int y, char* textstring);
int textheight (char *textstring);
int textwidth (char *textstring);

--->
