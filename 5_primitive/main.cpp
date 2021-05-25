#include <windows.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_LINES);
//glColor3f(0,0,0);
glColor3ub(0,0,0);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);

//glColor3f(0,0,1);
glColor3ub(20, 33, 219);
glVertex2f(0.0f,1.0f);
glVertex2f(0.0f,-1.0f);
glEnd();

glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLES);
//glColor3f(0,1,0);
glColor3ub(186, 20, 219);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.7f,0.3f);
glVertex2f(-0.5f,0.7f);
glEnd();

glPopMatrix();

glBegin(GL_POLYGON);
//glColor3f(1,1,0);
glColor3ub(20, 219, 129);
glVertex2f(0.7f,0.8f);
glVertex2f(0.8f,0.7f);
glVertex2f(0.8f,0.4f);
glVertex2f(0.7f,0.3f);
glVertex2f(0.5f,0.3f);
glVertex2f(0.4f,0.4f);
glVertex2f(0.4f,0.7f);
glVertex2f(0.5f,0.8f);
glEnd();

glBegin(GL_QUADS);
//glColor3f(1,0,1);
glColor3ub(219, 146, 20);
glVertex2f(-0.3f,-0.3f);
glVertex2f(-0.3f,-0.7f);
glVertex2f(-0.8f,-0.7f);
glVertex2f(-0.8f,-0.3f);
glEnd();

glBegin(GL_LINES);
//glColor3f(0,0,1);
glColor3ub(219, 20, 20);
glVertex2f(0.5f,-0.6f);
glVertex2f(0.3f,-0.3f);
glVertex2f(0.3f,-0.3f);
glVertex2f(0.7f,-0.3f);
glVertex2f(0.7f,-0.3f);
glVertex2f(0.5f,-0.6f);
glEnd();

glPointSize(7);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.0f,0.0f);
glEnd();




	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutTimerFunc(100, update, 0);
	glutMainLoop();
	return 0;
}
