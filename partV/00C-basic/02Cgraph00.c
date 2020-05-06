/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>

void setup() {  
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
}

//void display()
//   {
//      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//      glColor3f(0.0f, 0.0f, 0.0f);
//      glRectf(-0.75f,0.75f, 0.75f, -0.75f);
//      glutSwapBuffers();
//   }

int main(int argc, char *argv[])
  {
     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
//     glutInitWindowSize(800,600);
     glutCreateWindow("Hello World");

     setup();
//     glutDisplayFunc(display);
     glutMainLoop();
     return 0;
  }
