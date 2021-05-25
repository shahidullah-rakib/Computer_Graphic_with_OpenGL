#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat c = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void sound()
{

    PlaySound("train.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}

void demo_A();

void update_timer(int value) {



	glutPostRedisplay();


	glutTimerFunc(100,update_timer,0);
}

void demo_back(int val) {

 glutDisplayFunc(demo_A);


}


void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed = 0.0f;
			sound2();
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed = 0.1f;
	sound();
			}
	glutPostRedisplay();
	}

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;

void update2(int value) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed2 = 0.0f;
    sound2();
    break;
case 'r':
    speed2 = 0.02f;
    sound();
    break;
glutPostRedisplay();
	}
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

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed_bird += .1;
break;
case GLUT_KEY_DOWN:
speed_bird -= .1;
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();
}

void Idle()
{
    glutPostRedisplay();
}

void night() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnable(GL_LIGHTING);

  glDisable(GL_LIGHTING);

   glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(72, 92, 77);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 102, 51);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
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
glColor3ub(207, 207, 207);
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

//Fan

glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f( -0.83f, -0.4f);
    glVertex2f( -0.84f, -0.1f);

    glEnd();

glPushMatrix();
    glTranslatef(-.84,-.1,0);
    glRotatef(c,0,0.0,0.1);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.1f);
    glVertex2f( 0.0f, 0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.03f, -0.1f);
    glVertex2f( 0.0f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.03f);
    glVertex2f( 0.1f, 0.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, 0.03f);
    glVertex2f( -0.1f, 0.0f);

    glEnd();

    glPopMatrix();

    c+=0.2f;

glLoadIdentity();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.4f);
glVertex2f(-0.87f,-0.35f);
glVertex2f(-0.78f,-0.4f);
glVertex2f(-0.78f,-0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 117, 125);
glVertex2f(-0.87f,-0.38f);
glVertex2f(-0.78f,-0.38f);
glVertex2f(-0.78f,-0.36f);
glVertex2f(-0.87f,-0.36f);
glEnd();

glTranslatef(1.65f, 0.0f, 0.0f);

glBegin(GL_LINES);////////////////
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.4f);
glVertex2f(-0.87f,-0.35f);
glVertex2f(-0.78f,-0.4f);
glVertex2f(-0.78f,-0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 117, 125);
glVertex2f(-0.87f,-0.38f);
glVertex2f(-0.78f,-0.38f);
glVertex2f(-0.78f,-0.36f);
glVertex2f(-0.87f,-0.36f);
glEnd();

   glLoadIdentity();

   // house

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.3f,-0.4f);
glVertex2f(-.3f,0.4f);
glVertex2f(-0.7f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(51, 0, 0);
glVertex2f(-0.6f,0.35f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-.68f,0.2f);
glVertex2f(-0.6f,0.2f);

glVertex2f(-0.6f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-.68f,0.0f);
glVertex2f(-0.6f,0.0f);

glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);

glVertex2f(-0.6f,-0.25f);
glVertex2f(-0.68f,-0.25f);
glVertex2f(-.68f,-0.39f);
glVertex2f(-0.6f,-0.39f);

glVertex2f(-0.5f,0.35f);
glVertex2f(-0.58f,0.35f);
glVertex2f(-.58f,0.2f);
glVertex2f(-0.5f,0.2f);

glVertex2f(-0.5f,0.15f);
glVertex2f(-0.58f,0.15f);
glVertex2f(-.58f,0.0f);
glVertex2f(-0.5f,0.0f);

glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);

glVertex2f(-0.5f,-0.25f);
glVertex2f(-0.58f,-0.25f);
glVertex2f(-.58f,-0.39f);
glVertex2f(-0.5f,-0.39f);

glVertex2f(-0.4f,0.35f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-.48f,0.2f);
glVertex2f(-0.4f,0.2f);

glVertex2f(-0.4f,0.15f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-.48f,0.0f);
glVertex2f(-0.4f,0.0f);

glVertex2f(-0.4f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.4f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);

glColor3ub(64, 64, 64);

glVertex2f(-0.35f,0.3f);
glVertex2f(-0.38f,0.3f);
glVertex2f(-.38f,0.2f);
glVertex2f(-0.35f,0.2f);

glVertex2f(-0.35f,0.1f);
glVertex2f(-0.38f,0.1f);
glVertex2f(-.38f,0.0f);
glVertex2f(-0.35f,0.0f);

glVertex2f(-0.35f,-0.1f);
glVertex2f(-0.38f,-0.1f);
glVertex2f(-.38f,-0.2f);
glVertex2f(-0.35f,-0.2f);

glVertex2f(-0.35f,-0.3f);
glVertex2f(-0.38f,-0.3f);
glVertex2f(-.38f,-0.39f);
glVertex2f(-0.35f,-0.39f);


glEnd();


glTranslatef(0.9f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.3f,-0.4f);
glVertex2f(-.3f,0.4f);
glVertex2f(-0.7f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(51, 0, 0);
glVertex2f(-0.6f,0.35f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-.68f,0.2f);
glVertex2f(-0.6f,0.2f);

glVertex2f(-0.6f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-.68f,0.0f);
glVertex2f(-0.6f,0.0f);

glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);

glVertex2f(-0.6f,-0.25f);
glVertex2f(-0.68f,-0.25f);
glVertex2f(-.68f,-0.39f);
glVertex2f(-0.6f,-0.39f);

glVertex2f(-0.5f,0.35f);
glVertex2f(-0.58f,0.35f);
glVertex2f(-.58f,0.2f);
glVertex2f(-0.5f,0.2f);

glVertex2f(-0.5f,0.15f);
glVertex2f(-0.58f,0.15f);
glVertex2f(-.58f,0.0f);
glVertex2f(-0.5f,0.0f);

glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);

glVertex2f(-0.5f,-0.25f);
glVertex2f(-0.58f,-0.25f);
glVertex2f(-.58f,-0.39f);
glVertex2f(-0.5f,-0.39f);

glVertex2f(-0.4f,0.35f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-.48f,0.2f);
glVertex2f(-0.4f,0.2f);

glVertex2f(-0.4f,0.15f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-.48f,0.0f);
glVertex2f(-0.4f,0.0f);

glVertex2f(-0.4f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.4f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);

glColor3ub(64, 64, 64);

glVertex2f(-0.35f,0.3f);
glVertex2f(-0.38f,0.3f);
glVertex2f(-.38f,0.2f);
glVertex2f(-0.35f,0.2f);

glVertex2f(-0.35f,0.1f);
glVertex2f(-0.38f,0.1f);
glVertex2f(-.38f,0.0f);
glVertex2f(-0.35f,0.0f);

glVertex2f(-0.35f,-0.1f);
glVertex2f(-0.38f,-0.1f);
glVertex2f(-.38f,-0.2f);
glVertex2f(-0.35f,-0.2f);

glVertex2f(-0.35f,-0.3f);
glVertex2f(-0.38f,-0.3f);
glVertex2f(-.38f,-0.39f);
glVertex2f(-0.35f,-0.39f);


glEnd();

  glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.2f,-0.4f);
glVertex2f(0.0f,-0.4f);
glVertex2f(0.0f,0.3f);
glVertex2f(-0.2f,0.3f);
glEnd();

//shead
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.0f);
glVertex2f(-0.73f,-0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.69f,-0.4f);
glVertex2f(0.69f,-0.0f);
glVertex2f(0.71f,-0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.0f);
glVertex2f(-0.75f,-0.1f);
glVertex2f(0.73f,-0.1f);
glVertex2f(0.71f,-0.0f);
glEnd();

//lamp post

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

GLfloat global_ambient1[] = {0.0,0.0,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.

glPointSize(8);
glBegin(GL_POINTS);

glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);

glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glDisable(GL_LIGHTING);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(0.93f,0.01f);
glVertex2f(0.88f,0.01f);
glVertex2f(0.88f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.9f,0.001f);
glColor3f(0,1,0);
glVertex2f(0.9f,-0.12f);
glEnd();

//rail line

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

//train

glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.5f,-0.48f);
glVertex2f(-0.5f,-0.3f);
glVertex2f(-0.55f,-0.3f);
glVertex2f(-0.6f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glTranslatef(0.08f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.16f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.24f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.32f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int i;
GLfloat x=-.42f; GLfloat y=-.45f; GLfloat radius =.05f;
int triangleAmount = 200;
GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++)
{
    glVertex2f
    (
        x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i7;
GLfloat x7=-.42f; GLfloat y7=-.45f; GLfloat radius7 =.04f;
int triangleAmount7 = 200;
GLfloat twicePi7 = 2.0f * PI;
glVertex2f(x7, y7);
for(i7 = 0; i7 <= triangleAmount7;i7++)
{
    glVertex2f
    (
        x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i2;
x2=-.2f; y2=-.45f; radius2 =.05f;
triangleAmount2 = 200;
twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i8;
GLfloat x8=-.2f; GLfloat y8=-.45f; GLfloat radius8 =.04f;
int triangleAmount8 = 200;
GLfloat twicePi8 = 2.0f * PI;
glVertex2f(x8, y8);
for(i8 = 0; i8 <= triangleAmount8;i8++)
{
    glVertex2f
    (
        x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)), y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
    );
}
glEnd();



glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glTranslatef(0.41f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.49f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.57f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.65f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.725f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int i1;
GLfloat x1=-.02f; GLfloat y1=-.45f; GLfloat radius1 =.05f;
int triangleAmount1 = 200;
GLfloat twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
for(i1 = 0; i1 <= triangleAmount1;i1++)
{
    glVertex2f
    (
        x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)), y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i9;
GLfloat x9=-.02f; GLfloat y9=-.45f; GLfloat radius9 =.04f;
int triangleAmount9 = 200;
GLfloat twicePi9 = 2.0f * PI;
glVertex2f(x9, y9);
for(i9 = 0; i9 <= triangleAmount9;i9++)
{
    glVertex2f
    (
        x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)), y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int k;
GLfloat u=.2f; GLfloat v=-.45f; GLfloat radius6 =.05f;
int triangleAmount6 = 200;
GLfloat twicePi6 = 2.0f * PI;
glVertex2f(u, v);
for(k = 0; k <= triangleAmount6;k++)
{
    glVertex2f
    (
        u + (radius6 * cos(k *  twicePi6 / triangleAmount6)), v + (radius6 * sin(k * twicePi6 / triangleAmount6))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i11;
GLfloat x11=.2f; GLfloat y11=-.45f; GLfloat radius11 =.04f;
int triangleAmount11 = 200;
GLfloat twicePi11 = 2.0f * PI;
glVertex2f(x11, y11);
for(i11 = 0; i11 <= triangleAmount11;i11++)
{
    glVertex2f
    (
        x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)), y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
    );
}
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glTranslatef(0.80f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.88f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.96f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(1.04f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(1.12f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int r;
GLfloat s=.38f; GLfloat t=-.45f; GLfloat radius3 =.05f;
int triangleAmount3 = 200;
GLfloat twicePi3 = 2.0f * PI;
glVertex2f(s, t);
for(r = 0; r <= triangleAmount3;r++)
{
    glVertex2f
    (
        s + (radius3 * cos(r *  twicePi3 / triangleAmount3)), t + (radius3 * sin(r * twicePi3 / triangleAmount3))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i22;
GLfloat x22=.38f; GLfloat y22=-.45f; GLfloat radius22 =.04f;
int triangleAmount22 = 200;
GLfloat twicePi22 = 2.0f * PI;
glVertex2f(x22, y22);
for(i22 = 0; i22 <= triangleAmount;i22++)
{
    glVertex2f
    (
        x22 + (radius22 * cos(i22 *  twicePi22 / triangleAmount22)), y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int r1;
GLfloat s1=.6f; GLfloat t1=-.45f; GLfloat radius4 =.05f;
int triangleAmount4 = 200;
GLfloat twicePi4 = 2.0f * PI;
glVertex2f(s1, t1);
for(r1 = 0; r1 <= triangleAmount4;r1++)
{
    glVertex2f
    (
        s1 + (radius4 * cos(r1 *  twicePi4 / triangleAmount4)), t1 + (radius4 * sin(r1 * twicePi4 / triangleAmount4))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i33;
GLfloat x33=.6f; GLfloat y33=-.45f; GLfloat radius33 =.04f;
int triangleAmount33 = 200;
GLfloat twicePi33 = 2.0f * PI;
glVertex2f(x33, y33);
for(i33 = 0; i33 <= triangleAmount33;i33++)
{
    glVertex2f
    (
        x33 + (radius33 * cos(i33 *  twicePi33 / triangleAmount33)), y33 + (radius33* sin(i33 * twicePi33 / triangleAmount33))
    );
}
glEnd();


    glPopMatrix();
glPushMatrix();
//train translate

glTranslatef(0.0f, -.2f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

glLoadIdentity();

//train translate

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

glLoadIdentity();

//train

glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glTranslatef(0.08f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.16f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.24f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.32f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i;
x=-.42f; y=-.45f; radius =.05f;
triangleAmount = 200;
twicePi = 2.0f * PI;
glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++)
{
    glVertex2f
    (
        x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i7;
x7=-.42f; y7=-.45f; radius7 =.04f;
triangleAmount7 = 200;
twicePi7 = 2.0f * PI;
glVertex2f(x7, y7);
for(i7 = 0; i7 <= triangleAmount7;i7++)
{
    glVertex2f
    (
        x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i2;
x2=-.2f; y2=-.45f; radius2 =.05f;
triangleAmount2 = 200;
twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i8;
x8=-.2f; y8=-.45f; radius8 =.04f;
triangleAmount8 = 200;
twicePi8 = 2.0f * PI;
glVertex2f(x8, y8);
for(i8 = 0; i8 <= triangleAmount8;i8++)
{
    glVertex2f
    (
        x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)), y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
    );
}
glEnd();

glLoadIdentity();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glTranslatef(0.41f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.49f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.57f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.65f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.725f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i1;
x1=-.02f; y1=-.45f; radius1 =.05f;
triangleAmount1 = 200;
twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
for(i1 = 0; i1 <= triangleAmount1;i1++)
{
    glVertex2f
    (
        x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)), y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i9;
x9=-.02f; y9=-.45f; radius9 =.04f;
triangleAmount9 = 200;
twicePi9 = 2.0f * PI;
glVertex2f(x9, y9);
for(i9 = 0; i9 <= triangleAmount9;i9++)
{
    glVertex2f
    (
        x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)), y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
k;
u=.2f; v=-.45f; radius6 =.05f;
triangleAmount6 = 200;
twicePi6 = 2.0f * PI;
glVertex2f(u, v);
for(k = 0; k <= triangleAmount6;k++)
{
    glVertex2f
    (
        u + (radius6 * cos(k *  twicePi6 / triangleAmount6)), v + (radius6 * sin(k * twicePi6 / triangleAmount6))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i11;
x11=.2f; y11=-.45f; radius11 =.04f;
triangleAmount11 = 200;
twicePi11 = 2.0f * PI;
glVertex2f(x11, y11);
for(i11 = 0; i11 <= triangleAmount11;i11++)
{
    glVertex2f
    (
        x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)), y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
    );
}
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.3f);
glVertex2f(0.75f,-0.3f);
glVertex2f(0.8f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glTranslatef(0.80f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.88f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.96f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(1.04f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(1.12f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
r;
s=.38f; t=-.45f; radius3 =.05f;
triangleAmount3 = 200;
twicePi3 = 2.0f * PI;
glVertex2f(s, t);
for(r = 0; r <= triangleAmount3;r++)
{
    glVertex2f
    (
        s + (radius3 * cos(r *  twicePi3 / triangleAmount3)), t + (radius3 * sin(r * twicePi3 / triangleAmount3))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i22;
x22=.38f; y22=-.45f; radius22 =.04f;
triangleAmount22 = 200;
twicePi22 = 2.0f * PI;
glVertex2f(x22, y22);
for(i22 = 0; i22 <= triangleAmount;i22++)
{
    glVertex2f
    (
        x22 + (radius22 * cos(i22 *  twicePi22 / triangleAmount22)), y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
r1;
s1=.6f; t1=-.45f; radius4 =.05f;
triangleAmount4 = 200;
twicePi4 = 2.0f * PI;
glVertex2f(s1, t1);
for(r1 = 0; r1 <= triangleAmount4;r1++)
{
    glVertex2f
    (
        s1 + (radius4 * cos(r1 *  twicePi4 / triangleAmount4)), t1 + (radius4 * sin(r1 * twicePi4 / triangleAmount4))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i33;
x33=.6f; y33=-.45f; radius33 =.04f;
triangleAmount33 = 200;
twicePi33 = 2.0f * PI;
glVertex2f(x33, y33);
for(i33 = 0; i33 <= triangleAmount33;i33++)
{
    glVertex2f
    (
        x33 + (radius33 * cos(i33 *  twicePi33 / triangleAmount33)), y33 + (radius33* sin(i33 * twicePi33 / triangleAmount33))
    );
}
glEnd();

glLoadIdentity();

  glPopMatrix();

//clock
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
j;
p=-.1f; q=.2f;  radius5 =.1f;
triangleAmount5 = 200;
twicePi5 = 2.0f * PI;
glVertex2f(p, q);
for(j = 0; j <= triangleAmount5;j++)
{
    glVertex2f
    (
        p + (radius5 * cos(j *  twicePi5 / triangleAmount5)), q + (radius5 * sin(j * twicePi5 / triangleAmount5))
    );
}
glEnd();

glPushMatrix();
    glTranslatef(-0.1,.2,0);
    glRotatef(c,0.0,0.0,0.1);

    glBegin(GL_LINES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, -0.08f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, -0.05f);

    glEnd();

    glPopMatrix();

    c-=0.05f;

glLoadIdentity();

glScalef(1,1,0);
glTranslatef(0.0f, -.6f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();

glScalef(-1,1,0);
glTranslatef(0.0f, -.6f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();

glutTimerFunc(1500,demo_back,0);

   glFlush();
}

void demo_B(int val) {

 glutDisplayFunc(night);


}



void evening() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(240, 214, 177);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 102, 51);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
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

//Fan

glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f( -0.83f, -0.4f);
    glVertex2f( -0.84f, -0.1f);

    glEnd();

glPushMatrix();
    glTranslatef(-.84,-.1,0);
    glRotatef(c,0,0.0,0.1);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.1f);
    glVertex2f( 0.0f, 0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.03f, -0.1f);
    glVertex2f( 0.0f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.03f);
    glVertex2f( 0.1f, 0.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, 0.03f);
    glVertex2f( -0.1f, 0.0f);

    glEnd();

    glPopMatrix();

    c+=0.2f;

glLoadIdentity();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.4f);
glVertex2f(-0.87f,-0.35f);
glVertex2f(-0.78f,-0.4f);
glVertex2f(-0.78f,-0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 117, 125);
glVertex2f(-0.87f,-0.38f);
glVertex2f(-0.78f,-0.38f);
glVertex2f(-0.78f,-0.36f);
glVertex2f(-0.87f,-0.36f);
glEnd();

glTranslatef(1.65f, 0.0f, 0.0f);

glBegin(GL_LINES);////////////////
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.4f);
glVertex2f(-0.87f,-0.35f);
glVertex2f(-0.78f,-0.4f);
glVertex2f(-0.78f,-0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 117, 125);
glVertex2f(-0.87f,-0.38f);
glVertex2f(-0.78f,-0.38f);
glVertex2f(-0.78f,-0.36f);
glVertex2f(-0.87f,-0.36f);
glEnd();

   glLoadIdentity();

   // house

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.3f,-0.4f);
glVertex2f(-.3f,0.4f);
glVertex2f(-0.7f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(51, 0, 0);
glVertex2f(-0.6f,0.35f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-.68f,0.2f);
glVertex2f(-0.6f,0.2f);

glVertex2f(-0.6f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-.68f,0.0f);
glVertex2f(-0.6f,0.0f);

glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);

glVertex2f(-0.6f,-0.25f);
glVertex2f(-0.68f,-0.25f);
glVertex2f(-.68f,-0.39f);
glVertex2f(-0.6f,-0.39f);

glVertex2f(-0.5f,0.35f);
glVertex2f(-0.58f,0.35f);
glVertex2f(-.58f,0.2f);
glVertex2f(-0.5f,0.2f);

glVertex2f(-0.5f,0.15f);
glVertex2f(-0.58f,0.15f);
glVertex2f(-.58f,0.0f);
glVertex2f(-0.5f,0.0f);

glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);

glVertex2f(-0.5f,-0.25f);
glVertex2f(-0.58f,-0.25f);
glVertex2f(-.58f,-0.39f);
glVertex2f(-0.5f,-0.39f);

glVertex2f(-0.4f,0.35f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-.48f,0.2f);
glVertex2f(-0.4f,0.2f);

glVertex2f(-0.4f,0.15f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-.48f,0.0f);
glVertex2f(-0.4f,0.0f);

glVertex2f(-0.4f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.4f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);

glColor3ub(64, 64, 64);

glVertex2f(-0.35f,0.3f);
glVertex2f(-0.38f,0.3f);
glVertex2f(-.38f,0.2f);
glVertex2f(-0.35f,0.2f);

glVertex2f(-0.35f,0.1f);
glVertex2f(-0.38f,0.1f);
glVertex2f(-.38f,0.0f);
glVertex2f(-0.35f,0.0f);

glVertex2f(-0.35f,-0.1f);
glVertex2f(-0.38f,-0.1f);
glVertex2f(-.38f,-0.2f);
glVertex2f(-0.35f,-0.2f);

glVertex2f(-0.35f,-0.3f);
glVertex2f(-0.38f,-0.3f);
glVertex2f(-.38f,-0.39f);
glVertex2f(-0.35f,-0.39f);


glEnd();


glTranslatef(0.9f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.3f,-0.4f);
glVertex2f(-.3f,0.4f);
glVertex2f(-0.7f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(51, 0, 0);
glVertex2f(-0.6f,0.35f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-.68f,0.2f);
glVertex2f(-0.6f,0.2f);

glVertex2f(-0.6f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-.68f,0.0f);
glVertex2f(-0.6f,0.0f);

glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);

glVertex2f(-0.6f,-0.25f);
glVertex2f(-0.68f,-0.25f);
glVertex2f(-.68f,-0.39f);
glVertex2f(-0.6f,-0.39f);

glVertex2f(-0.5f,0.35f);
glVertex2f(-0.58f,0.35f);
glVertex2f(-.58f,0.2f);
glVertex2f(-0.5f,0.2f);

glVertex2f(-0.5f,0.15f);
glVertex2f(-0.58f,0.15f);
glVertex2f(-.58f,0.0f);
glVertex2f(-0.5f,0.0f);

glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);

glVertex2f(-0.5f,-0.25f);
glVertex2f(-0.58f,-0.25f);
glVertex2f(-.58f,-0.39f);
glVertex2f(-0.5f,-0.39f);

glVertex2f(-0.4f,0.35f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-.48f,0.2f);
glVertex2f(-0.4f,0.2f);

glVertex2f(-0.4f,0.15f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-.48f,0.0f);
glVertex2f(-0.4f,0.0f);

glVertex2f(-0.4f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.4f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);

glColor3ub(64, 64, 64);

glVertex2f(-0.35f,0.3f);
glVertex2f(-0.38f,0.3f);
glVertex2f(-.38f,0.2f);
glVertex2f(-0.35f,0.2f);

glVertex2f(-0.35f,0.1f);
glVertex2f(-0.38f,0.1f);
glVertex2f(-.38f,0.0f);
glVertex2f(-0.35f,0.0f);

glVertex2f(-0.35f,-0.1f);
glVertex2f(-0.38f,-0.1f);
glVertex2f(-.38f,-0.2f);
glVertex2f(-0.35f,-0.2f);

glVertex2f(-0.35f,-0.3f);
glVertex2f(-0.38f,-0.3f);
glVertex2f(-.38f,-0.39f);
glVertex2f(-0.35f,-0.39f);


glEnd();

  glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.2f,-0.4f);
glVertex2f(0.0f,-0.4f);
glVertex2f(0.0f,0.3f);
glVertex2f(-0.2f,0.3f);
glEnd();

//shead
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.0f);
glVertex2f(-0.73f,-0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.69f,-0.4f);
glVertex2f(0.69f,-0.0f);
glVertex2f(0.71f,-0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.0f);
glVertex2f(-0.75f,-0.1f);
glVertex2f(0.73f,-0.1f);
glVertex2f(0.71f,-0.0f);
glEnd();

//lamp post

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(0.93f,0.01f);
glVertex2f(0.88f,0.01f);
glVertex2f(0.88f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.9f,0.001f);
glColor3f(0,1,0);
glVertex2f(0.9f,-0.12f);
glEnd();

//rail line

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

//train

glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.5f,-0.48f);
glVertex2f(-0.5f,-0.3f);
glVertex2f(-0.55f,-0.3f);
glVertex2f(-0.6f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glTranslatef(0.08f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.16f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.24f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.32f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int i;
GLfloat x=-.42f; GLfloat y=-.45f; GLfloat radius =.05f;
int triangleAmount = 200;
GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++)
{
    glVertex2f
    (
        x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i7;
GLfloat x7=-.42f; GLfloat y7=-.45f; GLfloat radius7 =.04f;
int triangleAmount7 = 200;
GLfloat twicePi7 = 2.0f * PI;
glVertex2f(x7, y7);
for(i7 = 0; i7 <= triangleAmount7;i7++)
{
    glVertex2f
    (
        x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i2;
x2=-.2f; y2=-.45f; radius2 =.05f;
triangleAmount2 = 200;
twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i8;
GLfloat x8=-.2f; GLfloat y8=-.45f; GLfloat radius8 =.04f;
int triangleAmount8 = 200;
GLfloat twicePi8 = 2.0f * PI;
glVertex2f(x8, y8);
for(i8 = 0; i8 <= triangleAmount8;i8++)
{
    glVertex2f
    (
        x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)), y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
    );
}
glEnd();



glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glTranslatef(0.41f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.49f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.57f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.65f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.725f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int i1;
GLfloat x1=-.02f; GLfloat y1=-.45f; GLfloat radius1 =.05f;
int triangleAmount1 = 200;
GLfloat twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
for(i1 = 0; i1 <= triangleAmount1;i1++)
{
    glVertex2f
    (
        x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)), y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i9;
GLfloat x9=-.02f; GLfloat y9=-.45f; GLfloat radius9 =.04f;
int triangleAmount9 = 200;
GLfloat twicePi9 = 2.0f * PI;
glVertex2f(x9, y9);
for(i9 = 0; i9 <= triangleAmount9;i9++)
{
    glVertex2f
    (
        x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)), y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int k;
GLfloat u=.2f; GLfloat v=-.45f; GLfloat radius6 =.05f;
int triangleAmount6 = 200;
GLfloat twicePi6 = 2.0f * PI;
glVertex2f(u, v);
for(k = 0; k <= triangleAmount6;k++)
{
    glVertex2f
    (
        u + (radius6 * cos(k *  twicePi6 / triangleAmount6)), v + (radius6 * sin(k * twicePi6 / triangleAmount6))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i11;
GLfloat x11=.2f; GLfloat y11=-.45f; GLfloat radius11 =.04f;
int triangleAmount11 = 200;
GLfloat twicePi11 = 2.0f * PI;
glVertex2f(x11, y11);
for(i11 = 0; i11 <= triangleAmount11;i11++)
{
    glVertex2f
    (
        x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)), y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
    );
}
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glTranslatef(0.80f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.88f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.96f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(1.04f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(1.12f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int r;
GLfloat s=.38f; GLfloat t=-.45f; GLfloat radius3 =.05f;
int triangleAmount3 = 200;
GLfloat twicePi3 = 2.0f * PI;
glVertex2f(s, t);
for(r = 0; r <= triangleAmount3;r++)
{
    glVertex2f
    (
        s + (radius3 * cos(r *  twicePi3 / triangleAmount3)), t + (radius3 * sin(r * twicePi3 / triangleAmount3))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i22;
GLfloat x22=.38f; GLfloat y22=-.45f; GLfloat radius22 =.04f;
int triangleAmount22 = 200;
GLfloat twicePi22 = 2.0f * PI;
glVertex2f(x22, y22);
for(i22 = 0; i22 <= triangleAmount;i22++)
{
    glVertex2f
    (
        x22 + (radius22 * cos(i22 *  twicePi22 / triangleAmount22)), y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int r1;
GLfloat s1=.6f; GLfloat t1=-.45f; GLfloat radius4 =.05f;
int triangleAmount4 = 200;
GLfloat twicePi4 = 2.0f * PI;
glVertex2f(s1, t1);
for(r1 = 0; r1 <= triangleAmount4;r1++)
{
    glVertex2f
    (
        s1 + (radius4 * cos(r1 *  twicePi4 / triangleAmount4)), t1 + (radius4 * sin(r1 * twicePi4 / triangleAmount4))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i33;
GLfloat x33=.6f; GLfloat y33=-.45f; GLfloat radius33 =.04f;
int triangleAmount33 = 200;
GLfloat twicePi33 = 2.0f * PI;
glVertex2f(x33, y33);
for(i33 = 0; i33 <= triangleAmount33;i33++)
{
    glVertex2f
    (
        x33 + (radius33 * cos(i33 *  twicePi33 / triangleAmount33)), y33 + (radius33* sin(i33 * twicePi33 / triangleAmount33))
    );
}
glEnd();


    glPopMatrix();
glPushMatrix();
//train translate

glTranslatef(0.0f, -.2f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

glLoadIdentity();

//train translate

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

glLoadIdentity();

//train

glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glTranslatef(0.08f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.16f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.24f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.32f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i;
x=-.42f; y=-.45f; radius =.05f;
triangleAmount = 200;
twicePi = 2.0f * PI;
glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++)
{
    glVertex2f
    (
        x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i7;
x7=-.42f; y7=-.45f; radius7 =.04f;
triangleAmount7 = 200;
twicePi7 = 2.0f * PI;
glVertex2f(x7, y7);
for(i7 = 0; i7 <= triangleAmount7;i7++)
{
    glVertex2f
    (
        x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i2;
x2=-.2f; y2=-.45f; radius2 =.05f;
triangleAmount2 = 200;
twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i8;
x8=-.2f; y8=-.45f; radius8 =.04f;
triangleAmount8 = 200;
twicePi8 = 2.0f * PI;
glVertex2f(x8, y8);
for(i8 = 0; i8 <= triangleAmount8;i8++)
{
    glVertex2f
    (
        x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)), y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
    );
}
glEnd();

glLoadIdentity();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glTranslatef(0.41f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.49f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.57f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.65f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.725f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i1;
x1=-.02f; y1=-.45f; radius1 =.05f;
triangleAmount1 = 200;
twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
for(i1 = 0; i1 <= triangleAmount1;i1++)
{
    glVertex2f
    (
        x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)), y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i9;
x9=-.02f; y9=-.45f; radius9 =.04f;
triangleAmount9 = 200;
twicePi9 = 2.0f * PI;
glVertex2f(x9, y9);
for(i9 = 0; i9 <= triangleAmount9;i9++)
{
    glVertex2f
    (
        x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)), y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
k;
u=.2f; v=-.45f; radius6 =.05f;
triangleAmount6 = 200;
twicePi6 = 2.0f * PI;
glVertex2f(u, v);
for(k = 0; k <= triangleAmount6;k++)
{
    glVertex2f
    (
        u + (radius6 * cos(k *  twicePi6 / triangleAmount6)), v + (radius6 * sin(k * twicePi6 / triangleAmount6))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i11;
x11=.2f; y11=-.45f; radius11 =.04f;
triangleAmount11 = 200;
twicePi11 = 2.0f * PI;
glVertex2f(x11, y11);
for(i11 = 0; i11 <= triangleAmount11;i11++)
{
    glVertex2f
    (
        x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)), y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
    );
}
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.3f);
glVertex2f(0.75f,-0.3f);
glVertex2f(0.8f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glTranslatef(0.80f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.88f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.96f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(1.04f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(1.12f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
r;
s=.38f; t=-.45f; radius3 =.05f;
triangleAmount3 = 200;
twicePi3 = 2.0f * PI;
glVertex2f(s, t);
for(r = 0; r <= triangleAmount3;r++)
{
    glVertex2f
    (
        s + (radius3 * cos(r *  twicePi3 / triangleAmount3)), t + (radius3 * sin(r * twicePi3 / triangleAmount3))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i22;
x22=.38f; y22=-.45f; radius22 =.04f;
triangleAmount22 = 200;
twicePi22 = 2.0f * PI;
glVertex2f(x22, y22);
for(i22 = 0; i22 <= triangleAmount;i22++)
{
    glVertex2f
    (
        x22 + (radius22 * cos(i22 *  twicePi22 / triangleAmount22)), y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
r1;
s1=.6f; t1=-.45f; radius4 =.05f;
triangleAmount4 = 200;
twicePi4 = 2.0f * PI;
glVertex2f(s1, t1);
for(r1 = 0; r1 <= triangleAmount4;r1++)
{
    glVertex2f
    (
        s1 + (radius4 * cos(r1 *  twicePi4 / triangleAmount4)), t1 + (radius4 * sin(r1 * twicePi4 / triangleAmount4))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i33;
x33=.6f; y33=-.45f; radius33 =.04f;
triangleAmount33 = 200;
twicePi33 = 2.0f * PI;
glVertex2f(x33, y33);
for(i33 = 0; i33 <= triangleAmount33;i33++)
{
    glVertex2f
    (
        x33 + (radius33 * cos(i33 *  twicePi33 / triangleAmount33)), y33 + (radius33* sin(i33 * twicePi33 / triangleAmount33))
    );
}
glEnd();

glLoadIdentity();

  glPopMatrix();

//clock
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
j;
p=-.1f; q=.2f;  radius5 =.1f;
triangleAmount5 = 200;
twicePi5 = 2.0f * PI;
glVertex2f(p, q);
for(j = 0; j <= triangleAmount5;j++)
{
    glVertex2f
    (
        p + (radius5 * cos(j *  twicePi5 / triangleAmount5)), q + (radius5 * sin(j * twicePi5 / triangleAmount5))
    );
}
glEnd();

glPushMatrix();
    glTranslatef(-0.1,.2,0);
    glRotatef(c,0.0,0.0,0.1);

    glBegin(GL_LINES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, -0.08f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, -0.05f);

    glEnd();

    glPopMatrix();

    c-=0.05f;

glLoadIdentity();

glScalef(1,1,0);
glTranslatef(0.0f, -.6f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();

glScalef(-1,1,0);
glTranslatef(0.0f, -.6f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();


glutTimerFunc(1500,demo_B,0);
   glFlush();
}

void demo_c(int val) {

 glutDisplayFunc(evening);


}

void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(153, 255, 255);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(153, 102, 51);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
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

//Fan

glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f( -0.83f, -0.4f);
    glVertex2f( -0.84f, -0.1f);

    glEnd();

glPushMatrix();
    glTranslatef(-.84,-.1,0);
    glRotatef(c,0,0.0,0.1);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.1f);
    glVertex2f( 0.0f, 0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.03f, -0.1f);
    glVertex2f( 0.0f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.1f, -0.03f);
    glVertex2f( 0.1f, 0.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.1f, 0.03f);
    glVertex2f( -0.1f, 0.0f);

    glEnd();

    glPopMatrix();

    c+=0.2f;

glLoadIdentity();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.4f);
glVertex2f(-0.87f,-0.35f);
glVertex2f(-0.78f,-0.4f);
glVertex2f(-0.78f,-0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 117, 125);
glVertex2f(-0.87f,-0.38f);
glVertex2f(-0.78f,-0.38f);
glVertex2f(-0.78f,-0.36f);
glVertex2f(-0.87f,-0.36f);
glEnd();

glTranslatef(1.65f, 0.0f, 0.0f);

glBegin(GL_LINES);////////////////
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.4f);
glVertex2f(-0.87f,-0.35f);
glVertex2f(-0.78f,-0.4f);
glVertex2f(-0.78f,-0.35f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(121, 117, 125);
glVertex2f(-0.87f,-0.38f);
glVertex2f(-0.78f,-0.38f);
glVertex2f(-0.78f,-0.36f);
glVertex2f(-0.87f,-0.36f);
glEnd();

   glLoadIdentity();

   // house

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.3f,-0.4f);
glVertex2f(-.3f,0.4f);
glVertex2f(-0.7f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(51, 0, 0);
glVertex2f(-0.6f,0.35f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-.68f,0.2f);
glVertex2f(-0.6f,0.2f);

glVertex2f(-0.6f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-.68f,0.0f);
glVertex2f(-0.6f,0.0f);

glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);

glVertex2f(-0.6f,-0.25f);
glVertex2f(-0.68f,-0.25f);
glVertex2f(-.68f,-0.39f);
glVertex2f(-0.6f,-0.39f);

glVertex2f(-0.5f,0.35f);
glVertex2f(-0.58f,0.35f);
glVertex2f(-.58f,0.2f);
glVertex2f(-0.5f,0.2f);

glVertex2f(-0.5f,0.15f);
glVertex2f(-0.58f,0.15f);
glVertex2f(-.58f,0.0f);
glVertex2f(-0.5f,0.0f);

glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);

glVertex2f(-0.5f,-0.25f);
glVertex2f(-0.58f,-0.25f);
glVertex2f(-.58f,-0.39f);
glVertex2f(-0.5f,-0.39f);

glVertex2f(-0.4f,0.35f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-.48f,0.2f);
glVertex2f(-0.4f,0.2f);

glVertex2f(-0.4f,0.15f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-.48f,0.0f);
glVertex2f(-0.4f,0.0f);

glVertex2f(-0.4f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.4f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);

glColor3ub(64, 64, 64);

glVertex2f(-0.35f,0.3f);
glVertex2f(-0.38f,0.3f);
glVertex2f(-.38f,0.2f);
glVertex2f(-0.35f,0.2f);

glVertex2f(-0.35f,0.1f);
glVertex2f(-0.38f,0.1f);
glVertex2f(-.38f,0.0f);
glVertex2f(-0.35f,0.0f);

glVertex2f(-0.35f,-0.1f);
glVertex2f(-0.38f,-0.1f);
glVertex2f(-.38f,-0.2f);
glVertex2f(-0.35f,-0.2f);

glVertex2f(-0.35f,-0.3f);
glVertex2f(-0.38f,-0.3f);
glVertex2f(-.38f,-0.39f);
glVertex2f(-0.35f,-0.39f);


glEnd();


glTranslatef(0.9f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.3f,-0.4f);
glVertex2f(-.3f,0.4f);
glVertex2f(-0.7f,0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(51, 0, 0);
glVertex2f(-0.6f,0.35f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-.68f,0.2f);
glVertex2f(-0.6f,0.2f);

glVertex2f(-0.6f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-.68f,0.0f);
glVertex2f(-0.6f,0.0f);

glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);

glVertex2f(-0.6f,-0.25f);
glVertex2f(-0.68f,-0.25f);
glVertex2f(-.68f,-0.39f);
glVertex2f(-0.6f,-0.39f);

glVertex2f(-0.5f,0.35f);
glVertex2f(-0.58f,0.35f);
glVertex2f(-.58f,0.2f);
glVertex2f(-0.5f,0.2f);

glVertex2f(-0.5f,0.15f);
glVertex2f(-0.58f,0.15f);
glVertex2f(-.58f,0.0f);
glVertex2f(-0.5f,0.0f);

glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);

glVertex2f(-0.5f,-0.25f);
glVertex2f(-0.58f,-0.25f);
glVertex2f(-.58f,-0.39f);
glVertex2f(-0.5f,-0.39f);

glVertex2f(-0.4f,0.35f);
glVertex2f(-0.48f,0.35f);
glVertex2f(-.48f,0.2f);
glVertex2f(-0.4f,0.2f);

glVertex2f(-0.4f,0.15f);
glVertex2f(-0.48f,0.15f);
glVertex2f(-.48f,0.0f);
glVertex2f(-0.4f,0.0f);

glVertex2f(-0.4f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.4f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);

glColor3ub(64, 64, 64);

glVertex2f(-0.35f,0.3f);
glVertex2f(-0.38f,0.3f);
glVertex2f(-.38f,0.2f);
glVertex2f(-0.35f,0.2f);

glVertex2f(-0.35f,0.1f);
glVertex2f(-0.38f,0.1f);
glVertex2f(-.38f,0.0f);
glVertex2f(-0.35f,0.0f);

glVertex2f(-0.35f,-0.1f);
glVertex2f(-0.38f,-0.1f);
glVertex2f(-.38f,-0.2f);
glVertex2f(-0.35f,-0.2f);

glVertex2f(-0.35f,-0.3f);
glVertex2f(-0.38f,-0.3f);
glVertex2f(-.38f,-0.39f);
glVertex2f(-0.35f,-0.39f);


glEnd();

  glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(122, 122, 82);
glVertex2f(-0.2f,-0.4f);
glVertex2f(0.0f,-0.4f);
glVertex2f(0.0f,0.3f);
glVertex2f(-0.2f,0.3f);
glEnd();

//shead
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.4f);
glVertex2f(-0.71f,-0.4f);
glVertex2f(-0.71f,-0.0f);
glVertex2f(-0.73f,-0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.4f);
glVertex2f(0.69f,-0.4f);
glVertex2f(0.69f,-0.0f);
glVertex2f(0.71f,-0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.0f);
glVertex2f(-0.75f,-0.1f);
glVertex2f(0.73f,-0.1f);
glVertex2f(0.71f,-0.0f);
glEnd();

//lamp post

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(0.93f,0.01f);
glVertex2f(0.88f,0.01f);
glVertex2f(0.88f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.9f,0.001f);
glColor3f(0,1,0);
glVertex2f(0.9f,-0.12f);
glEnd();

//rail line

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

//train

glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.5f,-0.48f);
glVertex2f(-0.5f,-0.3f);
glVertex2f(-0.55f,-0.3f);
glVertex2f(-0.6f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glTranslatef(0.08f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.16f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.24f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.32f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int i;
GLfloat x=-.42f; GLfloat y=-.45f; GLfloat radius =.05f;
int triangleAmount = 200;
GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++)
{
    glVertex2f
    (
        x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i7;
GLfloat x7=-.42f; GLfloat y7=-.45f; GLfloat radius7 =.04f;
int triangleAmount7 = 200;
GLfloat twicePi7 = 2.0f * PI;
glVertex2f(x7, y7);
for(i7 = 0; i7 <= triangleAmount7;i7++)
{
    glVertex2f
    (
        x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i2;
x2=-.2f; y2=-.45f; radius2 =.05f;
triangleAmount2 = 200;
twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i8;
GLfloat x8=-.2f; GLfloat y8=-.45f; GLfloat radius8 =.04f;
int triangleAmount8 = 200;
GLfloat twicePi8 = 2.0f * PI;
glVertex2f(x8, y8);
for(i8 = 0; i8 <= triangleAmount8;i8++)
{
    glVertex2f
    (
        x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)), y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
    );
}
glEnd();



glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glTranslatef(0.41f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.49f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.57f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.65f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);
glTranslatef(0.725f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int i1;
GLfloat x1=-.02f; GLfloat y1=-.45f; GLfloat radius1 =.05f;
int triangleAmount1 = 200;
GLfloat twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
for(i1 = 0; i1 <= triangleAmount1;i1++)
{
    glVertex2f
    (
        x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)), y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i9;
GLfloat x9=-.02f; GLfloat y9=-.45f; GLfloat radius9 =.04f;
int triangleAmount9 = 200;
GLfloat twicePi9 = 2.0f * PI;
glVertex2f(x9, y9);
for(i9 = 0; i9 <= triangleAmount9;i9++)
{
    glVertex2f
    (
        x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)), y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int k;
GLfloat u=.2f; GLfloat v=-.45f; GLfloat radius6 =.05f;
int triangleAmount6 = 200;
GLfloat twicePi6 = 2.0f * PI;
glVertex2f(u, v);
for(k = 0; k <= triangleAmount6;k++)
{
    glVertex2f
    (
        u + (radius6 * cos(k *  twicePi6 / triangleAmount6)), v + (radius6 * sin(k * twicePi6 / triangleAmount6))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i11;
GLfloat x11=.2f; GLfloat y11=-.45f; GLfloat radius11 =.04f;
int triangleAmount11 = 200;
GLfloat twicePi11 = 2.0f * PI;
glVertex2f(x11, y11);
for(i11 = 0; i11 <= triangleAmount11;i11++)
{
    glVertex2f
    (
        x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)), y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
    );
}
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glTranslatef(0.80f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.88f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(0.96f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(1.04f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position,0.0f, 0.0f);

glTranslatef(1.12f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position,0.0f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int r;
GLfloat s=.38f; GLfloat t=-.45f; GLfloat radius3 =.05f;
int triangleAmount3 = 200;
GLfloat twicePi3 = 2.0f * PI;
glVertex2f(s, t);
for(r = 0; r <= triangleAmount3;r++)
{
    glVertex2f
    (
        s + (radius3 * cos(r *  twicePi3 / triangleAmount3)), t + (radius3 * sin(r * twicePi3 / triangleAmount3))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i22;
GLfloat x22=.38f; GLfloat y22=-.45f; GLfloat radius22 =.04f;
int triangleAmount22 = 200;
GLfloat twicePi22 = 2.0f * PI;
glVertex2f(x22, y22);
for(i22 = 0; i22 <= triangleAmount;i22++)
{
    glVertex2f
    (
        x22 + (radius22 * cos(i22 *  twicePi22 / triangleAmount22)), y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
int r1;
GLfloat s1=.6f; GLfloat t1=-.45f; GLfloat radius4 =.05f;
int triangleAmount4 = 200;
GLfloat twicePi4 = 2.0f * PI;
glVertex2f(s1, t1);
for(r1 = 0; r1 <= triangleAmount4;r1++)
{
    glVertex2f
    (
        s1 + (radius4 * cos(r1 *  twicePi4 / triangleAmount4)), t1 + (radius4 * sin(r1 * twicePi4 / triangleAmount4))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
int i33;
GLfloat x33=.6f; GLfloat y33=-.45f; GLfloat radius33 =.04f;
int triangleAmount33 = 200;
GLfloat twicePi33 = 2.0f * PI;
glVertex2f(x33, y33);
for(i33 = 0; i33 <= triangleAmount33;i33++)
{
    glVertex2f
    (
        x33 + (radius33 * cos(i33 *  twicePi33 / triangleAmount33)), y33 + (radius33* sin(i33 * twicePi33 / triangleAmount33))
    );
}
glEnd();


    glPopMatrix();
glPushMatrix();
//train translate

glTranslatef(0.0f, -.2f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

glLoadIdentity();

//train translate

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,0.-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-1.0f,-0.46f);
glVertex2f(1.0f,0.-0.46f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.01f,-0.46f);
glVertex2f(-0.02f,-0.46f);
glVertex2f(-0.03f,-0.5f);
glVertex2f(-0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.03f,-0.46f);
glVertex2f(-0.04f,-0.46f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(-0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.05f,-0.46f);
glVertex2f(-0.06f,-0.46f);
glVertex2f(-0.07f,-0.5f);
glVertex2f(-0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.07f,-0.46f);
glVertex2f(-0.08f,-0.46f);
glVertex2f(-0.09f,-0.5f);
glVertex2f(-0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.09f,-0.46f);
glVertex2f(-0.1f,-0.46f);
glVertex2f(-0.11f,-0.5f);
glVertex2f(-0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.11f,-0.46f);
glVertex2f(-0.12f,-0.46f);
glVertex2f(-0.13f,-0.5f);
glVertex2f(-0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.13f,-0.46f);
glVertex2f(-0.14f,-0.46f);
glVertex2f(-0.15f,-0.5f);
glVertex2f(-0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.15f,-0.46f);
glVertex2f(-0.16f,-0.46f);
glVertex2f(-0.17f,-0.5f);
glVertex2f(-0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.17f,-0.46f);
glVertex2f(-0.18f,-0.46f);
glVertex2f(-0.19f,-0.5f);
glVertex2f(-0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.19f,-0.46f);
glVertex2f(-0.20f,-0.46f);
glVertex2f(-0.21f,-0.5f);
glVertex2f(-0.20f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.21f,-0.46f);
glVertex2f(-0.22f,-0.46f);
glVertex2f(-0.23f,-0.5f);
glVertex2f(-0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.23f,-0.46f);
glVertex2f(-0.24f,-0.46f);
glVertex2f(-0.25f,-0.5f);
glVertex2f(-0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.25f,-0.46f);
glVertex2f(-0.26f,-0.46f);
glVertex2f(-0.27f,-0.5f);
glVertex2f(-0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.27f,-0.46f);
glVertex2f(-0.28f,-0.46f);
glVertex2f(-0.29f,-0.5f);
glVertex2f(-0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.29f,-0.46f);
glVertex2f(-0.3f,-0.46f);
glVertex2f(-0.31f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.31f,-0.46f);
glVertex2f(-0.32f,-0.46f);
glVertex2f(-0.33f,-0.5f);
glVertex2f(-0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.33f,-0.46f);
glVertex2f(-0.34f,-0.46f);
glVertex2f(-0.35f,-0.5f);
glVertex2f(-0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.35f,-0.46f);
glVertex2f(-0.36f,-0.46f);
glVertex2f(-0.37f,-0.5f);
glVertex2f(-0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.37f,-0.46f);
glVertex2f(-0.38f,-0.46f);
glVertex2f(-0.39f,-0.5f);
glVertex2f(-0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.39f,-0.46f);
glVertex2f(-0.4f,-0.46f);
glVertex2f(-0.41f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.41f,-0.46f);
glVertex2f(-0.42f,-0.46f);
glVertex2f(-0.43f,-0.5f);
glVertex2f(-0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.43f,-0.46f);
glVertex2f(-0.44f,-0.46f);
glVertex2f(-0.45f,-0.5f);
glVertex2f(-0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.45f,-0.46f);
glVertex2f(-0.46f,-0.46f);
glVertex2f(-0.47f,-0.5f);
glVertex2f(-0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.47f,-0.46f);
glVertex2f(-0.48f,-0.46f);
glVertex2f(-0.49f,-0.5f);
glVertex2f(-0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.49f,-0.46f);
glVertex2f(-0.5f,-0.46f);
glVertex2f(-0.51f,-0.5f);
glVertex2f(-0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.51f,-0.46f);
glVertex2f(-0.52f,-0.46f);
glVertex2f(-0.53f,-0.5f);
glVertex2f(-0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.53f,-0.46f);
glVertex2f(-0.54f,-0.46f);
glVertex2f(-0.55f,-0.5f);
glVertex2f(-0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.55f,-0.46f);
glVertex2f(-0.56f,-0.46f);
glVertex2f(-0.57f,-0.5f);
glVertex2f(-0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.57f,-0.46f);
glVertex2f(-0.58f,-0.46f);
glVertex2f(-0.59f,-0.5f);
glVertex2f(-0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.59f,-0.46f);
glVertex2f(-0.6f,-0.46f);
glVertex2f(-0.61f,-0.5f);
glVertex2f(-0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.61f,-0.46f);
glVertex2f(-0.62f,-0.46f);
glVertex2f(-0.63f,-0.5f);
glVertex2f(-0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.63f,-0.46f);
glVertex2f(-0.64f,-0.46f);
glVertex2f(-0.65f,-0.5f);
glVertex2f(-0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.65f,-0.46f);
glVertex2f(-0.66f,-0.46f);
glVertex2f(-0.67f,-0.5f);
glVertex2f(-0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.67f,-0.46f);
glVertex2f(-0.68f,-0.46f);
glVertex2f(-0.69f,-0.5f);
glVertex2f(-0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.69f,-0.46f);
glVertex2f(-0.7f,-0.46f);
glVertex2f(-0.71f,-0.5f);
glVertex2f(-0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,-0.46f);
glVertex2f(-0.72f,-0.46f);
glVertex2f(-0.73f,-0.5f);
glVertex2f(-0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.73f,-0.46f);
glVertex2f(-0.74f,-0.46f);
glVertex2f(-0.75f,-0.5f);
glVertex2f(-0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.75f,-0.46f);
glVertex2f(-0.76f,-0.46f);
glVertex2f(-0.77f,-0.5f);
glVertex2f(-0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.77f,-0.46f);
glVertex2f(-0.78f,-0.46f);
glVertex2f(-0.79f,-0.5f);
glVertex2f(-0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.79f,-0.46f);
glVertex2f(-0.8f,-0.46f);
glVertex2f(-0.81f,-0.5f);
glVertex2f(-0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.81f,-0.46f);
glVertex2f(-0.82f,-0.46f);
glVertex2f(-0.83f,-0.5f);
glVertex2f(-0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.83f,-0.46f);
glVertex2f(-0.84f,-0.46f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(-0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.85f,-0.46f);
glVertex2f(-0.86f,-0.46f);
glVertex2f(-0.87f,-0.5f);
glVertex2f(-0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.87f,-0.46f);
glVertex2f(-0.88f,-0.46f);
glVertex2f(-0.89f,-0.5f);
glVertex2f(-0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.89f,-0.46f);
glVertex2f(-0.9f,-0.46f);
glVertex2f(-0.91f,-0.5f);
glVertex2f(-0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.46f);
glVertex2f(-0.92f,-0.46f);
glVertex2f(-0.93f,-0.5f);
glVertex2f(-0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.93f,-0.46f);
glVertex2f(-0.94f,-0.46f);
glVertex2f(-0.95f,-0.5f);
glVertex2f(-0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.95f,-0.46f);
glVertex2f(-0.96f,-0.46f);
glVertex2f(-0.97f,-0.5f);
glVertex2f(-0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.46f);
glVertex2f(-0.98f,-0.46f);
glVertex2f(-0.99f,-0.5f);
glVertex2f(-0.98f,-0.5f);
glEnd();

////

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.01f,-0.46f);
glVertex2f(0.0f,-0.46f);
glVertex2f(-0.01f,-0.5f);
glVertex2f(0.0f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.03f,-0.46f);
glVertex2f(0.02f,-0.46f);
glVertex2f(0.01f,-0.5f);
glVertex2f(0.02f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.05f,-0.46f);
glVertex2f(0.04f,-0.46f);
glVertex2f(0.03f,-0.5f);
glVertex2f(0.04f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.07f,-0.46f);
glVertex2f(0.06f,-0.46f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.06f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.09f,-0.46f);
glVertex2f(0.08f,-0.46f);
glVertex2f(0.07f,-0.5f);
glVertex2f(0.08f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.11f,-0.46f);
glVertex2f(0.1f,-0.46f);
glVertex2f(0.09f,-0.5f);
glVertex2f(0.1f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.13f,-0.46f);
glVertex2f(0.12f,-0.46f);
glVertex2f(0.11f,-0.5f);
glVertex2f(0.12f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.15f,-0.46f);
glVertex2f(0.14f,-0.46f);
glVertex2f(0.13f,-0.5f);
glVertex2f(0.14f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.17f,-0.46f);
glVertex2f(0.16f,-0.46f);
glVertex2f(0.15f,-0.5f);
glVertex2f(0.16f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.19f,-0.46f);
glVertex2f(0.18f,-0.46f);
glVertex2f(0.17f,-0.5f);
glVertex2f(0.18f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.21f,-0.46f);
glVertex2f(0.2f,-0.46f);
glVertex2f(0.19f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.23f,-0.46f);
glVertex2f(0.22f,-0.46f);
glVertex2f(0.21f,-0.5f);
glVertex2f(0.22f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.25f,-0.46f);
glVertex2f(0.24f,-0.46f);
glVertex2f(0.23f,-0.5f);
glVertex2f(0.24f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.27f,-0.46f);
glVertex2f(0.26f,-0.46f);
glVertex2f(0.25f,-0.5f);
glVertex2f(0.26f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.29f,-0.46f);
glVertex2f(0.28f,-0.46f);
glVertex2f(0.27f,-0.5f);
glVertex2f(0.28f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.31f,-0.46f);
glVertex2f(0.3f,-0.46f);
glVertex2f(0.29f,-0.5f);
glVertex2f(0.3f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.33f,-0.46f);
glVertex2f(0.32f,-0.46f);
glVertex2f(0.31f,-0.5f);
glVertex2f(0.32f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.35f,-0.46f);
glVertex2f(0.34f,-0.46f);
glVertex2f(0.33f,-0.5f);
glVertex2f(0.34f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.37f,-0.46f);
glVertex2f(0.36f,-0.46f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.36f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.39f,-0.46f);
glVertex2f(0.38f,-0.46f);
glVertex2f(0.37f,-0.5f);
glVertex2f(0.38f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.41f,-0.46f);
glVertex2f(0.4f,-0.46f);
glVertex2f(0.39f,-0.5f);
glVertex2f(0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.43f,-0.46f);
glVertex2f(0.42f,-0.46f);
glVertex2f(0.41f,-0.5f);
glVertex2f(0.42f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.45f,-0.46f);
glVertex2f(0.44f,-0.46f);
glVertex2f(0.43f,-0.5f);
glVertex2f(0.44f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.47f,-0.46f);
glVertex2f(0.46f,-0.46f);
glVertex2f(0.45f,-0.5f);
glVertex2f(0.46f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.49f,-0.46f);
glVertex2f(0.48f,-0.46f);
glVertex2f(0.47f,-0.5f);
glVertex2f(0.48f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.51f,-0.46f);
glVertex2f(0.5f,-0.46f);
glVertex2f(0.49f,-0.5f);
glVertex2f(0.5f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.53f,-0.46f);
glVertex2f(0.52f,-0.46f);
glVertex2f(0.51f,-0.5f);
glVertex2f(0.52f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.55f,-0.46f);
glVertex2f(0.54f,-0.46f);
glVertex2f(0.53f,-0.5f);
glVertex2f(0.54f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.57f,-0.46f);
glVertex2f(0.56f,-0.46f);
glVertex2f(0.55f,-0.5f);
glVertex2f(0.56f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.59f,-0.46f);
glVertex2f(0.58f,-0.46f);
glVertex2f(0.57f,-0.5f);
glVertex2f(0.58f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.61f,-0.46f);
glVertex2f(0.6f,-0.46f);
glVertex2f(0.59f,-0.5f);
glVertex2f(0.6f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.63f,-0.46f);
glVertex2f(0.62f,-0.46f);
glVertex2f(0.61f,-0.5f);
glVertex2f(0.62f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.65f,-0.46f);
glVertex2f(0.64f,-0.46f);
glVertex2f(0.63f,-0.5f);
glVertex2f(0.64f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.67f,-0.46f);
glVertex2f(0.66f,-0.46f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.66f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.69f,-0.46f);
glVertex2f(0.68f,-0.46f);
glVertex2f(0.67f,-0.5f);
glVertex2f(0.68f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.46f);
glVertex2f(0.7f,-0.46f);
glVertex2f(0.69f,-0.5f);
glVertex2f(0.7f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.73f,-0.46f);
glVertex2f(0.72f,-0.46f);
glVertex2f(0.71f,-0.5f);
glVertex2f(0.72f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.75f,-0.46f);
glVertex2f(0.74f,-0.46f);
glVertex2f(0.73f,-0.5f);
glVertex2f(0.74f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.77f,-0.46f);
glVertex2f(0.76f,-0.46f);
glVertex2f(0.75f,-0.5f);
glVertex2f(0.76f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.79f,-0.46f);
glVertex2f(0.78f,-0.46f);
glVertex2f(0.77f,-0.5f);
glVertex2f(0.78f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.81f,-0.46f);
glVertex2f(0.8f,-0.46f);
glVertex2f(0.79f,-0.5f);
glVertex2f(0.8f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.83f,-0.46f);
glVertex2f(0.82f,-0.46f);
glVertex2f(0.81f,-0.5f);
glVertex2f(0.82f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.85f,-0.46f);
glVertex2f(0.84f,-0.46f);
glVertex2f(0.83f,-0.5f);
glVertex2f(0.84f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.87f,-0.46f);
glVertex2f(0.86f,-0.46f);
glVertex2f(0.85f,-0.5f);
glVertex2f(0.86f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.89f,-0.46f);
glVertex2f(0.88f,-0.46f);
glVertex2f(0.87f,-0.5f);
glVertex2f(0.88f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.46f);
glVertex2f(0.9f,-0.46f);
glVertex2f(0.89f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.93f,-0.46f);
glVertex2f(0.92f,-0.46f);
glVertex2f(0.91f,-0.5f);
glVertex2f(0.92f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.95f,-0.46f);
glVertex2f(0.94f,-0.46f);
glVertex2f(0.93f,-0.5f);
glVertex2f(0.94f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.46f);
glVertex2f(0.96f,-0.46f);
glVertex2f(0.95f,-0.5f);
glVertex2f(0.96f,-0.5f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.99f,-0.46f);
glVertex2f(0.98f,-0.46f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.98f,-0.5f);
glEnd();

glLoadIdentity();

//train

glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glTranslatef(0.08f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.16f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.24f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.32f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

   glLoadIdentity();

   glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i;
x=-.42f; y=-.45f; radius =.05f;
triangleAmount = 200;
twicePi = 2.0f * PI;
glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++)
{
    glVertex2f
    (
        x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i7;
x7=-.42f; y7=-.45f; radius7 =.04f;
triangleAmount7 = 200;
twicePi7 = 2.0f * PI;
glVertex2f(x7, y7);
for(i7 = 0; i7 <= triangleAmount7;i7++)
{
    glVertex2f
    (
        x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i2;
x2=-.2f; y2=-.45f; radius2 =.05f;
triangleAmount2 = 200;
twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i8;
x8=-.2f; y8=-.45f; radius8 =.04f;
triangleAmount8 = 200;
twicePi8 = 2.0f * PI;
glVertex2f(x8, y8);
for(i8 = 0; i8 <= triangleAmount8;i8++)
{
    glVertex2f
    (
        x8 + (radius8 * cos(i8 *  twicePi8 / triangleAmount8)), y8 + (radius8 * sin(i8 * twicePi8 / triangleAmount8))
    );
}
glEnd();

glLoadIdentity();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glTranslatef(0.41f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.49f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.57f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.65f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.725f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
i1;
x1=-.02f; y1=-.45f; radius1 =.05f;
triangleAmount1 = 200;
twicePi1 = 2.0f * PI;
glVertex2f(x1, y1);
for(i1 = 0; i1 <= triangleAmount1;i1++)
{
    glVertex2f
    (
        x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)), y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i9;
x9=-.02f; y9=-.45f; radius9 =.04f;
triangleAmount9 = 200;
twicePi9 = 2.0f * PI;
glVertex2f(x9, y9);
for(i9 = 0; i9 <= triangleAmount9;i9++)
{
    glVertex2f
    (
        x9 + (radius9 * cos(i9 *  twicePi9 / triangleAmount9)), y9 + (radius9 * sin(i9 * twicePi9 / triangleAmount9))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
k;
u=.2f; v=-.45f; radius6 =.05f;
triangleAmount6 = 200;
twicePi6 = 2.0f * PI;
glVertex2f(u, v);
for(k = 0; k <= triangleAmount6;k++)
{
    glVertex2f
    (
        u + (radius6 * cos(k *  twicePi6 / triangleAmount6)), v + (radius6 * sin(k * twicePi6 / triangleAmount6))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i11;
x11=.2f; y11=-.45f; radius11 =.04f;
triangleAmount11 = 200;
twicePi11 = 2.0f * PI;
glVertex2f(x11, y11);
for(i11 = 0; i11 <= triangleAmount11;i11++)
{
    glVertex2f
    (
        x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)), y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
    );
}
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.3f);
glVertex2f(0.75f,-0.3f);
glVertex2f(0.8f,-0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(41, 38, 54);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glTranslatef(0.80f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.88f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(0.96f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(1.04f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();
glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glTranslatef(1.12f, 0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(206, 213, 237);
glVertex2f(-0.5f,-0.28f);
glVertex2f(-0.5f,-0.32f);
glVertex2f(-0.45f,-0.32f);
glVertex2f(-0.45f,-0.28f);
glEnd();

glLoadIdentity();

glTranslatef(position2,0.0f, 0.0f);

glTranslatef(0.0f, -.4f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
r;
s=.38f; t=-.45f; radius3 =.05f;
triangleAmount3 = 200;
twicePi3 = 2.0f * PI;
glVertex2f(s, t);
for(r = 0; r <= triangleAmount3;r++)
{
    glVertex2f
    (
        s + (radius3 * cos(r *  twicePi3 / triangleAmount3)), t + (radius3 * sin(r * twicePi3 / triangleAmount3))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i22;
x22=.38f; y22=-.45f; radius22 =.04f;
triangleAmount22 = 200;
twicePi22 = 2.0f * PI;
glVertex2f(x22, y22);
for(i22 = 0; i22 <= triangleAmount;i22++)
{
    glVertex2f
    (
        x22 + (radius22 * cos(i22 *  twicePi22 / triangleAmount22)), y22 + (radius22 * sin(i22 * twicePi22 / triangleAmount22))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(255,255,255);
r1;
s1=.6f; t1=-.45f; radius4 =.05f;
triangleAmount4 = 200;
twicePi4 = 2.0f * PI;
glVertex2f(s1, t1);
for(r1 = 0; r1 <= triangleAmount4;r1++)
{
    glVertex2f
    (
        s1 + (radius4 * cos(r1 *  twicePi4 / triangleAmount4)), t1 + (radius4 * sin(r1 * twicePi4 / triangleAmount4))
    );
}
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
i33;
x33=.6f; y33=-.45f; radius33 =.04f;
triangleAmount33 = 200;
twicePi33 = 2.0f * PI;
glVertex2f(x33, y33);
for(i33 = 0; i33 <= triangleAmount33;i33++)
{
    glVertex2f
    (
        x33 + (radius33 * cos(i33 *  twicePi33 / triangleAmount33)), y33 + (radius33* sin(i33 * twicePi33 / triangleAmount33))
    );
}
glEnd();

glLoadIdentity();

  glPopMatrix();

//clock
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
j;
p=-.1f; q=.2f;  radius5 =.1f;
triangleAmount5 = 200;
twicePi5 = 2.0f * PI;
glVertex2f(p, q);
for(j = 0; j <= triangleAmount5;j++)
{
    glVertex2f
    (
        p + (radius5 * cos(j *  twicePi5 / triangleAmount5)), q + (radius5 * sin(j * twicePi5 / triangleAmount5))
    );
}
glEnd();

glPushMatrix();
    glTranslatef(-0.1,.2,0);
    glRotatef(c,0.0,0.0,0.1);

    glBegin(GL_LINES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.1f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, -0.08f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, -0.05f);

    glEnd();

    glPopMatrix();

    c-=0.05f;

glLoadIdentity();

glScalef(1,1,0);
glTranslatef(0.0f, -.6f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();

glScalef(-1,1,0);
glTranslatef(0.0f, -.6f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.93f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.91f,0.001f);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();

//glutTimerFunc(1500,demo_B,0);
glutTimerFunc(1500,demo_c,0);
   glFlush();
}





void demo_A()
{
       glutDisplayFunc(day);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Model Transform");
    glutIdleFunc(Idle);
    sound();
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update_bird, 0);
    glutDisplayFunc(demo_A);
    glutTimerFunc(100, update_timer, 0);
    glutMainLoop();
    return 0;
}
