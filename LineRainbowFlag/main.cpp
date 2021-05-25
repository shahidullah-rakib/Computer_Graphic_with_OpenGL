#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

   //red
    glBegin(GL_QUADS);
    glColor3b(237, 9, 9);
    glVertex2f(.10f,.80f);
    glVertex2f(.40f,.80f);
    glVertex2f(.40f,.70f);
    glVertex2f(.10f,.70f);

    //orange
    glColor3b(255, 157, 0);
    glVertex2f(.10f,.70f);
    glVertex2f(.40f,.70f);
    glVertex2f(.40f,.60f);
    glVertex2f(.10f,.60f);

    //yellow
    glColor3b(255, 234, 0);
    glVertex2f(.10f,.60f);
    glVertex2f(.40f,.60f);
    glVertex2f(.40f,.50f);
    glVertex2f(.10f,.50f);

    //green
    glColor3b(12, 128, 6);
    glVertex2f(.10f,.50f);
    glVertex2f(.40f,.50f);
    glVertex2f(.40f,.40f);
    glVertex2f(.10f,.40f);

    //blue
    glColor3b(6, 6, 128);
    glVertex2f(.10f,.40f);
    glVertex2f(.40f,.40f);
    glVertex2f(.40f,.30f);
    glVertex2f(.10f,.30f);

    //purple
    glColor3b(112, 6, 128);
    glVertex2f(.10f,.30f);
    glVertex2f(.40f,.30f);
    glVertex2f(.40f,.20f);
    glVertex2f(.10f,.20f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(.10f,.80f);
    glVertex2f(.10f,.10f);
    glEnd();


    glFlush();



}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}
