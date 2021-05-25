#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(153, 204, 255);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();

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

glBegin(GL_TRIANGLE_FAN);
glColor3ub(222, 224, 227);
i2;
x2=.8f; y2=.8f; radius2 =.05f;
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
x2=.85f; y2=.85f; radius2 =.05f;
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
x2=.87f; y2=.8f; radius2 =.05f;
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
x2=.37f; y2=.84f; radius2 =.05f;
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
x2=.35f; y2=.84f; radius2 =.05f;
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
x2=-.35f; y2=.87f; radius2 =.05f;
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
x2=-.37f; y2=.82f; radius2 =.05f;
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
x2=-.37f; y2=.84f; radius2 =.05f;
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
x2=-.35f; y2=.84f; radius2 =.05f;
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
x2=-.35f; y2=.9f; radius2 =.05f;
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

glBegin(GL_QUADS);
glColor3ub(191, 128, 64);
glVertex2f(-1.0f,-0.1f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.1f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(184, 184, 184);
int i;
GLfloat x=.0f; GLfloat y=.3f; GLfloat radius =.7f;
int triangleAmount = 30;

GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f
        (
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
glEnd();



glBegin(GL_QUADS);
glColor3ub(184, 184, 184);
glVertex2f(0.36f,-0.3f);
glVertex2f(-0.36f,-0.3f);
glVertex2f(-0.36f,-0.6f);
glVertex2f(0.36f,-0.6f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.535f,0.75f);
glVertex2f(0.4f,0.78f);
glVertex2f(-0.4f,0.78f);
glVertex2f(-0.535f,0.75f);
glVertex2f(-0.63f,0.6f);
glVertex2f(-0.4f,0.63f);
glVertex2f(0.4f,0.63f);
glVertex2f(0.63f,0.6f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.685f,0.45f);
glVertex2f(0.4f,0.48f);
glVertex2f(-0.4f,0.48f);
glVertex2f(-0.685f,0.45f);
glVertex2f(-0.7f,0.3f);
glVertex2f(-0.4f,0.33f);
glVertex2f(0.4f,0.33f);
glVertex2f(0.7f,0.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.685f,0.15f);
glVertex2f(0.4f,0.18f);
glVertex2f(-0.4f,0.18f);
glVertex2f(-0.685f,0.15f);
glVertex2f(-0.63f,0.0f);
glVertex2f(-0.4f,0.03f);
glVertex2f(0.4f,0.03f);
glVertex2f(0.63f,0.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(61, 79, 84);
glVertex2f(0.535f,-0.15f);
glVertex2f(0.3f,-0.12f);
glVertex2f(-0.3f,-0.12f);
glVertex2f(-0.535f,-0.15f);
glVertex2f(-0.36f,-0.3f);
glVertex2f(-0.36f,-0.3f);
glVertex2f(0.36f,-0.3f);
glVertex2f(0.36f,-0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.36f,0.9f);
glVertex2f(-0.36f,0.9f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
/////
glVertex2f(-0.45f,0.83f);
glVertex2f(-0.49f,0.76f);
glVertex2f(-0.49f,0.76f);
glVertex2f(-0.56f,0.61f);
glVertex2f(-0.56f,0.61f);
glVertex2f(-0.61f,0.45f);
glVertex2f(-0.61f,0.45f);
glVertex2f(-0.63f,0.3f);
glVertex2f(-0.63f,0.3f);
glVertex2f(-0.62f,0.15f);
glVertex2f(-0.62f,0.15f);
glVertex2f(-0.58f,0.01f);
glVertex2f(-0.58f,0.01f);
glVertex2f(-0.5f,-0.15f);
glVertex2f(-0.5f,-0.15f);
glVertex2f(-0.36f,-0.3f);

/////
glVertex2f(-0.36f,0.9f);
glVertex2f(-0.4f,0.78f);
glVertex2f(-0.4f,0.78f);
glVertex2f(-0.45f,0.62f);
glVertex2f(-0.45f,0.62f);
glVertex2f(-0.49f,0.47f);
glVertex2f(-0.49f,0.47f);
glVertex2f(-0.51f,0.32f);
glVertex2f(-0.51f,0.32f);
glVertex2f(-0.5f,0.17f);
glVertex2f(-0.5f,0.17f);
glVertex2f(-0.48f,0.02f);
glVertex2f(-0.48f,0.02f);
glVertex2f(-0.4f,-0.13f);
glVertex2f(-0.4f,-0.13f);
glVertex2f(-0.31f,-0.3f);
glVertex2f(-0.31f,-0.3f);
glVertex2f(-0.31f,-0.6f);

//////
glVertex2f(-0.25f,0.95f);
glVertex2f(-0.3f,0.78f);
glVertex2f(-0.3f,0.78f);
glVertex2f(-0.34f,0.63f);
glVertex2f(-0.34f,0.63f);
glVertex2f(-0.37f,0.48f);
glVertex2f(-0.37f,0.48f);
glVertex2f(-0.38f,0.33f);
glVertex2f(-0.38f,0.33f);
glVertex2f(-0.38f,0.17f);
glVertex2f(-0.38f,0.17f);
glVertex2f(-0.37f,0.03f);
glVertex2f(-0.37f,0.03f);
glVertex2f(-0.31f,-0.12f);
glVertex2f(-0.31f,-0.12f);
glVertex2f(-0.23f,-0.3f);
glVertex2f(-0.23f,-0.3f);
glVertex2f(-0.23f,-0.6f);

/////
glVertex2f(-0.15f,0.98f);
glVertex2f(-0.2f,0.78f);
glVertex2f(-0.2f,0.78f);
glVertex2f(-0.23f,0.63f);
glVertex2f(-0.23f,0.63f);
glVertex2f(-0.25f,0.48f);
glVertex2f(-0.25f,0.48f);
glVertex2f(-0.252f,0.33f);
glVertex2f(-0.252f,0.33f);
glVertex2f(-0.252f,0.15f);
glVertex2f(-0.252f,0.15f);
glVertex2f(-0.251f,0.03f);
glVertex2f(-0.251f,0.03f);
glVertex2f(-0.2f,-0.12f);
glVertex2f(-0.2f,-0.12f);
glVertex2f(-0.15f,-0.3f);
glVertex2f(-0.15f,-0.3f);
glVertex2f(-0.15f,-0.6f);

//////
glVertex2f(-0.05f,0.99f);
glVertex2f(-0.08f,0.78f);
glVertex2f(-0.08f,0.78f);
glVertex2f(-0.1f,0.63f);
glVertex2f(-0.1f,0.63f);
glVertex2f(-0.11f,0.48f);
glVertex2f(-0.11f,0.48f);
glVertex2f(-0.11f,0.32f);
glVertex2f(-0.11f,0.32f);
glVertex2f(-0.11f,0.12f);
glVertex2f(-0.11f,0.12f);
glVertex2f(-0.109f,0.03f);
glVertex2f(-0.109f,0.03f);
glVertex2f(-0.109f,-0.12f);
glVertex2f(-0.109f,-0.12f);
glVertex2f(-0.07f,-0.3f);
glVertex2f(-0.07f,-0.3f);
glVertex2f(-0.07f,-0.6f);

glVertex2f(0.0f,0.99f);
glVertex2f(0.0f,-0.6f);

/////
glVertex2f(0.45f,0.83f);
glVertex2f(0.49f,0.76f);
glVertex2f(0.49f,0.76f);
glVertex2f(0.56f,0.61f);
glVertex2f(0.56f,0.61f);
glVertex2f(0.61f,0.45f);
glVertex2f(0.61f,0.45f);
glVertex2f(0.63f,0.3f);
glVertex2f(0.63f,0.3f);
glVertex2f(0.62f,0.15f);
glVertex2f(0.62f,0.15f);
glVertex2f(0.58f,0.01f);
glVertex2f(0.58f,0.01f);
glVertex2f(0.5f,-0.15f);
glVertex2f(0.5f,-0.15f);
glVertex2f(0.36f,-0.3f);

/////
glVertex2f(0.36f,0.9f);
glVertex2f(0.4f,0.78f);
glVertex2f(0.4f,0.78f);
glVertex2f(0.45f,0.62f);
glVertex2f(0.45f,0.62f);
glVertex2f(0.49f,0.47f);
glVertex2f(0.49f,0.47f);
glVertex2f(0.51f,0.32f);
glVertex2f(0.51f,0.32f);
glVertex2f(0.5f,0.17f);
glVertex2f(0.5f,0.17f);
glVertex2f(0.48f,0.02f);
glVertex2f(0.48f,0.02f);
glVertex2f(0.4f,-0.13f);
glVertex2f(0.4f,-0.13f);
glVertex2f(0.31f,-0.3f);
glVertex2f(0.31f,-0.3f);
glVertex2f(0.31f,-0.6f);

//////
glVertex2f(0.25f,0.95f);
glVertex2f(0.3f,0.78f);
glVertex2f(0.3f,0.78f);
glVertex2f(0.34f,0.63f);
glVertex2f(0.34f,0.63f);
glVertex2f(0.37f,0.48f);
glVertex2f(0.37f,0.48f);
glVertex2f(0.38f,0.33f);
glVertex2f(0.38f,0.33f);
glVertex2f(0.38f,0.17f);
glVertex2f(0.38f,0.17f);
glVertex2f(0.37f,0.03f);
glVertex2f(0.37f,0.03f);
glVertex2f(0.31f,-0.12f);
glVertex2f(0.31f,-0.12f);
glVertex2f(0.23f,-0.3f);
glVertex2f(0.23f,-0.3f);
glVertex2f(0.23f,-0.6f);

/////
glVertex2f(0.15f,0.98f);
glVertex2f(0.2f,0.78f);
glVertex2f(0.2f,0.78f);
glVertex2f(0.23f,0.63f);
glVertex2f(0.23f,0.63f);
glVertex2f(0.25f,0.48f);
glVertex2f(0.25f,0.48f);
glVertex2f(0.252f,0.33f);
glVertex2f(0.252f,0.33f);
glVertex2f(0.252f,0.15f);
glVertex2f(0.252f,0.15f);
glVertex2f(0.251f,0.03f);
glVertex2f(0.251f,0.03f);
glVertex2f(0.2f,-0.12f);
glVertex2f(0.2f,-0.12f);
glVertex2f(0.15f,-0.3f);
glVertex2f(0.15f,-0.3f);
glVertex2f(0.15f,-0.6f);

//////
glVertex2f(0.05f,0.99f);
glVertex2f(0.08f,0.78f);
glVertex2f(0.08f,0.78f);
glVertex2f(0.1f,0.63f);
glVertex2f(0.1f,0.63f);
glVertex2f(0.11f,0.48f);
glVertex2f(0.11f,0.48f);
glVertex2f(0.11f,0.32f);
glVertex2f(0.11f,0.32f);
glVertex2f(0.11f,0.12f);
glVertex2f(0.11f,0.12f);
glVertex2f(0.109f,0.03f);
glVertex2f(0.109f,0.03f);
glVertex2f(0.109f,-0.12f);
glVertex2f(0.109f,-0.12f);
glVertex2f(0.07f,-0.3f);
glVertex2f(0.07f,-0.3f);
glVertex2f(0.07f,-0.6f);

glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.5f,-1.0f);
glVertex2f(0.5f,-0.9f);
glVertex2f(-0.5f,-0.9f);
glVertex2f(-0.5f,-1.0f);

glVertex2f(0.45f,-0.9f);
glVertex2f(0.45f,-0.7f);
glVertex2f(-0.45f,-0.7f);
glVertex2f(-0.45f,-0.9f);
glEnd();

glBegin(GL_LINES);
glColor3ub(84, 98, 102);
glVertex2f(0.45f,-0.9f);
glVertex2f(-0.45f,-0.9f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.4f,-0.7f);
glVertex2f(-0.41f,-0.7f);
glVertex2f(-0.41f,0.4f);
glVertex2f(-0.4f,0.4f);

glVertex2f(-0.25f,-0.7f);
glVertex2f(-0.24f,-0.7f);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.25f,0.4f);

glVertex2f(-0.09f,-0.7f);
glVertex2f(-0.08f,-0.7f);
glVertex2f(-0.08f,0.4f);
glVertex2f(-0.09f,0.4f);

glVertex2f(0.09f,-0.7f);
glVertex2f(0.08f,-0.7f);
glVertex2f(0.08f,0.4f);
glVertex2f(0.09f,0.4f);

glVertex2f(0.25f,-0.7f);
glVertex2f(0.24f,-0.7f);
glVertex2f(0.24f,0.4f);
glVertex2f(0.25f,0.4f);

glColor3ub(0, 0, 0);
glVertex2f(0.4f,-0.7f);
glVertex2f(0.41f,-0.7f);
glVertex2f(0.41f,0.4f);
glVertex2f(0.4f,0.4f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(3, 148, 252);
glVertex2f(-0.41f,0.4f);
glVertex2f(-0.55f,0.00f);
glVertex2f(-0.41f,0.00f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 252, 3);
glVertex2f(-0.25f,0.4f);
glVertex2f(-0.37f,0.00f);
glVertex2f(-0.25f,0.00f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(234, 237, 232);
glVertex2f(-0.09f,0.4f);
glVertex2f(-0.21f,0.00f);
glVertex2f(-0.09f,0.00f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(130, 0, 0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.12f,0.00f);
glVertex2f(0.24f,0.00f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(224, 191, 0);
glVertex2f(0.4f,0.4f);
glVertex2f(0.28f,0.00f);
glVertex2f(0.4f,0.00f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(16, 115, 42);
glVertex2f(0.08f,0.4f);
glVertex2f(-0.05f,0.00f);
glVertex2f(0.08f,0.00f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
int i1;
GLfloat x1=.03f; GLfloat y1=.11f; GLfloat radius1 =.03f;
int triangleAmount1 = 30;

GLfloat twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
    for(i1 = 0; i1 <= triangleAmount1;i1++)
    {
        glVertex2f
        (
                x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
        );
    }
glEnd();

glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.2f,-0.9f);
glVertex2f(-0.15f,-0.7f);
glVertex2f(-0.15f,-0.7f);
glVertex2f(-0.1f,-0.9f);

glVertex2f(-0.08f,-0.9f);
glVertex2f(-0.08f,-0.7f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 255);
glVertex2f(-0.2f,-0.9f);
glVertex2f(-0.19f,-0.9f);
glVertex2f(-0.15f,-0.74f);
glVertex2f(-0.15f,-0.7f);

glVertex2f(-0.15f,-0.74f);
glVertex2f(-0.11f,-0.9f);
glVertex2f(-0.1f,-0.9f);
glVertex2f(-0.15f,-0.7f);

glVertex2f(-0.17f,-0.8f);
glVertex2f(-0.17f,-0.82f);
glVertex2f(-0.13f,-0.82f);
glVertex2f(-0.13f,-0.8);

glVertex2f(-0.08f,-0.9f);
glVertex2f(-0.07f,-0.9f);
glVertex2f(-0.07f,-0.7f);
glVertex2f(-0.08f,-0.7f);

glVertex2f(-0.05f,-0.87f);
glVertex2f(-0.04f,-0.87f);
glVertex2f(-0.04f,-0.7f);
glVertex2f(-0.05f,-0.7f);

glVertex2f(0.03f,-0.87f);
glVertex2f(0.02f,-0.87f);
glVertex2f(0.02f,-0.7f);
glVertex2f(0.03f,-0.7f);

glVertex2f(-0.04f,-0.87f);
glVertex2f(-0.05f,-0.87f);
glVertex2f(-0.02f,-0.9f);
glVertex2f(0.00f,-0.9f);

glVertex2f(-0.02f,-0.9f);
glVertex2f(0.00f,-0.9f);
glVertex2f(0.03f,-0.87f);
glVertex2f(0.02f,-0.87f);

glVertex2f(0.06f,-0.9f);
glVertex2f(0.05f,-0.9f);
glVertex2f(0.05f,-0.7f);
glVertex2f(0.06f,-0.7f);

glVertex2f(0.06f,-0.7f);
glVertex2f(0.1f,-0.7f);
glVertex2f(0.09f,-0.72f);
glVertex2f(0.06f,-0.72f);

glVertex2f(0.1f,-0.7f);
glVertex2f(0.09f,-0.72f);
glVertex2f(0.09f,-0.81f);
glVertex2f(0.1f,-0.79f);

glVertex2f(0.05f,-0.79f);
glVertex2f(0.09f,-0.79f);
glVertex2f(0.09f,-0.81f);
glVertex2f(0.05f,-0.81f);

glVertex2f(0.1f,-0.9f);
glVertex2f(0.09f,-0.88f);
glVertex2f(0.09f,-0.79f);
glVertex2f(0.1f,-0.81f);

glVertex2f(0.06f,-0.9f);
glVertex2f(0.1f,-0.9f);
glVertex2f(0.09f,-0.88f);
glVertex2f(0.06f,-0.88f);



glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
