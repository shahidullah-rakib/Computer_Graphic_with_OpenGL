#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat i = 0.0f, rainX = 1.0f, rainY = 1.0f;

void update (int value) {
    rainX -= 0.1f;
    rainY -= 0.1f;

    if (rainX < -0.1f) {
      rainX = 0.1f;
      rainY = 0.1f;
    }
    glutTimerFunc(100, update, 0);
}

void drawLine (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat a, GLfloat b, GLfloat c , int w) {
    glLineWidth(w);
    glBegin(GL_LINES);
    glColor3f(a, b, c);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}

GLfloat position_bird = 0.0f;
GLfloat speed_bird = 0.01f;

void update_bird(int value) {

    if(position_bird >1.0)
        position_bird = -1.0f;

    position_bird += speed_bird;

	glutPostRedisplay();


	glutTimerFunc(100, update_bird, 0);
}

GLfloat position_cloud = 0.0f;
GLfloat speed_cloud = 0.01f;

void update_cloud(int value) {

    if(position_cloud >1.0)
        position_cloud = -1.0f;

    position_cloud += speed_cloud;

	glutPostRedisplay();


	glutTimerFunc(100, update_cloud, 0);
}

void Idle()
{
    glutPostRedisplay();
}

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

//background
glBegin(GL_QUADS);
glColor3ub(140, 210, 245);
glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,-.7f);
glVertex2f(1.0f,-0.7f);
glVertex2f(1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 66, 10);
glVertex2f(-1.0f,-.7f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.7f);
glEnd();

//cloud

