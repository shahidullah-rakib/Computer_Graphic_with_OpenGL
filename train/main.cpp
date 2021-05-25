#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

void sound()
{

    PlaySound("train.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}

GLfloat c = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
void demo_A();


void update_animation(int value) {



	glutPostRedisplay();


	glutTimerFunc(100,update_animation,0);
}

void demo_back(int val) {

 glutDisplayFunc(demo_A);


}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    sound2();
    break;
case 'r':
    speed = 0.1f;
    sound();
    break;
glutPostRedisplay();
	}
}

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
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
   glLoadIdentity();

glBegin(GL_QUADS);
glColor3ub(112, 115, 113);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(92, 92, 61);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
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

//wind mill

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

glTranslatef(1.65f, 0.0f, 0.0f);

   glLoadIdentity();
//left side building
glBegin(GL_QUADS);
glColor3ub(179, 45, 0);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(-0.1f,0.01f);
glVertex2f(-0.7f,0.01f);
glEnd();

//left side building windows
glBegin(GL_QUADS);
glColor3ub(0,0,0);


glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);



glVertex2f(-0.2f,-0.05f);
glVertex2f(-0.40f,-0.05f);
glVertex2f(-.40f,-0.2f);
glVertex2f(-0.2f,-0.2f);

glEnd();


glTranslatef(0.9f, 0.0f, 0.0f);
//right side building

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(-.1f,0.1f);
glVertex2f(-0.9f,0.1f);
glEnd();

//right side building window

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);


glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.5f,-0.2f);


glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);



glVertex2f(-0.3f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.3f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);



glEnd();

  glLoadIdentity();

//tree
//left
glBegin(GL_LINES);
glColor3ub(1, 1, 1);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 153, 0);
glVertex2f(-0.98f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.98f,-0.15f);
glEnd();



glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 153, 0);
glVertex2f(0.98f,0.01f);
glVertex2f(0.88f,0.01f);
glVertex2f(0.88f,-0.15f);
glVertex2f(0.98f,-0.15f);
glEnd();


//train line
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


//rail bogi
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(102, 0, 0);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

//train wheel
glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
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
int i2;
GLfloat x2=-.2f; GLfloat y2=-.45f; GLfloat radius2 =.05f;
int triangleAmount2 = 200;
GLfloat twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();




glBegin(GL_QUADS);
glColor3ub(102, 0, 0);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
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



glBegin(GL_QUADS);
glColor3ub(102, 0, 0);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
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

glPopMatrix();
//sun
glBegin(GL_TRIANGLE_FAN);
glColor3ub(201, 197, 197);
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

 glutTimerFunc(1500,demo_back,0);

   glFlush();
}

void demo_B(int val) {

 glutDisplayFunc(night);


}

void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(250, 242, 242);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(92, 92, 61);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,-1.0f);
glVertex2f(-1.0f,-1.0f);
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

//wind mill

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

glTranslatef(1.65f, 0.0f, 0.0f);

   glLoadIdentity();
//left side building
glBegin(GL_QUADS);
glColor3ub(179, 45, 0);
glVertex2f(-0.7f,-0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(-0.1f,0.01f);
glVertex2f(-0.7f,0.01f);
glEnd();

//left side building windows
glBegin(GL_QUADS);
glColor3ub(0,0,0);


glVertex2f(-0.6f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.6f,-0.2f);



glVertex2f(-0.2f,-0.05f);
glVertex2f(-0.40f,-0.05f);
glVertex2f(-.40f,-0.2f);
glVertex2f(-0.2f,-0.2f);

glEnd();


glTranslatef(0.9f, 0.0f, 0.0f);
//right side building

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.1f,-0.4f);
glVertex2f(-.1f,0.1f);
glVertex2f(-0.9f,0.1f);
glEnd();

//right side building window

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);


glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.68f,-0.05f);
glVertex2f(-.68f,-0.2f);
glVertex2f(-0.5f,-0.2f);


glVertex2f(-0.5f,-0.05f);
glVertex2f(-0.58f,-0.05f);
glVertex2f(-.58f,-0.2f);
glVertex2f(-0.5f,-0.2f);



glVertex2f(-0.3f,-0.05f);
glVertex2f(-0.48f,-0.05f);
glVertex2f(-.48f,-0.2f);
glVertex2f(-0.3f,-0.2f);

glVertex2f(-0.4f,-0.25f);
glVertex2f(-0.48f,-0.25f);
glVertex2f(-.48f,-0.39f);
glVertex2f(-0.4f,-0.39f);



glEnd();

  glLoadIdentity();

//tree
//left
glBegin(GL_LINES);
glColor3ub(1, 1, 1);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 153, 0);
glVertex2f(-0.98f,0.01f);
glVertex2f(-0.88f,0.01f);
glVertex2f(-0.88f,-0.15f);
glVertex2f(-0.98f,-0.15f);
glEnd();



glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.91f,0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 153, 0);
glVertex2f(0.98f,0.01f);
glVertex2f(0.88f,0.01f);
glVertex2f(0.88f,-0.15f);
glVertex2f(0.98f,-0.15f);
glEnd();


//train line
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


//rail bogi
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(102, 0, 0);
glVertex2f(-0.11f,-0.48f);
glVertex2f(-0.11f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.48f);
glEnd();

//train wheel
glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
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
int i2;
GLfloat x2=-.2f; GLfloat y2=-.45f; GLfloat radius2 =.05f;
int triangleAmount2 = 200;
GLfloat twicePi2 = 2.0f * PI;
glVertex2f(x2, y2);
for(i2 = 0; i2 <= triangleAmount;i2++)
{
    glVertex2f
    (
        x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
    );
}
glEnd();




glBegin(GL_QUADS);
glColor3ub(102, 0, 0);
glVertex2f(-0.1f,-0.48f);
glVertex2f(0.28f,-0.48f);
glVertex2f(0.28f,-0.2f);
glVertex2f(-0.1f,-0.2f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
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



glBegin(GL_QUADS);
glColor3ub(102, 0, 0);
glVertex2f(0.29f,-0.48f);
glVertex2f(0.68f,-0.48f);
glVertex2f(0.68f,-0.2f);
glVertex2f(0.29f,-0.2f);
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor3f(0,0,0);
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

glPopMatrix();
//sun
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 51, 0);
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

glutTimerFunc(1500,demo_B,0);

   glFlush();
}




void demo_A()
{
       glutDisplayFunc(day);
}





int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model");
    //glutDisplayFunc(display);//
    //glutTimerFunc(100, update, 0);
    sound();
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
   // glutKeyboardFunc(handleKeypress2);
    glutSpecialFunc(SpecialInput);
    glutDisplayFunc(demo_A);

    glutIdleFunc(Idle);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update_bird, 0);
    glutMainLoop();
    return 0;
}
