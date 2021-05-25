#include <windows.h>
#include <GL/glut.h>
//#include <math.h>
//#define pi 3.14159265358979323846
GLfloat i = 0.f, rainX = 1., rainY = 1.;

void update_rain (int value) {
    rainX -= 0.1f;
    rainY -= 0.1f;

    if (rainX < -0.1f) {
      rainX = 0.1f;
      rainY = 0.1f;
    }
    glutTimerFunc(100, update_rain, 0);
}

void Idle()
{
    glutPostRedisplay();
}


void drawLine (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat a, GLfloat b, GLfloat c , int w) {
    glLineWidth(w);
    glBegin(GL_LINES);
    glColor3f(a, b, c);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}


void display1() {
	glClearColor(.0f, .0f, .0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glTranslatef(rainX, rainY, 0);
	for (double i = -1.0f; i < 1.0f; i += 0.15f) {
      for (double j = -1.0f; j < 1.0f; j += 0.15f) {
        drawLine(i, j, i - 0.1f, j - 0.1f, 1, 1, 1, 1);
      }
	}
	glLoadIdentity();
	i += 0.1f;
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Raining Train");

	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutIdleFunc(Idle);
	glutTimerFunc(100, update_rain, 0);
	glutMainLoop();
	return 0;
}
