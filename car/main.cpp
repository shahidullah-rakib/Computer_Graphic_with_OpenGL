#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
glTranslatef(-0.6,0, 0);
//glScalef(.3,.3,0);
glBegin(GL_QUADS);
glColor3ub(26, 83, 255);
glVertex2f(-.23,.3);
glVertex2f(-.38,.06);
glVertex2f(.12,.06);
glVertex2f(.12,.3);

glColor3ub(26, 83, 255);
glVertex2f(-.38,.06);
glVertex2f(-.38,-.06);
glVertex2f(.12,-.06);
glVertex2f(.12,.06);

glColor3ub(26, 83, 255);
glVertex2f(.12,-.06);
glVertex2f(.2,-.06);
glVertex2f(.19,.06);
glVertex2f(.12,.06);

glColor3ub(26, 83, 255);
glVertex2f(.12,.3);
glVertex2f(.12,.06);
glVertex2f(.19,.06);
glVertex2f(.16,.2);

glColor3ub(13, 13, 13);
glVertex2f(-.2,.28);
glVertex2f(-.32,.11);
glVertex2f(.15,.11);
glVertex2f(.1,.28);

glEnd();
int i;
	GLfloat x=.1f; GLfloat y=-.05f; GLfloat radius =.06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
int j;
	GLfloat x1=-.23f; GLfloat y1=-.05f; GLfloat radius1 =.06f;
	int triangleAmount1 = 20;
	GLfloat twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j*  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j* twicePi1 / triangleAmount1))
			);
		}
glEnd();
int k;
	GLfloat x2=.1f; GLfloat y2=-.05f; GLfloat radius2 =.03f;
	int triangleAmount2 = 20;
	GLfloat twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
glEnd();
int l;
	GLfloat x3=-.23f; GLfloat y3=-.05f; GLfloat radius3 =.03f;
	int triangleAmount3 = 20;
	GLfloat twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3);
		glColor3ub(255, 255,255);
		for(l = 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x3 + (radius3 * cos(l*  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(l* twicePi3 / triangleAmount3))
			);
		}
glEnd();
glLoadIdentity();
////////////////////////////////////////////////////////////////
 /*glBegin(GL_QUADS); // Car right head
    glColor3ub(153, 31, 0);
    glVertex2f(0.55,0.0);
    glVertex2f(0.48,-0.140);
    glVertex2f(0.48,-0.175);
    glVertex2f(0.55,-0.175);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191); // Car right Box
    glVertex2f(0.55,0.0);
    glVertex2f(0.55,-0.175);
    glVertex2f(0.85,-0.175);
    glVertex2f(0.85,0.0);
    glEnd();

    glColor3ub(0, 0, 0);
    GLfloat x4=0.6f; GLfloat y4=-0.2f; GLfloat radius4 =.05f; // right car Left wheel
	int triangleAmount4 = 20;
	GLfloat twicePi4 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4);
		for(int i = 0; i <= triangleAmount4; i++)
			glVertex2f(x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),y4 + (radius4 * sin(i * twicePi4 / triangleAmount4)));
	glEnd();


    glColor3ub(0, 0, 0);
    GLfloat x5=0.78f; GLfloat y5=-0.2f; GLfloat radius5 =.05f; // right car Right Wheel
	int triangleAmount5 = 20;
	GLfloat twicePi5 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5);
		for(int i = 0; i <= triangleAmount5; i++)
			glVertex2f(x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),y5 + (radius5 * sin(i * twicePi5 / triangleAmount5)));
	glEnd();

  glColor3ub(204, 204, 204);
	GLfloat x6=0.6f; GLfloat y6=-0.2f; GLfloat radius6 =.03f; // right car Left wheel
	int triangleAmount6 = 20;
	GLfloat twicePi6 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6);
		for(int i = 0; i <= triangleAmount6; i++)
			glVertex2f(x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),y6 + (radius6 * sin(i * twicePi6 / triangleAmount6)));
	glEnd();



    GLfloat x7=0.78f; GLfloat y7=-0.2f; GLfloat radius7 =.03f; // right car Right Wheel
	int triangleAmount7 = 20;
	GLfloat twicePi7 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7);
		for(int i = 0; i <= triangleAmount5; i++)
			glVertex2f(x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),y7 + (radius7 * sin(i * twicePi7 / triangleAmount7)));
	glEnd();*/

	//Jeep
glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(-.2,0);
glVertex2f(.3,0.0);
glVertex2f(.3,.1);
glVertex2f(-.2,.1);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(-.12,.1);
glVertex2f(.3,.1);
glVertex2f(.3,.16);
glVertex2f(-.07,.16);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(-.12,.1);
glVertex2f(.3,.1);
glVertex2f(.3,.16);
glVertex2f(-.07,.16);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(-.2,.1);
glVertex2f(-.12,.1);
glVertex2f(-.07,.16);
glVertex2f(-.1,.2);

glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(-.2,.1);
glVertex2f(-.12,.1);
glVertex2f(-.07,.16);
glVertex2f(-.1,.2);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 26, 51);
glVertex2f(-.07,.16);
glVertex2f(-.04,.25);
glVertex2f(-.05,.29);
glVertex2f(-.1,.2);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(-.04,.25);
glVertex2f(.15,.25);
glVertex2f(.16,.29);
glVertex2f(-.05,.29);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 41, 0);
glVertex2f(.15,.25);
glVertex2f(.16,.29);
glVertex2f(.3,.16);
glVertex2f(.2,.16);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 40, 77);
glVertex2f(.15,.25);
glVertex2f(.2,.16);
glVertex2f(-.07,.16);
glVertex2f(-.04,.25);
glEnd();

glColor3ub(0, 0, 0);
int p;
	GLfloat x8=-.06f; GLfloat y8=0.0f; GLfloat radius8 =.06f;
	int triangleAmount8 = 20;
	GLfloat twicePi8 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8);
		for(p = 0; p <= triangleAmount8;p++) {
			glVertex2f(
		            x8 + (radius8 * cos(p *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(p * twicePi8 / triangleAmount8))
			);
		}
glEnd();
int q;
	GLfloat x9=.18f; GLfloat y9=0.0f; GLfloat radius9 =.06f;
	int triangleAmount9 = 20;
	GLfloat twicePi9 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9);
		for(q = 0; q <= triangleAmount9;q++) {
			glVertex2f(
		            x9 + (radius9 * cos(q*  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(q* twicePi9 / triangleAmount9))
			);
		}
glEnd();
int r;
	GLfloat x11=-.06f; GLfloat y11=0.0f; GLfloat radius11 =.03f;
	int triangleAmount11 = 20;
	GLfloat twicePi11 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x11, y11);
		glColor3ub(255, 255,255);
		for(r = 0; r <= triangleAmount11;r++) {
			glVertex2f(
		            x11 + (radius11 * cos(r *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(r * twicePi11 / triangleAmount11))
			);
		}
glEnd();
int s;
	GLfloat x12=.18f; GLfloat y12=0.0f; GLfloat radius12 =0.03f;
	int triangleAmount12 = 20;
	GLfloat twicePi12 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x12, y12);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount12;s++) {
			glVertex2f(
		            x12 + (radius12 * cos(s*  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(s* twicePi12 / triangleAmount12))
			);
		}
glEnd();




	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Rasel");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
