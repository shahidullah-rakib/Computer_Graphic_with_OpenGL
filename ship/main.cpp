#include <windows.h>
#include <GL/glut.h>

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.5f,-0.2f);
glVertex2f(-.45f,-0.3f);
glVertex2f(.45f,-0.3f);
glVertex2f(.5f,-0.2f);

glColor3ub(0,0,0);
glVertex2f(-.55f,-0.1f);
glVertex2f(-.5f,-0.19f);
glVertex2f(.5f,-0.19f);
glVertex2f(.55f,-0.1f);
glEnd();



glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-.55f,-0.1f);
glVertex2f(.55f,-0.1f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-.4f,-0.1f);
glVertex2f(-.3f,-0.15f);

glVertex2f(.55f,-0.15f);
glVertex2f(.55f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-.4f,0.15f);
glVertex2f(-.4f,-0.18f);
glVertex2f(.4f,-0.18f);
glVertex2f(.4f,0.15f);

glEnd();



glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-.55f,-0.04f);
glVertex2f(.55f,-0.04f);

glVertex2f(-.55f,0.02f);
glVertex2f(.55f,0.02f);

glVertex2f(-.55f,0.08f);
glVertex2f(.55f,0.08f);

glVertex2f(-.4f,-0.1f);
glVertex2f(.4f,-0.1f);

glVertex2f(-.3f,-0.15f);
glVertex2f(.4f,-0.15f);

glVertex2f(-.3f,-0.15f);
glVertex2f(-.4f,-0.1f);

glVertex2f(-.3f,0.15f);
glVertex2f(-.3f,-0.15f);

glVertex2f(-.2f,0.15f);
glVertex2f(-.2f,-0.15f);

glVertex2f(-.1f,0.15f);
glVertex2f(-.1f,-0.15f);

glVertex2f(0.0f,0.15f);
glVertex2f(0.0f,-0.15f);

glVertex2f(.3f,0.15f);
glVertex2f(.3f,-0.15f);

glVertex2f(.2f,0.15f);
glVertex2f(.2f,-0.15f);

glVertex2f(.1f,0.15f);
glVertex2f(.1f,-0.15f);
glEnd();



	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