glTranslatef(0.0f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
int i2;
GLfloat x2=-.8f; GLfloat y2=.8f; GLfloat radius2 =.05f;
int triangleAmount2 = 30;

GLfloat twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

glTranslatef(1.f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.8f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

//sun
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 117, 66);
int j;
GLfloat p=.8f; GLfloat q=.8f; GLfloat radius5 =.1f;
int triangleAmount5 = 200;
GLfloat twicePi5 = 2.0f * PI;
glVertex2f(p, q);
for(j = 0; j <= triangleAmount5;j++)
{
    glVertex2f
    (
        p + (radius5 * cos(j *  twicePi5 / triangleAmount5)), q + (radius5 * sin(j * twicePi5 / triangleAmount5))
    );
}
glEnd();

//birds
glPushMatrix();
glTranslatef(position_bird,0.0f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glTranslatef(0.1f, 0.1f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(0.11f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.0f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.1f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glPopMatrix();

glLoadIdentity();

//building
glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);
glVertex2f(.6f,0.5f);
glEnd();

//windo
glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.6f);
glVertex2f(-.18f,0.55f);
glVertex2f(.58f,0.4f);
glVertex2f(.58f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.5f);
glVertex2f(-.18f,0.45f);
glVertex2f(.58f,0.3f);
glVertex2f(.58f,0.35f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);
glVertex2f(.8f,0.2f);
glVertex2f(.6f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.3f);
glVertex2f(.02f,0.25f);
glVertex2f(.78f,0.13f);
glVertex2f(.78f,0.18f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.2f);
glVertex2f(.02f,0.15f);
glVertex2f(.78f,0.05f);
glVertex2f(.78f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.1f);
glVertex2f(.02f,0.05f);
glVertex2f(.78f,-0.05f);
glVertex2f(.78f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.0f);
glVertex2f(.02f,-0.05f);
glVertex2f(.78f,-0.15f);
glVertex2f(.78f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.1f);
glVertex2f(.02f,-0.15f);
glVertex2f(.78f,-0.25f);
glVertex2f(.78f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);
glVertex2f(.9f,-0.9f);
glVertex2f(.9f,-0.45f);
glVertex2f(.8f,-0.4f);
glEnd();

glTranslatef(0.1f,-0.16f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.25f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.35f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.45f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.4f,-0.9f);
glVertex2f(.5f,-0.9f);
glVertex2f(.5f,-0.83f);
glVertex2f(.4f,-0.83f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.6f,-0.9f);
glVertex2f(.7f,-0.9f);
glVertex2f(.7f,-0.83f);
glVertex2f(.6f,-0.83f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.43f,0.72f);
glVertex2f(-.4f,0.7f);
glVertex2f(-.35f,0.677f);
glVertex2f(-.25f,0.68f);
glVertex2f(-.2f,0.7f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,-0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);
glVertex2f(.1f,-0.25f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.0f,-0.3f);
glVertex2f(.0f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.445f,0.13f);
glVertex2f(-.444f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.3f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.447f,0.13f);
glVertex2f(-.446f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();


glTranslatef(0.0f,-0.5f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glTranslatef(0.0f,-0.09f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.18f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.28f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(184, 209, 191);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.7f,0.55f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(.6f,0.5f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.5f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.25f);
glVertex2f(.8f,0.2f);

glColor3ub(0,0,0);
glVertex2f(.8f,0.2f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);

glColor3ub(0,0,0);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.8f,-0.4f);
glVertex2f(.9f,-0.45f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.45f);
glVertex2f(.9f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.25f,0.68f);

glColor3ub(0,0,0);
glVertex2f(-.25f,0.68f);
glVertex2f(-.35f,0.677f);

glColor3ub(0,0,0);
glVertex2f(-.35f,0.677f);
glVertex2f(-.4f,0.7f);

glColor3ub(0,0,0);
glVertex2f(-.4f,0.7f);
glVertex2f(-.43f,0.72f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.7f,0.55f);

glColor3ub(0,0,0);
glVertex2f(-.7f,0.55f);
glVertex2f(-.8f,-0.8f);

glColor3ub(0,0,0);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.5f,-0.9f);
glEnd();

glLoadIdentity();

//   glBegin(GL_LINES);
//glColor3f(0,0,0);
//glColor3ub(0,0,0);
//glVertex2f(-1.0f,0.0f);
//glVertex2f(1.0f,0.0f);
//
////glColor3f(0,0,1);
//glColor3ub(20, 33, 219);
//glVertex2f(0.0f,1.0f);
//glVertex2f(0.0f,-1.0f);
//glEnd();






	glFlush();
}

void rain() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

//background
glBegin(GL_QUADS);
glColor3ub(196, 203, 204);
glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,-.7f);
glVertex2f(1.0f,-0.7f);
glVertex2f(1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 66, 10);
glVertex2f(-1.0f,-.7f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.7f);
glEnd();

//cloud

glTranslatef(0.0f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
int i2;
GLfloat x2=-.8f; GLfloat y2=.8f; GLfloat radius2 =.05f;
int triangleAmount2 = 30;

GLfloat twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

glTranslatef(1.f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.8f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

glTranslatef(.5f, .08f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.8f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

glTranslatef(1.f, .0f, 0.0f);
glTranslatef(.5f, .08f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.8f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

//building
glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);
glVertex2f(.6f,0.5f);
glEnd();

//windo
glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.6f);
glVertex2f(-.18f,0.55f);
glVertex2f(.58f,0.4f);
glVertex2f(.58f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.5f);
glVertex2f(-.18f,0.45f);
glVertex2f(.58f,0.3f);
glVertex2f(.58f,0.35f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);
glVertex2f(.8f,0.2f);
glVertex2f(.6f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.3f);
glVertex2f(.02f,0.25f);
glVertex2f(.78f,0.13f);
glVertex2f(.78f,0.18f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.2f);
glVertex2f(.02f,0.15f);
glVertex2f(.78f,0.05f);
glVertex2f(.78f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.1f);
glVertex2f(.02f,0.05f);
glVertex2f(.78f,-0.05f);
glVertex2f(.78f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.0f);
glVertex2f(.02f,-0.05f);
glVertex2f(.78f,-0.15f);
glVertex2f(.78f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.1f);
glVertex2f(.02f,-0.15f);
glVertex2f(.78f,-0.25f);
glVertex2f(.78f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);
glVertex2f(.9f,-0.9f);
glVertex2f(.9f,-0.45f);
glVertex2f(.8f,-0.4f);
glEnd();

glTranslatef(0.1f,-0.16f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.25f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.35f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.45f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.4f,-0.9f);
glVertex2f(.5f,-0.9f);
glVertex2f(.5f,-0.83f);
glVertex2f(.4f,-0.83f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.6f,-0.9f);
glVertex2f(.7f,-0.9f);
glVertex2f(.7f,-0.83f);
glVertex2f(.6f,-0.83f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.43f,0.72f);
glVertex2f(-.4f,0.7f);
glVertex2f(-.35f,0.677f);
glVertex2f(-.25f,0.68f);
glVertex2f(-.2f,0.7f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,-0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);
glVertex2f(.1f,-0.25f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.0f,-0.3f);
glVertex2f(.0f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.445f,0.13f);
glVertex2f(-.444f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.3f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.447f,0.13f);
glVertex2f(-.446f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();


glTranslatef(0.0f,-0.5f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glTranslatef(0.0f,-0.09f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.18f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.28f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(184, 209, 191);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.7f,0.55f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(.6f,0.5f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.5f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.25f);
glVertex2f(.8f,0.2f);

glColor3ub(0,0,0);
glVertex2f(.8f,0.2f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);

glColor3ub(0,0,0);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.8f,-0.4f);
glVertex2f(.9f,-0.45f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.45f);
glVertex2f(.9f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.25f,0.68f);

glColor3ub(0,0,0);
glVertex2f(-.25f,0.68f);
glVertex2f(-.35f,0.677f);

glColor3ub(0,0,0);
glVertex2f(-.35f,0.677f);
glVertex2f(-.4f,0.7f);

glColor3ub(0,0,0);
glVertex2f(-.4f,0.7f);
glVertex2f(-.43f,0.72f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.7f,0.55f);

glColor3ub(0,0,0);
glVertex2f(-.7f,0.55f);
glVertex2f(-.8f,-0.8f);

glColor3ub(0,0,0);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.5f,-0.9f);
glEnd();

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


void normal() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

//background
glBegin(GL_QUADS);
glColor3ub(140, 210, 245);
glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,-.7f);
glVertex2f(1.0f,-0.7f);
glVertex2f(1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 66, 10);
glVertex2f(-1.0f,-.7f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.7f);
glEnd();

//cloud

glTranslatef(0.0f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
int i2;
GLfloat x2=-.8f; GLfloat y2=.8f; GLfloat radius2 =.05f;
int triangleAmount2 = 30;

GLfloat twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

glTranslatef(1.f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.8f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

//sun
glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 117, 66);
int j;
GLfloat p=.8f; GLfloat q=.8f; GLfloat radius5 =.1f;
int triangleAmount5 = 200;
GLfloat twicePi5 = 2.0f * PI;
glVertex2f(p, q);
for(j = 0; j <= triangleAmount5;j++)
{
    glVertex2f
    (
        p + (radius5 * cos(j *  twicePi5 / triangleAmount5)), q + (radius5 * sin(j * twicePi5 / triangleAmount5))
    );
}
glEnd();

//birds
glPushMatrix();
glTranslatef(position_bird,0.0f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glTranslatef(0.1f, 0.1f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(0.11f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.0f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.1f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();

glPopMatrix();

glLoadIdentity();

//building
glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);
glVertex2f(.6f,0.5f);
glEnd();

//windo
glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.6f);
glVertex2f(-.18f,0.55f);
glVertex2f(.58f,0.4f);
glVertex2f(.58f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.5f);
glVertex2f(-.18f,0.45f);
glVertex2f(.58f,0.3f);
glVertex2f(.58f,0.35f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);
glVertex2f(.8f,0.2f);
glVertex2f(.6f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.3f);
glVertex2f(.02f,0.25f);
glVertex2f(.78f,0.13f);
glVertex2f(.78f,0.18f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.2f);
glVertex2f(.02f,0.15f);
glVertex2f(.78f,0.05f);
glVertex2f(.78f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.1f);
glVertex2f(.02f,0.05f);
glVertex2f(.78f,-0.05f);
glVertex2f(.78f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.0f);
glVertex2f(.02f,-0.05f);
glVertex2f(.78f,-0.15f);
glVertex2f(.78f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.1f);
glVertex2f(.02f,-0.15f);
glVertex2f(.78f,-0.25f);
glVertex2f(.78f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);
glVertex2f(.9f,-0.9f);
glVertex2f(.9f,-0.45f);
glVertex2f(.8f,-0.4f);
glEnd();

glTranslatef(0.1f,-0.16f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.25f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.35f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.45f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.4f,-0.9f);
glVertex2f(.5f,-0.9f);
glVertex2f(.5f,-0.83f);
glVertex2f(.4f,-0.83f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.6f,-0.9f);
glVertex2f(.7f,-0.9f);
glVertex2f(.7f,-0.83f);
glVertex2f(.6f,-0.83f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.43f,0.72f);
glVertex2f(-.4f,0.7f);
glVertex2f(-.35f,0.677f);
glVertex2f(-.25f,0.68f);
glVertex2f(-.2f,0.7f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,-0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);
glVertex2f(.1f,-0.25f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.0f,-0.3f);
glVertex2f(.0f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.445f,0.13f);
glVertex2f(-.444f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.3f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.447f,0.13f);
glVertex2f(-.446f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();


glTranslatef(0.0f,-0.5f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glTranslatef(0.0f,-0.09f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.18f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.28f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(184, 209, 191);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.7f,0.55f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(.6f,0.5f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.5f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.25f);
glVertex2f(.8f,0.2f);

glColor3ub(0,0,0);
glVertex2f(.8f,0.2f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);

glColor3ub(0,0,0);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.8f,-0.4f);
glVertex2f(.9f,-0.45f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.45f);
glVertex2f(.9f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.25f,0.68f);

glColor3ub(0,0,0);
glVertex2f(-.25f,0.68f);
glVertex2f(-.35f,0.677f);

glColor3ub(0,0,0);
glVertex2f(-.35f,0.677f);
glVertex2f(-.4f,0.7f);

glColor3ub(0,0,0);
glVertex2f(-.4f,0.7f);
glVertex2f(-.43f,0.72f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.7f,0.55f);

glColor3ub(0,0,0);
glVertex2f(-.7f,0.55f);
glVertex2f(-.8f,-0.8f);

glColor3ub(0,0,0);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.5f,-0.9f);
glEnd();

glLoadIdentity();

   glFlush();
}

void night() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

//background
glBegin(GL_QUADS);
glColor3ub(58, 72, 79);
glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,-.7f);
glVertex2f(1.0f,-0.7f);
glVertex2f(1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 66, 10);
glVertex2f(-1.0f,-.7f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.7f);
glEnd();

//cloud

glTranslatef(0.0f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
int i2;
GLfloat x2=-.8f; GLfloat y2=.8f; GLfloat radius2 =.05f;
int triangleAmount2 = 30;

GLfloat twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

glTranslatef(1.f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.8f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.85f; y2=.85f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.87f; y2=.8f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.77f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.82f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=-.75f; y2=.88f; radius2 =.05f;
triangleAmount2 = 30;

twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
    for(i2 = 0; i2 <= triangleAmount2;i2++)
    {
        glVertex2f
        (
                x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
        );
    }
glEnd();

glLoadIdentity();

//sun
glBegin(GL_TRIANGLE_FAN);
glColor3ub(211, 223, 230);
int j;
GLfloat p=.8f; GLfloat q=.8f; GLfloat radius5 =.1f;
int triangleAmount5 = 200;
GLfloat twicePi5 = 2.0f * PI;
glVertex2f(p, q);
for(j = 0; j <= triangleAmount5;j++)
{
    glVertex2f
    (
        p + (radius5 * cos(j *  twicePi5 / triangleAmount5)), q + (radius5 * sin(j * twicePi5 / triangleAmount5))
    );
}
glEnd();

//stars
glPointSize(2);
glBegin(GL_POINTS);
glColor3f(255, 255, 255);
glVertex2f(0.0f,0.8f);
glColor3f(255, 255, 255);
glVertex2f(-0.1f,0.77f);
glColor3f(255, 255, 255);
glVertex2f(-0.2f,0.77f);
glColor3f(255, 255, 255);
glVertex2f(-0.2f,0.9f);
glColor3f(255, 255, 255);
glVertex2f(-0.3f,0.9f);
glColor3f(255, 255, 255);
glVertex2f(-0.4f,0.8f);
glColor3f(255, 255, 255);
glVertex2f(-0.5f,0.77f);
glColor3f(255, 255, 255);
glVertex2f(-0.55f,0.77f);
glVertex2f(-0.55f,0.8f);
glVertex2f(-0.6f,0.77f);
glVertex2f(-0.6f,0.8f);
glColor3f(255, 255, 255);
glVertex2f(0.3f,0.9f);
glColor3f(255, 255, 255);
glVertex2f(0.4f,0.8f);
glColor3f(255, 255, 255);
glVertex2f(0.5f,0.77f);
glColor3f(255, 255, 255);
glVertex2f(0.55f,0.77f);
glVertex2f(0.55f,0.8f);
glVertex2f(0.6f,0.77f);
glVertex2f(0.6f,0.8f);
glEnd();

//building
glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);
glVertex2f(.6f,0.5f);
glEnd();

//windo
glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.6f);
glVertex2f(-.18f,0.55f);
glVertex2f(.58f,0.4f);
glVertex2f(.58f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.18f,0.5f);
glVertex2f(-.18f,0.45f);
glVertex2f(.58f,0.3f);
glVertex2f(.58f,0.35f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);
glVertex2f(.8f,0.2f);
glVertex2f(.6f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.3f);
glVertex2f(.02f,0.25f);
glVertex2f(.78f,0.13f);
glVertex2f(.78f,0.18f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.2f);
glVertex2f(.02f,0.15f);
glVertex2f(.78f,0.05f);
glVertex2f(.78f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.1f);
glVertex2f(.02f,0.05f);
glVertex2f(.78f,-0.05f);
glVertex2f(.78f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,0.0f);
glVertex2f(.02f,-0.05f);
glVertex2f(.78f,-0.15f);
glVertex2f(.78f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.1f);
glVertex2f(.02f,-0.15f);
glVertex2f(.78f,-0.25f);
glVertex2f(.78f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);
glVertex2f(.9f,-0.9f);
glVertex2f(.9f,-0.45f);
glVertex2f(.8f,-0.4f);
glEnd();

glTranslatef(0.1f,-0.16f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.25f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.35f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glTranslatef(0.1f,-0.45f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.02f,-0.2f);
glVertex2f(.02f,-0.25f);
glVertex2f(.78f,-0.35f);
glVertex2f(.78f,-0.3f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.4f,-0.9f);
glVertex2f(.5f,-0.9f);
glVertex2f(.5f,-0.83f);
glVertex2f(.4f,-0.83f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(.6f,-0.9f);
glVertex2f(.7f,-0.9f);
glVertex2f(.7f,-0.83f);
glVertex2f(.6f,-0.83f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.43f,0.72f);
glVertex2f(-.4f,0.7f);
glVertex2f(-.35f,0.677f);
glVertex2f(-.25f,0.68f);
glVertex2f(-.2f,0.7f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(.0f,-0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);
glVertex2f(.1f,-0.25f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(125, 153, 133);
glVertex2f(-.2f,0.3f);
glVertex2f(-.5f,-0.9f);
glVertex2f(.0f,-0.3f);
glVertex2f(.0f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.443f,0.13f);
glVertex2f(-.44f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.445f,0.13f);
glVertex2f(-.444f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.3f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.447f,0.13f);
glVertex2f(-.446f,0.18f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();


glTranslatef(0.0f,-0.5f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.02f,0.3f);
glVertex2f(-.02f,0.25f);
glVertex2f(-.45f,0.13f);
glVertex2f(-.449f,0.18f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glTranslatef(0.0f,-0.09f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.47f,-0.55f);
glVertex2f(-.47f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.18f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glTranslatef(0.0f,-0.28f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(.08f,-0.37f);
glVertex2f(.08f,-0.42f);
glVertex2f(-.48f,-0.55f);
glVertex2f(-.48f,-0.5f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glTranslatef(0.0f,-0.1f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(34, 34, 36);
glVertex2f(-.22f,0.6f);
glVertex2f(-.22f,0.55f);
glVertex2f(-.43f,0.5f);
glVertex2f(-.43f,0.55f);
glEnd();

glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(184, 209, 191);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.7f,0.55f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(.6f,0.5f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.5f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.2f,0.3f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.3f);
glVertex2f(.0f,0.34f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.6f,0.25f);

glColor3ub(0,0,0);
glVertex2f(.6f,0.25f);
glVertex2f(.8f,0.2f);

glColor3ub(0,0,0);
glVertex2f(.8f,0.2f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.0f,0.34f);
glVertex2f(.0f,-0.3f);

glColor3ub(0,0,0);
glVertex2f(.0f,-0.3f);
glVertex2f(.1f,-0.25f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.8f,-0.4f);

glColor3ub(0,0,0);
glVertex2f(.8f,-0.4f);
glVertex2f(.9f,-0.45f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.45f);
glVertex2f(.9f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.1f,-0.25f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(.9f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.2f,0.7f);
glVertex2f(-.25f,0.68f);

glColor3ub(0,0,0);
glVertex2f(-.25f,0.68f);
glVertex2f(-.35f,0.677f);

glColor3ub(0,0,0);
glVertex2f(-.35f,0.677f);
glVertex2f(-.4f,0.7f);

glColor3ub(0,0,0);
glVertex2f(-.4f,0.7f);
glVertex2f(-.43f,0.72f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.5f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.5f,-0.9f);
glVertex2f(.1f,-0.9f);

glColor3ub(0,0,0);
glVertex2f(-.43f,0.72f);
glVertex2f(-.7f,0.55f);

glColor3ub(0,0,0);
glVertex2f(-.7f,0.55f);
glVertex2f(-.8f,-0.8f);

glColor3ub(0,0,0);
glVertex2f(-.8f,-0.8f);
glVertex2f(-.5f,-0.9f);
glEnd();

glLoadIdentity();

   glFlush();
}







void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'r':


   glutDisplayFunc(rain);
   glutPostRedisplay();

    break;
case 'd':
   glutDisplayFunc(normal);
glutPostRedisplay();
    break;

    case 'n':
   glutDisplayFunc(night);
glutPostRedisplay();
    break;


	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
    glutKeyboardFunc(handleKeypress);
	glutIdleFunc(Idle);
	glutTimerFunc(100, update_bird, 0);
	glutTimerFunc(100, update_cloud, 0);
	glutTimerFunc(100, update, 0);
	glutMainLoop();
	return 0;
}
