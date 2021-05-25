
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.1f;


void display2() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

glFlush();
}

void update(int value) {




if(position < -1.0)
        position = 1.0f;

    position -= speed;


	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}



void update2(int value) {


if(position > 1.0)
        position = -1.0f;

    position += speed;


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}







void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glPushMatrix();
glTranslatef(position,position2, 0.0f);
//glTranslatef(0.0f,position, 0.0f);
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



   glFlush();
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here
glutDisplayFunc(display);
break;
case GLUT_KEY_DOWN:

 glutDisplayFunc(display2);
break;
case GLUT_KEY_LEFT:
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
break;
case GLUT_KEY_RIGHT:
//do something here
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

break;
}
glutPostRedisplay();
}

void day()
{
    glClearColor(1.0,1.0,1.0,1.0);
glutPostRedisplay();
}
void night()
{
    glClearColor(0.0,0.0,0.0,1.0);
glutPostRedisplay();
}

void display1() {
   glClear(GL_COLOR_BUFFER_BIT);
   //glLoadIdentity();

   glFlush();
}

void sound()
{

    PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':

glLoadIdentity();
         glutDisplayFunc(display2);
         sound();
         glutPostRedisplay();

    break;

case 'n':
glutDisplayFunc(display);
sound2();
         glutPostRedisplay();
    break;




	}
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutSpecialFunc(SpecialInput);
   glutKeyboardFunc(handleKeypress);
glutTimerFunc(100,update,0);

   glutMainLoop();
   return 0;
}
