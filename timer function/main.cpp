

#include <GL/gl.h>
#include <GL/glut.h>


void night() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();
   glFlush();
}


void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

   glFlush();
}







void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {
dn
case 'd':


   glutDisplayFunc(day);
   glutPostRedisplay();

    break;
case 'n':
   glutDisplayFunc(night);
glutPostRedisplay();
    break;


	}
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(day);

   glutKeyboardFunc(handleKeypress);

   glutMainLoop();
   return 0;
}
