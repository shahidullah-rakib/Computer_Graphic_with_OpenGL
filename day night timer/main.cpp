#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>



GLfloat speed = 0.1f;
GLfloat kk=0.0f;
void demo_A();


void update(int value) {



	glutPostRedisplay();


	glutTimerFunc(100,update,0);
}








void demo_back(int val) {

 glutDisplayFunc(demo_A);


}



void B()
{
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

  glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

glPushMatrix();
glScalef(kk,kk, 0.0f);
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

glPopMatrix();
kk-=.1;
   glutTimerFunc(1500,demo_back,0);
   glFlush();
}

void demo_B(int val) {

 glutDisplayFunc(B);


}
void A() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
glPushMatrix();
glScalef(kk,kk, 0.0f);
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

glPopMatrix();
kk+=.1;
glutTimerFunc(1500,demo_B,0);
glFlush();


}

void demo_A()
{
       glutDisplayFunc(A);
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(demo_A);
    glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}

