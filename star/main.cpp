#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(2200,900);
	glColor3f(0.,0.,.0);

	glVertex2f(2200,900);
	glColor3f(.0,0.,.0);
	glVertex2f(2200,800);
	glColor3f(1.,1.,1.0);
	glVertex2f(2200,750);
	glColor3f(.0,0.,.0);
	glVertex2f(1900,700);
	glColor3f(.0,0.,.0);
	glVertex2f(1850,600);
	glColor3f(.0,0.,.0);
	glVertex2f(1800,600);

	glVertex2f(1700,550);
	glColor3f(.0,0.,.0);
	glVertex2f(1600,550);
	glColor3f(.0,0.,.0);

	glVertex2f(1450,400);
	glColor3f(.0,0.0,.0);
	glVertex2f(1300,300);
	glColor3f(.0,0.,.0);
	glVertex2f(1100,250);
	glColor3f(.0,0.0,.0);
	glVertex2f(900,200);
	glColor3f(.0,0.,.0);
	glVertex2f(700,200);

	glColor3f(.0,0.0,.0);
	glVertex2f(500,300);
	glColor3f(.0,0.0,.0);
	glVertex2f(400,400);
	glColor3f(0.0,0.,.0);
	glVertex2f(300,500);
	glColor3f(.0,0.0,.0);
	glVertex2f(150,600);
	glColor3f(.0,0.,.0);
	glVertex2f(0,700);
	glColor3f(.0,0.0,.0);
	glVertex2f(0,1300);
	glColor3f(.0,0.,.0);
	glVertex2f(2200,1300);
	glColor3f(.0,0.,.0);
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
