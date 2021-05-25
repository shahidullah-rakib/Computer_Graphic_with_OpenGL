#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINES);
//glColor3f(1,0,0);
glVertex2f(0.0f,0.0f);
glVertex2f(.3f,.3f);
glEnd();

glBegin(GL_TRIANGLES);
//glVertex2f(0.0f,0.0f);
glVertex2f(0.0f,.2f);
glVertex2f(.2f,.2f);
glVertex2f(.2f,0.0f);
glEnd();

glBegin(GL_)
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
