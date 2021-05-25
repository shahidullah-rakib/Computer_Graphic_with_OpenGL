#include <windows.h>
#include <GL/glut.h>
void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.8f);
glVertex2f(-0.57f,0.8f);
glVertex2f(-0.6f,0.85f);
glVertex2f(-0.6f,-0.8f);

glEnd();

glBegin(GL_QUAD_STRIP);
glColor3f(0,1,0);
glColor3ub(186, 20, 219);
glVertex2f(-0.57f,0.7f);
glVertex2f(-0.57f,0.8f);
glVertex2f(-0.55f,0.7f);
glVertex2f(-0.55f,0.8f);
glVertex2f(-0.48f,0.65f);
glVertex2f(-0.48f,0.75f);
glVertex2f(-0.4f,0.65f);
glVertex2f(-0.4f,0.75f);
glVertex2f(-0.3f,0.7f);
glVertex2f(-0.3f,0.8f);
glVertex2f(-0.25f,0.7f);
glVertex2f(-0.25f,0.8f);
glVertex2f(-0.15f,0.65f);
glVertex2f(-0.15f,0.75f);

glEnd();

glBegin(GL_QUAD_STRIP);
glColor3ub(0, 0, 204);
glVertex2f(-0.57f,0.6f);
glVertex2f(-0.57f,0.7f);
glVertex2f(-0.55f,0.6f);
glVertex2f(-0.55f,0.7f);
glVertex2f(-0.48f,0.55f);
glVertex2f(-0.48f,0.65f);
glVertex2f(-0.4f,0.55f);
glVertex2f(-0.4f,0.65f);
glVertex2f(-0.3f,0.6f);
glVertex2f(-0.3f,0.7f);
glVertex2f(-0.25f,0.6f);
glVertex2f(-0.25f,0.7f);
glVertex2f(-0.15f,0.55f);
glVertex2f(-0.15f,0.65f);

glEnd();

glBegin(GL_QUAD_STRIP);
glColor3ub(0, 204, 255);
glVertex2f(-0.57f,0.5f);
glVertex2f(-0.57f,0.6f);
glVertex2f(-0.55f,0.5f);
glVertex2f(-0.55f,0.6f);
glVertex2f(-0.48f,0.45f);
glVertex2f(-0.48f,0.55f);
glVertex2f(-0.4f,0.45f);
glVertex2f(-0.4f,0.55f);
glVertex2f(-0.3f,0.5f);
glVertex2f(-0.3f,0.6f);
glVertex2f(-0.25f,0.5f);
glVertex2f(-0.25f,0.6f);
glVertex2f(-0.15f,0.45f);
glVertex2f(-0.15f,0.55f);


glEnd();

glBegin(GL_QUAD_STRIP);
glColor3ub(51, 153, 51);
glVertex2f(-0.57f,0.4f);
glVertex2f(-0.57f,0.5f);
glVertex2f(-0.55f,0.4f);
glVertex2f(-0.55f,0.5f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-0.48f,0.45f);
glVertex2f(-0.4f,0.35f);
glVertex2f(-0.4f,0.45f);
glVertex2f(-0.3f,0.4f);
glVertex2f(-0.3f,0.5f);
glVertex2f(-0.25f,0.4f);
glVertex2f(-0.25f,0.5f);
glVertex2f(-0.15f,0.35f);
glVertex2f(-0.15f,0.45f);


glEnd();

glBegin(GL_QUAD_STRIP);
glColor3ub(255, 255, 0);
glVertex2f(-0.57f,0.3f);
glVertex2f(-0.57f,0.4f);
glVertex2f(-0.55f,0.3f);
glVertex2f(-0.55f,0.4f);
glVertex2f(-0.48f,0.25f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-0.4f,0.25f);
glVertex2f(-0.4f,0.35f);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.3f,0.4f);
glVertex2f(-0.25f,0.3f);
glVertex2f(-0.25f,0.4f);
glVertex2f(-0.15f,0.25f);
glVertex2f(-0.15f,0.35f);


glEnd();

glBegin(GL_QUAD_STRIP);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,0.2f);
glVertex2f(-0.57f,0.3f);
glVertex2f(-0.55f,0.2f);
glVertex2f(-0.55f,0.3f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-0.48f,0.25f);
glVertex2f(-0.4f,0.15f);
glVertex2f(-0.4f,0.25f);
glVertex2f(-0.3f,0.2f);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.25f,0.2f);
glVertex2f(-0.25f,0.3f);
glVertex2f(-0.15f,0.15f);
glVertex2f(-0.15f,0.25f);


glEnd();

glBegin(GL_QUAD_STRIP);
glColor3ub(255, 0, 0);
glVertex2f(-0.57f,0.1f);
glVertex2f(-0.57f,0.2f);
glVertex2f(-0.55f,0.1f);
glVertex2f(-0.55f,0.2f);
glVertex2f(-0.48f,0.05f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-0.4f,0.05f);
glVertex2f(-0.4f,0.15f);
glVertex2f(-0.3f,0.1f);
glVertex2f(-0.3f,0.2f);
glVertex2f(-0.25f,0.1f);
glVertex2f(-0.25f,0.2f);
glVertex2f(-0.15f,0.05f);
glVertex2f(-0.15f,0.15f);


glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.5f,-0.8f);
glVertex2f(-0.5f,-0.85f);
glVertex2f(-0.67f,-0.85f);
glVertex2f(-0.67f,-0.8f);

glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.85f);
glVertex2f(-0.47f,-0.9f);
glVertex2f(-0.7f,-0.9f);
glVertex2f(-0.7f,-0.85f);

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
