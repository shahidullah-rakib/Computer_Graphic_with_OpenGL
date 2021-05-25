#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

//wind mile
GLfloat i15 = 0.0f;

///boat
GLfloat position123 = 0.0f;
GLfloat speed123 = 0.1f;

GLfloat r=0.0f;
GLfloat a=0.0f;
GLfloat b=0.0f;
GLfloat c=0.0f;

void update_ship(int value) {

    if(position123 <-1.5)
        position123 = 1.0f;

    position123 -= speed123;

	glutPostRedisplay();


	glutTimerFunc(100, update_ship, 0);
}



GLfloat position_bird = 0.0f;
GLfloat speed_bird = 0.01f;

void soundTrain()
{

    PlaySound("train.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void soundCar()
{

    PlaySound("car.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void soundOff()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}

GLfloat position_plane = 0.0f;
GLfloat speed_plane = 0.08f;

void update_plane(int value) {



    if(position_plane >1.4)
        position_plane = -1.0f;



    position_plane += speed_plane; //position=position-speed;1-.1=.9



    glutPostRedisplay();




    glutTimerFunc(100, update_plane, 0);
}

void update_bird(int value) {

    if(position_bird >1.0)
        position_bird = -1.0f;

    position_bird += speed_bird;

	glutPostRedisplay();


	glutTimerFunc(100, update_bird, 0);
}

GLfloat position_train = 0.0f;
GLfloat speed_train = 0.05f;

void update_train(int value) {

    if(position_train <-1.5)
        position_train = 2.0f;

    position_train -= speed_train;

	glutPostRedisplay();


	glutTimerFunc(100, update_train, 0);
}

void SpecialInput_train(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed_train=.5;
soundTrain();
soundCar();
break;
case GLUT_KEY_DOWN:
speed_train=.0;
soundOff();
soundCar();
break;
case GLUT_KEY_LEFT:
speed_train=.1;
soundTrain();
soundCar();
break;
case GLUT_KEY_RIGHT:
speed_train=.1;
soundTrain();
soundCar();
break;}
glutPostRedisplay();}

GLfloat position_jip1 = 0.0f;
GLfloat speed_jip1 = 0.08f;

void update_jip1(int value) {

    if(position_jip1 <-1.0)
        position_jip1 = 2.0f;

    position_jip1 -= speed_jip1;

	glutPostRedisplay();


	glutTimerFunc(100, update_jip1, 0);
}

GLfloat position_bus1 = 0.0f;
GLfloat speed_bus1 = 0.06f;

void update_bus1(int value) {

    if(position_bus1 <-1.0)
        position_bus1 = 2.0f;

    position_bus1 -= speed_bus1;

	glutPostRedisplay();


	glutTimerFunc(100, update_bus1, 0);
}

GLfloat position_car1 = 0.0f;
GLfloat speed_car1 = 0.1f;

void update_car1(int value) {

    if(position_car1 <-1.0)
        position_car1 = 2.0f;

    position_car1 -= speed_car1;

	glutPostRedisplay();


	glutTimerFunc(100, update_car1, 0);
}

GLfloat position_car2 = 0.0f;
GLfloat speed_car2 = 0.1f;

void update_car2(int value) {

    if(position_car2 >2.0)
        position_car2 = -1.0f;

    position_car2 += speed_car2;

	glutPostRedisplay();


	glutTimerFunc(100, update_car2, 0);
}

GLfloat position_jip2 = 0.0f;
GLfloat speed_jip2 = 0.08f;

void update_jip2(int value) {

    if(position_jip2 >1.5)
        position_jip2 = -1.5f;

    position_jip2 += speed_jip2;

	glutPostRedisplay();


	glutTimerFunc(100, update_jip2, 0);
}

GLfloat position_car3 = 0.0f;
GLfloat speed_car3 = 0.07f;

void update_car3(int value) {

    if(position_car3 >2.0)
        position_car3 = -2.0f;

    position_car3 += speed_car3;

	glutPostRedisplay();


	glutTimerFunc(100, update_car3, 0);
}

GLfloat position_bus2 = 0.0f;
GLfloat speed_bus2 = 0.06f;

void update_bus2(int value) {

    if(position_bus2 >2.0)
        position_bus2 = -2.0f;

    position_bus2 += speed_bus2;

	glutPostRedisplay();


	glutTimerFunc(100, update_bus2, 0);
}

void handleKeypress_RightCar(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed_jip2 = 0.0f;
    speed_car2 = 0.0f;
    speed_bus2 = 0.0f;
    speed_car3 = 0.0f;
    soundOff();
    soundTrain();
    break;
case 'r':
    speed_jip2 = 0.1f;
    speed_car2 = 0.1f;
    speed_bus2 = 0.1f;
    speed_car3 = 0.1f;
    soundCar();
    soundTrain();
    break;
glutPostRedisplay();
	}
}

void handleMouse_LeftCar(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
        speed_car1 = 0.0f;
        speed_bus1 = 0.0f;
        speed_jip1 = 0.0f;
        soundOff();
        soundTrain();
			}
    if (button == GLUT_RIGHT_BUTTON){
	    speed_car1 = 0.1f;
	    speed_bus1 = 0.1f;
	    speed_jip1 = 0.1f;
	    soundCar();
	    soundTrain();
			}
	glutPostRedisplay();
	}

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


void demo_day();

void demo_back(int val) {

 glutDisplayFunc(demo_day);

}


void rain() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Background Color
    //sky
    glBegin(GL_QUADS);
    glColor3ub(135, 173, 159);

    glVertex2f(-1,1);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,1);

    glEnd();

//sun

int j;
GLfloat x; GLfloat y; GLfloat radius;
int triangleAmount;
GLfloat twicePi = 2.0f * PI;

// end

//cloud
//1st ring
glLoadIdentity();
      glTranslatef(-0.7,0.1,0);

	int j7;

	GLfloat x7=.3f; GLfloat y7= .8f; GLfloat radius7 =.050f;
	int triangleAmount7 = 20; //# of triangles used to draw circle
	glColor3ub(105, 112, 120);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(j7 = 0; j7 <= triangleAmount7;j7++) {
			glVertex2f(
		            x7 + (radius7 * cos(j7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(j7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();
//2nd ring
	int j8;

	GLfloat x8=.35f; GLfloat y8= .85f; GLfloat radius8 =.050f;
	int triangleAmount8 = 20; //# of triangles used to draw circle
	glColor3ub(105, 112, 120);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(j8 = 0; j8 <= triangleAmount8;j8++) {
			glVertex2f(
		            x8 + (radius8 * cos(j8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();
//3rd ring
	int j9;

	GLfloat x9=.40f; GLfloat y9= .8f; GLfloat radius9 =.050f;
	int triangleAmount9 = 20; //# of triangles used to draw circle
	glColor3ub(105, 112, 120);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(j9 = 0; j9 <= triangleAmount9;j9++) {
			glVertex2f(
		            x9 + (radius8 * cos(j9 *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(j9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();
//4th ring
	int j10;

	GLfloat x10=.35f; GLfloat y10= .80f; GLfloat radius10 =.050f;
	int triangleAmount10 = 20; //# of triangles used to draw circle
	glColor3ub(105, 112, 120);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(j10 = 0; j10 <= triangleAmount10;j10++) {
			glVertex2f(
		            x10 + (radius10 * cos(j10 *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(j10 * twicePi10 / triangleAmount10))
			);
		}
	glEnd();

glLoadIdentity();

glTranslatef(0.0f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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

glTranslatef(1.5f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(105, 112, 120);
i2;
 x2=-.8f;  y2=.8f;  radius2 =.05f;
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
glColor3ub(105, 112, 120);
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
//end cloud

 ///Air Bus Start
    glPushMatrix();



glTranslatef(position_plane,0,0);




    ///Air Bus Start
    glBegin(GL_POLYGON);                ///Body
    glColor3f(0, 38, 153);
    glVertex2f( -0.66f, 0.7f);
    glVertex2f( -0.66, 0.69f);
    glVertex2f( -0.59f, 0.65f);
    glVertex2f( -0.38f, 0.65f);
    glVertex2f( -0.36f, 0.67f);
    glVertex2f( -0.36f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.4f, 0.7f);



    glEnd();



    glBegin(GL_QUADS);                 ///Engine
    glColor3ub(0,0,0);
    glVertex2f( -0.49f, 0.64f);
    glVertex2f( -0.49f, 0.62f);
    glVertex2f( -0.47f, 0.62f);
    glVertex2f( -0.47f, 0.64f);



    glEnd();



    glBegin(GL_QUADS);                 ///Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.49f, 0.66f);
    glVertex2f( -0.55f, 0.61f);
    glVertex2f( -0.53f, 0.61f);
    glVertex2f( -0.45f, 0.66f);



    glEnd();



    glBegin(GL_QUADS);                 ///Back Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.53f, 0.73f);
    glVertex2f( -0.5f, 0.7f);
    glVertex2f( -0.47f, 0.7f);
    glVertex2f( -0.51f, 0.73f);



    glEnd();



    glBegin(GL_QUADS);                 ///Tail Top Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.63f, 0.74f);
    glVertex2f( -0.62f, 0.7f);
    glVertex2f( -0.59f, 0.7f);
    glVertex2f( -0.62f, 0.74f);



    glEnd();



    glBegin(GL_QUADS);                 ///Tail Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.61f, 0.69f);
    glVertex2f( -0.64f, 0.67f);
    glVertex2f( -0.61f, 0.67f);
    glVertex2f( -0.58f, 0.69f);



    glEnd();



    glBegin(GL_QUADS);                 ///Looking
    glColor3ub(255,255,255);
    glVertex2f( -0.4f, 0.69f);
    glVertex2f( -0.4f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.39f, 0.69f);



    glEnd();



    glPointSize(2);                     ///Windows
   glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   glVertex2f(-0.57f,0.68f);
   glVertex2f(-0.53f,0.68f);
   glVertex2f(-0.49f,0.68f);
   glVertex2f(-0.46f,0.68f);
   glVertex2f(-0.43f,0.68f);




   glEnd();



glPopMatrix();
///Air Bus End

 	glBegin(GL_QUADS);              ///River
	glColor3ub(0, 153, 255); // Red
	glVertex2f(1.0, -0.5);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(-1.0f, -0.5f);
    glEnd();


    glPushMatrix();

    glTranslatef(position123,0,0);



    glBegin(GL_QUADS);              ///Boat lower part
	glColor3ub(153, 0, 204);
	glVertex2f(0.6, 0.01);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.43f, 0.01f);
    glEnd();


    glBegin(GL_QUADS);              ///Boat lower stripe part
	glColor3ub(255, 255, 255);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.613f, 0.059f);
	glVertex2f(0.395f, 0.059f);
	glVertex2f(0.404f, 0.05f);
    glEnd();
///

    glBegin(GL_QUADS);              ///Boat Upper part
	glColor3ub(153, 0, 204);
	glVertex2f(0.613f, 0.059f);
	glVertex2f(0.62f, 0.09f);
	glVertex2f(0.377f, 0.093f);
	glVertex2f(0.395f, 0.059f);
    glEnd();


    glBegin(GL_QUADS);              ///Boat Upper quid part
	glColor3ub(153, 0, 204);
	glVertex2f(0.45f, 0.091f);
	glVertex2f(0.43f, 0.12);
	glVertex2f(0.3610f, 0.12f);
    glVertex2f(0.378f, 0.091f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat end panel
	glColor3ub(153, 0, 204);
	glVertex2f(0.62f, 0.09f);
	glVertex2f(0.62f, 0.12);
	glVertex2f(0.615f, 0.12f);
    glVertex2f(0.615f, 0.09f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 1(1)
	glColor3ub(0, 0, 204);
	glVertex2f(0.6f, 0.0972f);
	glVertex2f(0.6f, 0.115);
	glVertex2f(0.58f, 0.115f);
    glVertex2f(0.58f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 1(2)
	glColor3ub(0, 0, 204);
	glVertex2f(0.6f, 0.119f);
	glVertex2f(0.6f, 0.135);
	glVertex2f(0.58f, 0.135f);
    glVertex2f(0.58f, 0.119f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 2
	glColor3ub(0, 0, 204);
	glVertex2f(0.535f, 0.0972f);
	glVertex2f(0.535f, 0.135);
	glVertex2f(0.575f, 0.135f);
    glVertex2f(0.575f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 3(1)
    glColor3ub(0, 0, 204);
	glVertex2f(0.5f, 0.0972f);
	glVertex2f(0.5f, 0.115);
	glVertex2f(0.53f, 0.115f);
    glVertex2f(0.53f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 3(2)
	glColor3ub(0, 0, 204);
	glVertex2f(0.5f, 0.119f);
	glVertex2f(0.5, 0.135);
	glVertex2f(0.53f, 0.135f);
    glVertex2f(0.53f, 0.119f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 4
	glColor3ub(0, 0, 204);
	glVertex2f(0.47f, 0.0972f);
	glVertex2f(0.47f, 0.135);
	glVertex2f(0.49f, 0.135f);
    glVertex2f(0.49f, 0.0972f);

   glEnd();

    glPopMatrix();



//Building Start

glBegin(GL_QUADS);
	glColor3ub(73, 154, 129);        ///Smart Government Body Lower QUADS
	glVertex2f(-.6f, .2f);
	glVertex2f(-.5f, .2f);
	glVertex2f(-.5, -.5f);
	glVertex2f(-.6f, -.5f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 1st Windows QUADS
	glVertex2f(-.59f, .18f);
	glVertex2f(-.57f, .18f);
	glVertex2f(-.57, .14f);
	glVertex2f(-.59f, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 2nd Windows QUADS
	glVertex2f(-.56f, .18f);
	glVertex2f(-.54f, .18f);
	glVertex2f(-.54, .14f);
	glVertex2f(-.56, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 3rd Windows QUADS
	glVertex2f(-.53f, .18f);
	glVertex2f(-.51f, .18f);
	glVertex2f(-.51, .14f);
	glVertex2f(-.53, .14f);
    glEnd();

	glVertex2f(-.54, .08f);
	glVertex2f(-.56f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 6th Windows QUADS
	glVertex2f(-.53f, .12f);
	glVertex2f(-.51f, .12f);
	glVertex2f(-.51, .08f);
	glVertex2f(-.53f, .08f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 7th Windows QUADS
	glVertex2f(-.59f, .06f);
	glVertex2f(-.57f, .06f);
	glVertex2f(-.57, .02f);
	glVertex2f(-.59f, .02f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 8th Windows QUADS
	glVertex2f(-.56f, .06f);
	glVertex2f(-.54f, .06f);
	glVertex2f(-.54, .02f);
	glVertex2f(-.56f, .02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 9th Windows QUADS
	glVertex2f(-.53f, .06f);
	glVertex2f(-.51f, .06f);
	glVertex2f(-.51, .02f);
	glVertex2f(-.53, .02f);
    glEnd();






    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body Lower 1st  Windows QUADS
	glVertex2f(-.59f, -.18f);
	glVertex2f(-.57f, -.18f);
	glVertex2f(-.57, -.14f);
	glVertex2f(-.59f, -.14f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 2nd Windows QUADS
	glVertex2f(-.56f, -.18f);
	glVertex2f(-.54f, -.18f);
	glVertex2f(-.54, -.14f);
	glVertex2f(-.56, -.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 3rd Windows QUADS
	glVertex2f(-.53f, -.18f);
	glVertex2f(-.51f, -.18f);
	glVertex2f(-.51, -.14f);
	glVertex2f(-.53,-.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 4th Windows QUADS
	glVertex2f(-.59f, -.12f);
	glVertex2f(-.57f, -.12f);
	glVertex2f(-.57, -.08f);
	glVertex2f(-.59f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government lower 5th Windows QUADS
	glVertex2f(-.56f, -.12f);
	glVertex2f(-.54f, -.12f);
	glVertex2f(-.54, -.08f);
	glVertex2f(-.56f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 6th Windows QUADS
	glVertex2f(-.53f, -.12f);
	glVertex2f(-.51f, -.12f);
	glVertex2f(-.51, -.08f);
	glVertex2f(-.53f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 7th Windows QUADS
	glVertex2f(-.59f, -.06f);
	glVertex2f(-.57f, -.06f);
	glVertex2f(-.57, -.02f);
	glVertex2f(-.59f, -.02f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 8th Windows QUADS
	glVertex2f(-.56f, -.06f);
	glVertex2f(-.54f, -.06f);
	glVertex2f(-.54, -.02f);
	glVertex2f(-.56f, -.02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Lower 9th Windows QUADS
	glVertex2f(-.53f, -.06f);
	glVertex2f(-.51f, -.06f);
	glVertex2f(-.51, -.02f);
	glVertex2f(-.53, -.02f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123, 60, 92);        ///Smart Government Body Upper QUADS
	glVertex2f(-.59f, .3f);
	glVertex2f(-.51f, .3f);
	glVertex2f(-.51, .2f);
	glVertex2f(-.59f, .2f);
    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3ub(123, 60, 92);        ///Smart Government Antina
    glVertex2f( -0.546f, 0.35f);
    glVertex2f( -0.550f, 0.45f);
    glVertex2f( -0.554f, 0.35f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Windows QUADS 1
	glVertex2f(-.585, .28f);
	glVertex2f(-.57, .28f);
	glVertex2f(-.57, .23f);
	glVertex2f(-.585f, .23f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 2
	glVertex2f(-.56f, .28f);
	glVertex2f(-.54f, .28f);
	glVertex2f(-.54, .23f);
	glVertex2f(-.56f, .23f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 3
	glVertex2f(-.53f, .28f);
	glVertex2f(-.515f, .28f);
	glVertex2f(-.515, .23f);
	glVertex2f(-.53f, .23f);
    glEnd();





                                ///Smart Government Body Upper QUADS
    glBegin(GL_QUADS);
    glColor3ub(232, 76, 51);
    glVertex2f( -0.54f, 0.35f);
    glVertex2f( -0.56f, 0.35f);
    glVertex2f( -0.59f, 0.3f);
    glVertex2f( -0.51f, 0.3f);
    glEnd();







    glBegin(GL_QUADS);
	glColor3ub(52, 119, 128);        ///LEFT house QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.5);
	glVertex2f(-1, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(32, 66, 73);        ///LEFT house upper QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.2);
	glVertex2f(-1, -.2);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);        ///LEFT house WINDOWS QUADS
	glVertex2f(-.98, -.25);
	glVertex2f(-.93, -.25);
	glVertex2f(-.93, -.45);
	glVertex2f(-.98, -.45);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 1st Left QUADS
	glVertex2f(-.9, -.15);
	glVertex2f(-.75, -.15);
	glVertex2f(-.75, -.5f);
	glVertex2f(-.9f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 1st Windows QUADS
	glVertex2f(-.88, -.2);
	glVertex2f(-.85, -.2);
	glVertex2f(-.85, -.3);
	glVertex2f(-.88, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);       ///Manufacture Body 2rd Windows QUADS
	glVertex2f(-.835, -.2);
	glVertex2f(-.805, -.2);
	glVertex2f(-.805, -.3);
	glVertex2f(-.835, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 3rd Windows QUADS
	glVertex2f(-.79, -.2);
	glVertex2f(-.76, -.2);
	glVertex2f(-.76, -.3);
	glVertex2f(-.79, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.75, -.15);
	glVertex2f(-.67, -.25f);
	glVertex2f(-.67f, -.5f);
	glVertex2f(-.75f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);        ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.7, -.15);
	glVertex2f(-.62, -.25f);
	glVertex2f(-.62f, -.5f);
	glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 3rd Left QUADS
	glVertex2f(-.65, -.15);
	glVertex2f(-.57, -.25f);
	glVertex2f(-.57, -.5);
	glVertex2f(-.65, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Left Pipe QUADS
	glVertex2f(-.87, .0);
	glVertex2f(-.84, .0);
	glVertex2f(-.83, -.15);
	glVertex2f(-.88, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left Down Stripe Pipe QUADS
	glVertex2f(-.8765, -.10);
	glVertex2f(-.8345, -.10);
	glVertex2f(-.83, -.13);
	glVertex2f(-.88, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left UP Stripe Pipe QUADS
	glVertex2f(-.8725, -.04);
	glVertex2f(-.838, -.04);
	glVertex2f(-.834, -.07);
	glVertex2f(-.875, -.07);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Right Pipe QUADS
	glVertex2f(-.81, .0);
	glVertex2f(-.78, .0);
	glVertex2f(-.77, -.15);
	glVertex2f(-.82, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right Down Stripe Pipe QUADS
	glVertex2f(-.816, -.10);
	glVertex2f(-.774, -.10);
	glVertex2f(-.77, -.13);
	glVertex2f(-.82, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right UP Stripe Pipe QUADS
	glVertex2f(-.8125, -.04);
	glVertex2f(-.778, -.04);
	glVertex2f(-.774, -.07);
	glVertex2f(-.815, -.07);
    glEnd();




/// Rushdi's Work Finsh


///Riyad's work start

     //building-1
    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.14,0.17);//b
    glVertex2f(0.1855,0.17);//b
    glVertex2f(0.1855,0.23);
    glVertex2f(0.14,0.23);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(0 ,77 ,0);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.2,0.0);//b
    glVertex2f(0.2,0.17);//c
    glVertex2f(0.12,0.17);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.13,0.14);//a
    glVertex2f(0.14,0.14);//b
    glVertex2f(0.14,0.16);//c
    glVertex2f(0.13,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.14);//a
    glVertex2f(0.165,0.14);//b
    glVertex2f(0.165,0.16);//c
    glVertex2f(0.155,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.14);//a
    glVertex2f(0.19,0.14);//b
    glVertex2f(0.19,0.16);//c
    glVertex2f(0.18,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.1);//a
    glVertex2f(0.165,0.1);//b
    glVertex2f(0.165,0.13);//c
    glVertex2f(0.155,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.1);//a
    glVertex2f(0.19,0.1);//b
    glVertex2f(0.19,0.13);//c
    glVertex2f(0.18,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.05);//a
    glVertex2f(0.19,0.05);//b
    glVertex2f(0.19,0.08);//c
    glVertex2f(0.18,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.05);//a
    glVertex2f(0.165,0.05);//b
    glVertex2f(0.165,0.08);//c
    glVertex2f(0.155,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.01);//a
    glVertex2f(0.19,0.01);//b
    glVertex2f(0.19,0.04);//c
    glVertex2f(0.18,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,0.0);//a
    glVertex2f(0.17,0.0);//b
    glVertex2f(0.17,0.03);//c
    glVertex2f(0.15,0.03);//d
    glEnd();
    glLoadIdentity();



    //building2

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.12);//c
    glVertex2f(0.0,0.12);//d
    glEnd();
    glLoadIdentity();

    //door
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.05,0.0);//a
    glVertex2f(0.1,0.0);//b
    glVertex2f(0.1,0.04);//c
    glVertex2f(0.05,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.0);//a
    glVertex2f(0.03,0.0);//b
    glVertex2f(0.03,0.04);//c
    glVertex2f(0.01,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.14,0.0);//b
    glVertex2f(0.14,0.04);//c
    glVertex2f(0.12,0.04);//d
    glEnd();
    glLoadIdentity();

    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.075,0.0);//a
    glVertex2f(0.075,0.04);
    glEnd();
    glLoadIdentity();



    //door top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door-top
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.04,0.04);//a
    glVertex2f(0.11,0.04);//b
    glVertex2f(0.11,0.055);//c
    glVertex2f(0.04,0.055);//d
    glEnd();
    glLoadIdentity();

    //window
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.11,0.075);//a
    glVertex2f(0.14,0.075);//b
    glVertex2f(0.14,0.095);//c
    glVertex2f(0.11,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.06,0.075);//a
    glVertex2f(0.09,0.075);//b
    glVertex2f(0.09,0.095);//c
    glVertex2f(0.06,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.075);//a
    glVertex2f(0.04,0.075);//b
    glVertex2f(0.04,0.095);//c
    glVertex2f(0.01,0.095);//d
    glEnd();
    glLoadIdentity();

    //pillar
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.01,0.0);//b
    glVertex2f(0.01,0.02);//c
    glVertex2f(0.0,0.02);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m1-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.03,0.0);//a
    glVertex2f(0.05,0.0);//b
    glVertex2f(0.05,0.03);//c
    glVertex2f(0.03,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m2-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.10,0.0);//a
    glVertex2f(0.12,0.0);//b
    glVertex2f(0.12,0.03);//c
    glVertex2f(0.10,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.14,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.02);//c
    glVertex2f(0.14,0.02);//d
    glEnd();
    glLoadIdentity();

    //top boarder
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(-0.01,0.12);//a
    glVertex2f(0.16,0.12);//b
    glVertex2f(0.16,0.13);//c
    glVertex2f(-0.01,0.13);//d
    glEnd();
    glLoadIdentity();

    //house top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.01,0.13);//a
    glVertex2f(0.14,0.13);//b
    glVertex2f(0.14,0.14);//c
    glVertex2f(0.01,0.14);//d
    glEnd();
    glLoadIdentity();

    //tower
    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//1
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.05,0.14);//a
    glVertex2f(0.07,0.3);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//2
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.07,0.3);//b
    glVertex2f(0.09,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//3
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.09,0.14);//b
    glVertex2f(0.053,0.169);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//b
    glVertex2f(0.05,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//c
    glVertex2f(0.0577,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.053,0.169);//c
    glVertex2f(0.081,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.081,0.21);//b
    glVertex2f(0.062,0.24);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0577,0.21);//b
    glVertex2f(0.0791,0.24);//b
    glEnd();
    glLoadIdentity();

glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.0891,0.24);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0891,0.24);//b
    glVertex2f(0.1,0.21);//b
    glVertex2f(0.1,0.27);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.04,0.21);//b
    glVertex2f(0.04,0.27);//b
    glEnd();
    glLoadIdentity();

//clock
    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_QUADS);
    glColor3f(.0f, .1f, 1.0f);//Forest Green
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();
    glLoadIdentity();


    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

   glLoadIdentity();

   glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(a,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(b,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(c,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(2.0f, 0.5f, 1.0f); // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    a-=0.005f;
    b-=0.005f;
    c-=0.002f;

///platform
    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(0.01,0.02);
    glVertex2f(0.20,0.02);
    glVertex2f(0.17,0.05);
    glVertex2f(0.02,0.05);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69 ,19);
    glVertex2f(0.05,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.12);
    glVertex2f(0.05,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.14,0.03);
    glVertex2f(0.15,0.03);
    glVertex2f(0.15,0.12);
    glVertex2f(0.14,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.02,0.12);
    glVertex2f(0.18,0.12);
    glVertex2f(0.18,0.15);
    glVertex2f(0.02,0.15);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,180, 140);
    glVertex2f(0.06,0.05);
    glVertex2f(0.14,0.05);
    glVertex2f(0.14,0.12);
    glVertex2f(0.06,0.12);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.04);
    glVertex2f(0.08,0.04);
    glVertex2f(0.08,0.06);
    glVertex2f(0.07,0.06);//a
    glEnd();
    glLoadIdentity();

     glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.12,0.04);
    glVertex2f(0.13,0.04);
    glVertex2f(0.13,0.06);
    glVertex2f(0.12,0.06);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.06);
    glVertex2f(0.13,0.06);
    glVertex2f(0.13,0.07);
    glVertex2f(0.07,0.07);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,105 ,30);
    glVertex2f(0.01,0.01);
    glVertex2f(0.20,0.01);
    glVertex2f(0.20,0.02);
    glVertex2f(0.01,0.02);//a
    glEnd();
    glLoadIdentity();

///Riyad'work end



	 ///Hospital start

	glBegin(GL_QUADS);                  ///ground floor
	glColor3ub(0, 102, 255);
	glVertex2f( -0.01f, -0.25f);
	glVertex2f( -0.01f, -0.5f);
	glVertex2f( 0.31f, -0.5f);
	glVertex2f( 0.31f, -0.25f);

	glEnd();

	glBegin(GL_QUADS);                  ///Ground Floor Roof
	glColor3ub(255, 255, 255);
	glVertex2f( -0.03f, -0.2f);
	glVertex2f( -0.03f, -0.25f);
	glVertex2f( 0.33f, -0.25f);
	glVertex2f( 0.33f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Body
	glColor3ub(0, 102, 255);
	glVertex2f( 0.00f, 0.15f);
	glVertex2f( 0.00f, -0.2f);
	glVertex2f( 0.3f, -0.2f);
	glVertex2f( 0.3f, 0.15f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Top Floor
	glColor3ub(0, 71, 179);
	glVertex2f( 0.05f, 0.2f);
	glVertex2f( 0.05f, 0.15f);
	glVertex2f( 0.25f, 0.15f);
	glVertex2f( 0.25f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);              ///Hospital Top Floor Roof
	glColor3ub(0, 102, 255);
	glVertex2f( 0.03f, 0.22f);
	glVertex2f( 0.03f, 0.2f);
	glVertex2f( 0.27f, 0.2f);
	glVertex2f( 0.27f, 0.22f);

	glEnd();

	glBegin(GL_LINES);                  ///Solar panel stand
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f,0.22f);

    glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.3f);
	glVertex2f( 0.2f,0.22f);

    glEnd();

    glBegin(GL_QUADS);                  ///3rd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, 0.05f);
	glVertex2f( 0.00f, 0.00f);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f, 0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.05f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.0f);
	glVertex2f( 0.3f,0.0f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, 0.00f);
	glVertex2f( 0.0001f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, 0.00f);
	glVertex2f( 0.05f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.00f);
	glVertex2f( 0.1f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, 0.00f);
	glVertex2f( 0.15f,0.05f);

    glEnd();

glBegin(GL_QUADS);
	glColor3ub(73, 154, 129);        ///Smart Government Body Lower QUADS
	glVertex2f(-.6f, .2f);
	glVertex2f(-.5f, .2f);
	glVertex2f(-.5, -.5f);
	glVertex2f(-.6f, -.5f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 1st Windows QUADS
	glVertex2f(-.59f, .18f);
	glVertex2f(-.57f, .18f);
	glVertex2f(-.57, .14f);
	glVertex2f(-.59f, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 2nd Windows QUADS
	glVertex2f(-.56f, .18f);
	glVertex2f(-.54f, .18f);
	glVertex2f(-.54, .14f);
	glVertex2f(-.56, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 3rd Windows QUADS
	glVertex2f(-.53f, .18f);
	glVertex2f(-.51f, .18f);
	glVertex2f(-.51, .14f);
	glVertex2f(-.53, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 4th Windows QUADS
	glVertex2f(-.59f, .12f);
	glVertex2f(-.57f, .12f);
	glVertex2f(-.57, .08f);
	glVertex2f(-.59f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 5th Windows QUADS
	glVertex2f(-.56f, .12f);
	glVertex2f(-.54f, .12f);
	glVertex2f(-.54, .08f);
	glVertex2f(-.56f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 6th Windows QUADS
	glVertex2f(-.53f, .12f);
	glVertex2f(-.51f, .12f);
	glVertex2f(-.51, .08f);
	glVertex2f(-.53f, .08f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 7th Windows QUADS
	glVertex2f(-.59f, .06f);
	glVertex2f(-.57f, .06f);
	glVertex2f(-.57, .02f);
	glVertex2f(-.59f, .02f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 8th Windows QUADS
	glVertex2f(-.56f, .06f);
	glVertex2f(-.54f, .06f);
	glVertex2f(-.54, .02f);
	glVertex2f(-.56f, .02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 9th Windows QUADS
	glVertex2f(-.53f, .06f);
	glVertex2f(-.51f, .06f);
	glVertex2f(-.51, .02f);
	glVertex2f(-.53, .02f);
    glEnd();






    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body Lower 1st  Windows QUADS
	glVertex2f(-.59f, -.18f);
	glVertex2f(-.57f, -.18f);
	glVertex2f(-.57, -.14f);
	glVertex2f(-.59f, -.14f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 2nd Windows QUADS
	glVertex2f(-.56f, -.18f);
	glVertex2f(-.54f, -.18f);
	glVertex2f(-.54, -.14f);
	glVertex2f(-.56, -.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 3rd Windows QUADS
	glVertex2f(-.53f, -.18f);
	glVertex2f(-.51f, -.18f);
	glVertex2f(-.51, -.14f);
	glVertex2f(-.53,-.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 4th Windows QUADS
	glVertex2f(-.59f, -.12f);
	glVertex2f(-.57f, -.12f);
	glVertex2f(-.57, -.08f);
	glVertex2f(-.59f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government lower 5th Windows QUADS
	glVertex2f(-.56f, -.12f);
	glVertex2f(-.54f, -.12f);
	glVertex2f(-.54, -.08f);
	glVertex2f(-.56f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 6th Windows QUADS
	glVertex2f(-.53f, -.12f);
	glVertex2f(-.51f, -.12f);
	glVertex2f(-.51, -.08f);
	glVertex2f(-.53f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 7th Windows QUADS
	glVertex2f(-.59f, -.06f);
	glVertex2f(-.57f, -.06f);
	glVertex2f(-.57, -.02f);
	glVertex2f(-.59f, -.02f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 8th Windows QUADS
	glVertex2f(-.56f, -.06f);
	glVertex2f(-.54f, -.06f);
	glVertex2f(-.54, -.02f);
	glVertex2f(-.56f, -.02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Lower 9th Windows QUADS
	glVertex2f(-.53f, -.06f);
	glVertex2f(-.51f, -.06f);
	glVertex2f(-.51, -.02f);
	glVertex2f(-.53, -.02f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123, 60, 92);        ///Smart Government Body Upper QUADS
	glVertex2f(-.59f, .3f);
	glVertex2f(-.51f, .3f);
	glVertex2f(-.51, .2f);
	glVertex2f(-.59f, .2f);
    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3ub(123, 60, 92);        ///Smart Government Antina
    glVertex2f( -0.546f, 0.35f);
    glVertex2f( -0.550f, 0.45f);
    glVertex2f( -0.554f, 0.35f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Windows QUADS 1
	glVertex2f(-.585, .28f);
	glVertex2f(-.57, .28f);
	glVertex2f(-.57, .23f);
	glVertex2f(-.585f, .23f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 2
	glVertex2f(-.56f, .28f);
	glVertex2f(-.54f, .28f);
	glVertex2f(-.54, .23f);
	glVertex2f(-.56f, .23f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 3
	glVertex2f(-.53f, .28f);
	glVertex2f(-.515f, .28f);
	glVertex2f(-.515, .23f);
	glVertex2f(-.53f, .23f);
    glEnd();





                                ///Smart Government Body Upper QUADS
    glBegin(GL_QUADS);
    glColor3ub(232, 76, 51);
    glVertex2f( -0.54f, 0.35f);
    glVertex2f( -0.56f, 0.35f);
    glVertex2f( -0.59f, 0.3f);
    glVertex2f( -0.51f, 0.3f);
    glEnd();







    glBegin(GL_QUADS);
	glColor3ub(52, 119, 128);        ///LEFT house QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.5);
	glVertex2f(-1, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(32, 66, 73);        ///LEFT house upper QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.2);
	glVertex2f(-1, -.2);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);        ///LEFT house WINDOWS QUADS
	glVertex2f(-.98, -.25);
	glVertex2f(-.93, -.25);
	glVertex2f(-.93, -.45);
	glVertex2f(-.98, -.45);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 1st Left QUADS
	glVertex2f(-.9, -.15);
	glVertex2f(-.75, -.15);
	glVertex2f(-.75, -.5f);
	glVertex2f(-.9f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 1st Windows QUADS
	glVertex2f(-.88, -.2);
	glVertex2f(-.85, -.2);
	glVertex2f(-.85, -.3);
	glVertex2f(-.88, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);       ///Manufacture Body 2rd Windows QUADS
	glVertex2f(-.835, -.2);
	glVertex2f(-.805, -.2);
	glVertex2f(-.805, -.3);
	glVertex2f(-.835, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 3rd Windows QUADS
	glVertex2f(-.79, -.2);
	glVertex2f(-.76, -.2);
	glVertex2f(-.76, -.3);
	glVertex2f(-.79, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.75, -.15);
	glVertex2f(-.67, -.25f);
	glVertex2f(-.67f, -.5f);
	glVertex2f(-.75f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);        ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.7, -.15);
	glVertex2f(-.62, -.25f);
	glVertex2f(-.62f, -.5f);
	glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 3rd Left QUADS
	glVertex2f(-.65, -.15);
	glVertex2f(-.57, -.25f);
	glVertex2f(-.57, -.5);
	glVertex2f(-.65, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Left Pipe QUADS
	glVertex2f(-.87, .0);
	glVertex2f(-.84, .0);
	glVertex2f(-.83, -.15);
	glVertex2f(-.88, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left Down Stripe Pipe QUADS
	glVertex2f(-.8765, -.10);
	glVertex2f(-.8345, -.10);
	glVertex2f(-.83, -.13);
	glVertex2f(-.88, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left UP Stripe Pipe QUADS
	glVertex2f(-.8725, -.04);
	glVertex2f(-.838, -.04);
	glVertex2f(-.834, -.07);
	glVertex2f(-.875, -.07);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Right Pipe QUADS
	glVertex2f(-.81, .0);
	glVertex2f(-.78, .0);
	glVertex2f(-.77, -.15);
	glVertex2f(-.82, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right Down Stripe Pipe QUADS
	glVertex2f(-.816, -.10);
	glVertex2f(-.774, -.10);
	glVertex2f(-.77, -.13);
	glVertex2f(-.82, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right UP Stripe Pipe QUADS
	glVertex2f(-.8125, -.04);
	glVertex2f(-.778, -.04);
	glVertex2f(-.774, -.07);
	glVertex2f(-.815, -.07);
    glEnd();




/// Rushdi's Work Finsh


///Riyad's work start

     //building-1
    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.14,0.17);//b
    glVertex2f(0.1855,0.17);//b
    glVertex2f(0.1855,0.23);
    glVertex2f(0.14,0.23);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(0 ,77 ,0);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.2,0.0);//b
    glVertex2f(0.2,0.17);//c
    glVertex2f(0.12,0.17);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.13,0.14);//a
    glVertex2f(0.14,0.14);//b
    glVertex2f(0.14,0.16);//c
    glVertex2f(0.13,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.14);//a
    glVertex2f(0.165,0.14);//b
    glVertex2f(0.165,0.16);//c
    glVertex2f(0.155,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.14);//a
    glVertex2f(0.19,0.14);//b
    glVertex2f(0.19,0.16);//c
    glVertex2f(0.18,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.1);//a
    glVertex2f(0.165,0.1);//b
    glVertex2f(0.165,0.13);//c
    glVertex2f(0.155,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.1);//a
    glVertex2f(0.19,0.1);//b
    glVertex2f(0.19,0.13);//c
    glVertex2f(0.18,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.05);//a
    glVertex2f(0.19,0.05);//b
    glVertex2f(0.19,0.08);//c
    glVertex2f(0.18,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.05);//a
    glVertex2f(0.165,0.05);//b
    glVertex2f(0.165,0.08);//c
    glVertex2f(0.155,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.01);//a
    glVertex2f(0.19,0.01);//b
    glVertex2f(0.19,0.04);//c
    glVertex2f(0.18,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,0.0);//a
    glVertex2f(0.17,0.0);//b
    glVertex2f(0.17,0.03);//c
    glVertex2f(0.15,0.03);//d
    glEnd();
    glLoadIdentity();



    //building2

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.12);//c
    glVertex2f(0.0,0.12);//d
    glEnd();
    glLoadIdentity();

    //door
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.05,0.0);//a
    glVertex2f(0.1,0.0);//b
    glVertex2f(0.1,0.04);//c
    glVertex2f(0.05,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.0);//a
    glVertex2f(0.03,0.0);//b
    glVertex2f(0.03,0.04);//c
    glVertex2f(0.01,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.14,0.0);//b
    glVertex2f(0.14,0.04);//c
    glVertex2f(0.12,0.04);//d
    glEnd();
    glLoadIdentity();

    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.075,0.0);//a
    glVertex2f(0.075,0.04);
    glEnd();
    glLoadIdentity();



    //door top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door-top
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.04,0.04);//a
    glVertex2f(0.11,0.04);//b
    glVertex2f(0.11,0.055);//c
    glVertex2f(0.04,0.055);//d
    glEnd();
    glLoadIdentity();

    //window
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.11,0.075);//a
    glVertex2f(0.14,0.075);//b
    glVertex2f(0.14,0.095);//c
    glVertex2f(0.11,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.06,0.075);//a
    glVertex2f(0.09,0.075);//b
    glVertex2f(0.09,0.095);//c
    glVertex2f(0.06,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.075);//a
    glVertex2f(0.04,0.075);//b
    glVertex2f(0.04,0.095);//c
    glVertex2f(0.01,0.095);//d
    glEnd();
    glLoadIdentity();

    //pillar
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.01,0.0);//b
    glVertex2f(0.01,0.02);//c
    glVertex2f(0.0,0.02);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m1-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.03,0.0);//a
    glVertex2f(0.05,0.0);//b
    glVertex2f(0.05,0.03);//c
    glVertex2f(0.03,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m2-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.10,0.0);//a
    glVertex2f(0.12,0.0);//b
    glVertex2f(0.12,0.03);//c
    glVertex2f(0.10,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.14,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.02);//c
    glVertex2f(0.14,0.02);//d
    glEnd();
    glLoadIdentity();

    //top boarder
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(-0.01,0.12);//a
    glVertex2f(0.16,0.12);//b
    glVertex2f(0.16,0.13);//c
    glVertex2f(-0.01,0.13);//d
    glEnd();
    glLoadIdentity();

    //house top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.01,0.13);//a
    glVertex2f(0.14,0.13);//b
    glVertex2f(0.14,0.14);//c
    glVertex2f(0.01,0.14);//d
    glEnd();
    glLoadIdentity();

    //tower
    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//1
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.05,0.14);//a
    glVertex2f(0.07,0.3);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//2
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.07,0.3);//b
    glVertex2f(0.09,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//3
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.09,0.14);//b
    glVertex2f(0.053,0.169);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//b
    glVertex2f(0.05,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//c
    glVertex2f(0.0577,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.053,0.169);//c
    glVertex2f(0.081,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.081,0.21);//b
    glVertex2f(0.062,0.24);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0577,0.21);//b
    glVertex2f(0.0791,0.24);//b
    glEnd();
    glLoadIdentity();

glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.0891,0.24);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0891,0.24);//b
    glVertex2f(0.1,0.21);//b
    glVertex2f(0.1,0.27);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.04,0.21);//b
    glVertex2f(0.04,0.27);//b
    glEnd();
    glLoadIdentity();

//clock
    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_QUADS);
    glColor3f(.0f, .1f, 1.0f);//Forest Green
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();
    glLoadIdentity();


    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

   glLoadIdentity();

   glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(a,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(b,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(c,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(2.0f, 0.5f, 1.0f); // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    a-=0.005f;
    b-=0.005f;
    c-=0.002f;

///platform
    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(0.01,0.02);
    glVertex2f(0.20,0.02);
    glVertex2f(0.17,0.05);
    glVertex2f(0.02,0.05);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69 ,19);
    glVertex2f(0.05,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.12);
    glVertex2f(0.05,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.14,0.03);
    glVertex2f(0.15,0.03);
    glVertex2f(0.15,0.12);
    glVertex2f(0.14,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.02,0.12);
    glVertex2f(0.18,0.12);
    glVertex2f(0.18,0.15);
    glVertex2f(0.02,0.15);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,180, 140);
    glVertex2f(0.06,0.05);
    glVertex2f(0.14,0.05);
    glVertex2f(0.14,0.12);
    glVertex2f(0.06,0.12);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.04);
    glVertex2f(0.08,0.04);
    glVertex2f(0.08,0.06);
    glVertex2f(0.07,0.06);//a
    glEnd();
    glLoadIdentity();

     glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.12,0.04);
    glVertex2f(0.13,0.04);
    glVertex2f(0.13,0.06);
    glVertex2f(0.12,0.06);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.06);
    glVertex2f(0.13,0.06);
    glVertex2f(0.13,0.07);
    glVertex2f(0.07,0.07);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,105 ,30);
    glVertex2f(0.01,0.01);
    glVertex2f(0.20,0.01);
    glVertex2f(0.20,0.02);
    glVertex2f(0.01,0.02);//a
    glEnd();
    glLoadIdentity();

///Riyad'work end



	 ///Hospital start

	glBegin(GL_QUADS);                  ///ground floor
	glColor3ub(0, 102, 255);
	glVertex2f( -0.01f, -0.25f);
	glVertex2f( -0.01f, -0.5f);
	glVertex2f( 0.31f, -0.5f);
	glVertex2f( 0.31f, -0.25f);

	glEnd();

	glBegin(GL_QUADS);                  ///Ground Floor Roof
	glColor3ub(255, 255, 255);
	glVertex2f( -0.03f, -0.2f);
	glVertex2f( -0.03f, -0.25f);
	glVertex2f( 0.33f, -0.25f);
	glVertex2f( 0.33f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Body
	glColor3ub(0, 102, 255);
	glVertex2f( 0.00f, 0.15f);
	glVertex2f( 0.00f, -0.2f);
	glVertex2f( 0.3f, -0.2f);
	glVertex2f( 0.3f, 0.15f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Top Floor
	glColor3ub(0, 71, 179);
	glVertex2f( 0.05f, 0.2f);
	glVertex2f( 0.05f, 0.15f);
	glVertex2f( 0.25f, 0.15f);
	glVertex2f( 0.25f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);              ///Hospital Top Floor Roof
	glColor3ub(0, 102, 255);
	glVertex2f( 0.03f, 0.22f);
	glVertex2f( 0.03f, 0.2f);
	glVertex2f( 0.27f, 0.2f);
	glVertex2f( 0.27f, 0.22f);

	glEnd();

	glBegin(GL_LINES);                  ///Solar panel stand
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f,0.22f);

    glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.3f);
	glVertex2f( 0.2f,0.22f);

    glEnd();

    glBegin(GL_QUADS);                  ///3rd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, 0.05f);
	glVertex2f( 0.00f, 0.00f);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f, 0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.05f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.0f);
	glVertex2f( 0.3f,0.0f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, 0.00f);
	glVertex2f( 0.0001f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, 0.00f);
	glVertex2f( 0.05f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.00f);
	glVertex2f( 0.1f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, 0.00f);
	glVertex2f( 0.15f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.00f);
	glVertex2f( 0.2f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, 0.00f);
	glVertex2f( 0.25f,0.05f);

    glEnd();

	glBegin(GL_QUADS);                  ///2nd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, -0.05f);
	glVertex2f( 0.00f, -0.1f);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.1f);
	glVertex2f( 0.3f,-0.1f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.05f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, -0.1f);
	glVertex2f( 0.0001f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, -0.1f);
	glVertex2f( 0.05f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, -0.1f);
	glVertex2f( 0.1f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, -0.1f);
	glVertex2f( 0.15f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, -0.1f);
	glVertex2f( 0.2f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, -0.1f);
	glVertex2f( 0.25f,-0.05f);

    glEnd();


    glBegin(GL_QUADS);                  ///1st Steep
	glColor3ub(204, 224, 255);
	glVertex2f( 0.05f, -0.47f);
	glVertex2f( 0.05f, -0.5f);
	glVertex2f( 0.25f, -0.5f);
	glVertex2f( 0.25f, -0.47f);

	glEnd();


	 glBegin(GL_QUADS);                 ///2nd steep
	glColor3ub(255, 255, 255);
	glVertex2f( 0.06f, -0.44f);
	glVertex2f( 0.06f, -0.47f);
	glVertex2f( 0.24f, -0.47f);
	glVertex2f( 0.24f, -0.44f);

	glEnd();


	 glBegin(GL_QUADS);                 ///Hospital Door
	glColor3ub(128, 179, 255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f, -0.44f);
	glVertex2f( 0.22f, -0.44f);
	glVertex2f( 0.22f, -0.25f);

	glEnd();

	glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.22f, -0.25f);
	glVertex2f( 0.22f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.12f, -0.25f);
	glVertex2f( 0.12f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.18f, -0.25f);
	glVertex2f( 0.18f,-0.45f);

    glEnd();

    glBegin(GL_QUADS);                 ///Ground Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.01f, -0.27f);
	glVertex2f( 0.01f, -0.32f);
	glVertex2f( 0.06f, -0.32f);
	glVertex2f( 0.06f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Ground Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.24f, -0.27f);
	glVertex2f( 0.24f, -0.32f);
	glVertex2f( 0.29f, -0.32f);
	glVertex2f( 0.29f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.21f, 0.12f);
	glVertex2f( 0.21f, 0.07f);
	glVertex2f( 0.26f, 0.07f);
	glVertex2f( 0.26f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.04f, 0.12f);
	glVertex2f( 0.04f, 0.07f);
	glVertex2f( 0.09f, 0.07f);
	glVertex2f( 0.09f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///1st Floor Middle Window
	glColor3ub(255,255,255);
	glVertex2f( 0.09f, -0.11f);
	glVertex2f( 0.09f, -0.19f);
	glVertex2f( 0.21f, -0.19f);
	glVertex2f( 0.21f, -0.11f);

	glEnd();

	glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.12f);
	glVertex2f( 0.12f, -0.18f);

    glEnd();

    glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.18f, -0.12f);
	glVertex2f( 0.18f, -0.18f);

    glEnd();

    glLineWidth(2.0);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.15f);
	glVertex2f( 0.18f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);                 ///Solar Panel
	glColor3ub(0,0,0);
	glVertex2f( 0.07f, 0.3f);
	glVertex2f( 0.07f, 0.24f);
	glVertex2f( 0.22f, 0.24f);
	glVertex2f( 0.22f, 0.3f);

	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f, 0.24f);

    glEnd();

     glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.13f, 0.3f);
	glVertex2f( 0.13f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.16f, 0.3f);
	glVertex2f( 0.16f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.19f, 0.3f);
	glVertex2f( 0.19f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.28f);
	glVertex2f( 0.22f, 0.28f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.26f);
	glVertex2f( 0.22f, 0.26f);

    glEnd();
    ///Hospital End
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.00f);
	glVertex2f( 0.2f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, 0.00f);
	glVertex2f( 0.25f,0.05f);

    glEnd();

	glBegin(GL_QUADS);                  ///2nd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, -0.05f);
	glVertex2f( 0.00f, -0.1f);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.1f);
	glVertex2f( 0.3f,-0.1f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.05f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, -0.1f);
	glVertex2f( 0.0001f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, -0.1f);
	glVertex2f( 0.05f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, -0.1f);
	glVertex2f( 0.1f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, -0.1f);
	glVertex2f( 0.15f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, -0.1f);
	glVertex2f( 0.2f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, -0.1f);
	glVertex2f( 0.25f,-0.05f);

    glEnd();


    glBegin(GL_QUADS);                  ///1st Steep
	glColor3ub(204, 224, 255);
	glVertex2f( 0.05f, -0.47f);
	glVertex2f( 0.05f, -0.5f);
	glVertex2f( 0.25f, -0.5f);
	glVertex2f( 0.25f, -0.47f);

	glEnd();


	 glBegin(GL_QUADS);                 ///2nd steep
	glColor3ub(255, 255, 255);
	glVertex2f( 0.06f, -0.44f);
	glVertex2f( 0.06f, -0.47f);
	glVertex2f( 0.24f, -0.47f);
	glVertex2f( 0.24f, -0.44f);

	glEnd();


	 glBegin(GL_QUADS);                 ///Hospital Door
	glColor3ub(128, 179, 255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f, -0.44f);
	glVertex2f( 0.22f, -0.44f);
	glVertex2f( 0.22f, -0.25f);

	glEnd();

	glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.22f, -0.25f);
	glVertex2f( 0.22f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.12f, -0.25f);
	glVertex2f( 0.12f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.18f, -0.25f);
	glVertex2f( 0.18f,-0.45f);

    glEnd();

    glBegin(GL_QUADS);                 ///Ground Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.01f, -0.27f);
	glVertex2f( 0.01f, -0.32f);
	glVertex2f( 0.06f, -0.32f);
	glVertex2f( 0.06f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Ground Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.24f, -0.27f);
	glVertex2f( 0.24f, -0.32f);
	glVertex2f( 0.29f, -0.32f);
	glVertex2f( 0.29f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.21f, 0.12f);
	glVertex2f( 0.21f, 0.07f);
	glVertex2f( 0.26f, 0.07f);
	glVertex2f( 0.26f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.04f, 0.12f);
	glVertex2f( 0.04f, 0.07f);
	glVertex2f( 0.09f, 0.07f);
	glVertex2f( 0.09f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///1st Floor Middle Window
	glColor3ub(255,255,255);
	glVertex2f( 0.09f, -0.11f);
	glVertex2f( 0.09f, -0.19f);
	glVertex2f( 0.21f, -0.19f);
	glVertex2f( 0.21f, -0.11f);

	glEnd();

	glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.12f);
	glVertex2f( 0.12f, -0.18f);

    glEnd();

    glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.18f, -0.12f);
	glVertex2f( 0.18f, -0.18f);

    glEnd();

    glLineWidth(2.0);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.15f);
	glVertex2f( 0.18f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);                 ///Solar Panel
	glColor3ub(0,0,0);
	glVertex2f( 0.07f, 0.3f);
	glVertex2f( 0.07f, 0.24f);
	glVertex2f( 0.22f, 0.24f);
	glVertex2f( 0.22f, 0.3f);

	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f, 0.24f);

    glEnd();

     glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.13f, 0.3f);
	glVertex2f( 0.13f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.16f, 0.3f);
	glVertex2f( 0.16f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.19f, 0.3f);
	glVertex2f( 0.19f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.28f);
	glVertex2f( 0.22f, 0.28f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.26f);
	glVertex2f( 0.22f, 0.26f);

    glEnd();
    ///Hospital End

    glLoadIdentity();

//building end



  ///Windmil Start
     //pillar
    glTranslatef(.9,0.5,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.3f);
    glVertex2f( 0.01f, -0.3f);



    glEnd();
    glLoadIdentity();



    glTranslatef(.9,0.5,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i15,0.0,0.0,1.0);



///wind mill
    glBegin(GL_TRIANGLES);  ///up fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.01f, 0.02f);
    glVertex2f( 0.0f, 0.1f);



    glEnd();



    glBegin(GL_TRIANGLES);  ///Down fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.02f);
    glVertex2f( -0.0f, -0.1f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Right Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.02f, -0.01f);
    glVertex2f( 0.1f, 0.0f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Left Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, 0.01f);
    glVertex2f( -0.1f, 0.0f);
    glEnd();



    glPopMatrix();



    i15+=0.1f;



    glLoadIdentity();


    ///Flag start
    int i16;
    	 x=0.42f;  y=-0.15f;  radius =.02f;

	 triangleAmount = 20; //# of triangles used to draw circle
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_QUADS);                  ///Flag Green
	glColor3f(.0f, 1.0f, 0.0f);
	glVertex2f(0.37, -.1);
    glVertex2f(0.37, -0.2);
    glVertex2f(0.49, -0.2);
    glVertex2f(0.49, -.1);
    glEnd();


     glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(x, y); // center of circle
		for(i16 = 0; i16 <= triangleAmount;i16++) {
			glVertex2f(
		        x + (radius * cos(i16 *  twicePi / triangleAmount)),
			    y + (radius * sin(i16 * twicePi / triangleAmount))
			);
		}

	glEnd();

	glBegin(GL_QUADS);                  ///Stand
	glColor3ub(204, 102, 0);
	glVertex2f( 0.36f, -0.1f);
	glVertex2f( 0.36f, -0.4f);
	glVertex2f( 0.37f, -0.4f);
	glVertex2f( 0.37f, -0.1f);
    glEnd();

    ///Flag End






    //road
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51);

    glVertex2f(-1,-.5);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-.5);

    glEnd();
//road's middle lines
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();

    //copying road's middle line
    //1
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //2
    glTranslatef(.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //3
    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //4
    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //5
    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //left side
    //6
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //7
    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //8
    glTranslatef(-.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //9
    glTranslatef(-.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //10
    glTranslatef(-1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //road upper side border
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(-1,-.48);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,-.48);
    glEnd();

    //Starting drawing light

    //road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light

//copy light 2
    glTranslatef(.45,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

    //copy light 3
     glTranslatef(.9,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

    //copy light 4
     glTranslatef(-.45,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

    //copy road light 5
     glTranslatef(-.9,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

//new car
glPushMatrix();
glTranslatef(position_car2,0.0f, 0.0f);

glTranslatef(0.9f, 0.05f, 0.0f);
glScalef(2.0,1.8,0);

 glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f,-0.33f);
    glVertex2f(-0.8f,-0.30f);
    glVertex2f(-0.9f,-0.30f);
    glVertex2f(-0.9f,-0.33f);
    glEnd();

   glColor3ub(13, 13, 13);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f,-0.30f);
    glVertex2f(-0.83f,-0.28f);
    glVertex2f(-0.87f,-0.28f);
    glVertex2f(-0.88f,-0.30f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.824f,-0.298f);
    glVertex2f(-0.832f,-0.282f);
    glVertex2f(-0.848f,-0.282f);
    glVertex2f(-0.848f,-0.298f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.851f,-0.298f);
    glVertex2f(-0.851f,-0.282f);
    glVertex2f(-0.868f,-0.282f);
    glVertex2f(-0.876f,-0.298f);
    glEnd();

     i;
    j;
    x = -0.82f; y = -0.33f; radius = 0.01f; GLfloat a = -0.88f; GLfloat b = -0.33f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;

    glColor3ub(13, 13, 13);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
        }
    glEnd();

    glColor3ub(13, 13, 13);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount;j++)
        {
            glVertex2f(a + (radius * cos(j *  twicePi / triangleAmount)),b + (radius * sin(j * twicePi / triangleAmount)));
        }
    glEnd();

glPopMatrix();

glLoadIdentity();

//end new car
//blue car
glPushMatrix();
glTranslatef(position_jip2,0.0f, 0.0f);

glScalef(-.4,.4,0);
glTranslatef(-0.4f, -1.4f, 0.0f);

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
     x=.1f;  y=-.05f;   radius =.06f;
     triangleAmount = 20;
     twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
 j;
	 GLfloat x1=-.23f;  GLfloat y1=-.05f;  GLfloat radius1 =.06f;
	 GLfloat triangleAmount1 = 20;
	 int twicePi1 = 2.0f * PI;
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
	  x=.1f;   y=-.05f;   radius =.03f;
	  triangleAmount2 = 20;
	  twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi2 / triangleAmount2)),
			    y + (radius * sin(k * twicePi2 / triangleAmount2))
			);
		}
glEnd();
int l;
	 x=-.23f;  y=-.05f;  radius =.03f;
	 GLfloat triangleAmount3 = 20;
	 int twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(l = 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x + (radius * cos(l*  twicePi3 / triangleAmount3)),
			    y + (radius * sin(l* twicePi3 / triangleAmount3))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();

//end blue car

//red car
glPushMatrix();
glTranslatef(position_car3,0.0f, 0.0f);

    glScalef(-.5,.4,0);
glTranslatef(-1.7f, -1.5f, 0.0f);

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
 i;
	 x8=-.06f;  y8=0.0f;  radius8 =.06f;
	 triangleAmount8 = 20;
	 twicePi8 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
glEnd();
 i;
	 x=.18f;  y=0.0f;  radius =.06f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();
 r;
	 x=-.06f;  y=0.0f;  radius =.03f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(r = 0; r <= triangleAmount;r++) {
			glVertex2f(
		            x + (radius * cos(r *  twicePi / triangleAmount)),
			    y + (radius * sin(r * twicePi / triangleAmount))
			);
		}
glEnd();
int s;
	 x1=.18f;  y1=0.0f;  radius1 =0.03f;
	 triangleAmount1 = 20;
	 twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount1;s++) {
			glVertex2f(
		            x1 + (radius1 * cos(s*  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(s* twicePi1 / triangleAmount1))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();
//end red car

//bus
glPushMatrix();
glTranslatef(position_bus2,0.0f, 0.0f);

glScalef(-.2,.3,0);
glTranslatef(.7f, -2.5f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-.6,0.25);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.4);
    glVertex2f(-0.6,0.4);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 255);
    glVertex2f(-.6,0.4);
    glVertex2f(0.6,0.4);
    glVertex2f(0.6,0.7);
    glVertex2f(-.6,0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2f(-.6,0.4);
    glVertex2f(-.5,0.4);
    glVertex2f(-.5,0.7);
    glVertex2f(-.6,0.7);


    glVertex2f(-.4,0.5);
    glVertex2f(-.3,0.5);
    glVertex2f(-.3,0.6);
    glVertex2f(-.4,0.6);

    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glVertex2f(-.2,0.5);
    glVertex2f(-.1,0.5);
    glVertex2f(-.1,0.6);
    glVertex2f(-.2,0.6);
    glEnd();

    glTranslatef(-.25,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glEnd();
     glLoadIdentity();
     glTranslatef(position_bus2,0.0f, 0.0f);

     glScalef(-.2,.3,0);
glTranslatef(.7f, -2.5f, 0.0f);

	x=.3f; y=.25f; radius =.11f;
	glColor3f(0,0,0);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glColor3f(0,0,0);
    j;

    x=-.3f;  y1=.25f;  radius =.11f;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius* sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

     x=.3f;  y=.25f;  radius =.06f;
	glColor3f(1,1,1);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi3 / triangleAmount)),
			    y + (radius* sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	glColor3f(1,1,1);
    i;

     x=-.3f;  y=.25f;  radius =.06f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius4 = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

	glLoadIdentity();

//traffic light
glTranslatef(0.0f, -0.38f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
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
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();
glTranslatef(0.0f, -0.38f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
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
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(0.9f,-0.12f);
glEnd();

glLoadIdentity();
//end traffic light

//bus
glPushMatrix();
glTranslatef(position_bus1,0.0f, 0.0f);

glScalef(.2,.3,0);
glTranslatef(1.0f, -3.0f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(0, 48, 48);
    glVertex2f(-.6,0.25);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.4);
    glVertex2f(-0.6,0.4);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 255);
    glVertex2f(-.6,0.4);
    glVertex2f(0.6,0.4);
    glVertex2f(0.6,0.7);
    glVertex2f(-.6,0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 48, 48);
    glVertex2f(-.6,0.4);
    glVertex2f(-.5,0.4);
    glVertex2f(-.5,0.7);
    glVertex2f(-.6,0.7);


    glVertex2f(-.4,0.5);
    glVertex2f(-.3,0.5);
    glVertex2f(-.3,0.6);
    glVertex2f(-.4,0.6);

    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glVertex2f(-.2,0.5);
    glVertex2f(-.1,0.5);
    glVertex2f(-.1,0.6);
    glVertex2f(-.2,0.6);
    glEnd();

    glTranslatef(-.25,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glEnd();
     glLoadIdentity();
     glTranslatef(position_bus1,0.0f, 0.0f);

     glScalef(.2,.3,0);
glTranslatef(1.0f, -3.0f, 0.0f);

	x=.3f; y=.25f; radius =.11f;
	glColor3f(0,0,0);
	i;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glColor3f(0,0,0);
    i;

    x=-.3f;  y1=.25f;  radius =.11f;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

     x=.3f;  y=.25f;  radius =.06f;
	glColor3f(1,1,1);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi3 / triangleAmount)),
			    y + (radius* sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	glColor3f(1,1,1);
    i;

     x=-.3f;  y=.25f;  radius =.06f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius4 = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glLoadIdentity();

	//end bus

glPushMatrix();
glTranslatef(position_jip1,0.0f, 0.0f);

glScalef(.4,.4,0);
glTranslatef(-2.0f, -2.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(117, 102, 2);
glVertex2f(-.23,.3);
glVertex2f(-.38,.06);
glVertex2f(.12,.06);
glVertex2f(.12,.3);

glColor3ub(117, 102, 2);
glVertex2f(-.38,.06);
glVertex2f(-.38,-.06);
glVertex2f(.12,-.06);
glVertex2f(.12,.06);

glColor3ub(117, 102, 2);
glVertex2f(.12,-.06);
glVertex2f(.2,-.06);
glVertex2f(.19,.06);
glVertex2f(.12,.06);

glColor3ub(117, 102, 2);
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
    i;
	 x=.1f;  y=-.05f; radius =.06f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
    i;
	x=-.23f; y=-.05f; radius =.06f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();
    k;
	x=.1f; y=-.05f; radius =.03f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
glEnd();
    i;
	x=-.23f; y=-.05f; radius =.03f;
	triangleAmount3 = 20;
	twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(i = 0; i <= triangleAmount3;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi3 / triangleAmount3)),
			    y + (radius * sin(i* twicePi3 / triangleAmount3))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();

    //red car
glPushMatrix();
glTranslatef(position_car1,0.0f, 0.0f);

    glScalef(.5,.4,0);
glTranslatef(-0.3f, -2.4f, 0.0f);

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
	 x8=-.06f;  y8=0.0f;  radius8 =.06f;
	 triangleAmount8 = 20;
	 twicePi8 = 2.0f * PI;
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
	 x9=.18f;  y9=0.0f;  radius9 =.06f;
	 triangleAmount9 = 20;
	 twicePi9 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9);
		for(q = 0; q <= triangleAmount9;q++) {
			glVertex2f(
		            x9 + (radius9 * cos(q*  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(q* twicePi9 / triangleAmount9))
			);
		}
glEnd();
 r;
	 GLfloat x11=-.06f;  GLfloat y11=0.0f;  GLfloat radius11 =.03f;
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
 s;
	 x1=.18f;  y1=0.0f;  radius1 =0.03f;
	 triangleAmount1 = 20;
	 twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount1;s++) {
			glVertex2f(
		            x1 + (radius1 * cos(s*  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(s* twicePi1 / triangleAmount1))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();
//end red car

glTranslatef(rainX, rainY, 0);
	for (double i = -1.0f; i < 1.0f; i += 0.15f) {
      for (double j = -1.0f; j < 1.0f; j += 0.15f) {
        drawLine(i, j, i - 0.1f, j - 0.1f, 1, 1, 1, 1);
      }
	}
	glLoadIdentity();
	i += 0.1f;

glFlush();

glutTimerFunc(1500,demo_back,0);
glFlush();
}



void demo_rain(int val) {

 glutDisplayFunc(rain);

}

void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Background Color
    //sky
    glBegin(GL_QUADS);
    glColor3ub(77, 110, 115);

    glVertex2f(-1,1);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,1);

    glEnd();

//moon
    glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 128);
int j;
GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.1f;
int triangleAmount = 200;
GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++)
{
    glVertex2f
    (
        x + (radius * cos(j *  twicePi / triangleAmount)), y + (radius * sin(j * twicePi / triangleAmount))
    );
}
glEnd();

//moon end

//cloud
//1st ring
glLoadIdentity();
      glTranslatef(-0.7,0.1,0);

	int j7;

	GLfloat x7=.3f; GLfloat y7= .8f; GLfloat radius7 =.050f;
	int triangleAmount7 = 20; //# of triangles used to draw circle
	glColor3ub(149, 152, 156);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(j7 = 0; j7 <= triangleAmount7;j7++) {
			glVertex2f(
		            x7 + (radius7 * cos(j7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(j7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();
//2nd ring
	int j8;

	GLfloat x8=.35f; GLfloat y8= .85f; GLfloat radius8 =.050f;
	int triangleAmount8 = 20; //# of triangles used to draw circle
	glColor3ub(149, 152, 156);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(j8 = 0; j8 <= triangleAmount8;j8++) {
			glVertex2f(
		            x8 + (radius8 * cos(j8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();
//3rd ring
	int j9;

	GLfloat x9=.40f; GLfloat y9= .8f; GLfloat radius9 =.050f;
	int triangleAmount9 = 20; //# of triangles used to draw circle
	glColor3ub(149, 152, 156);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(j9 = 0; j9 <= triangleAmount9;j9++) {
			glVertex2f(
		            x9 + (radius8 * cos(j9 *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(j9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();
//4th ring
	int j10;

	GLfloat x10=.35f; GLfloat y10= .80f; GLfloat radius10 =.050f;
	int triangleAmount10 = 20; //# of triangles used to draw circle
	glColor3ub(149, 152, 156);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(j10 = 0; j10 <= triangleAmount10;j10++) {
			glVertex2f(
		            x10 + (radius10 * cos(j10 *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(j10 * twicePi10 / triangleAmount10))
			);
		}
	glEnd();

glLoadIdentity();

glTranslatef(0.0f, .05f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
glColor3ub(149, 152, 156);
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
//end cloud
//stars
glPointSize(2.5);
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

//stars end

 ///Air Bus Start
    glPushMatrix();



glTranslatef(position_plane,0,0);




    ///Air Bus Start
    glBegin(GL_POLYGON);                ///Body
    glColor3f(0, 38, 153);
    glVertex2f( -0.66f, 0.7f);
    glVertex2f( -0.66, 0.69f);
    glVertex2f( -0.59f, 0.65f);
    glVertex2f( -0.38f, 0.65f);
    glVertex2f( -0.36f, 0.67f);
    glVertex2f( -0.36f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.4f, 0.7f);



    glEnd();



    glBegin(GL_QUADS);                 ///Engine
    glColor3ub(0,0,0);
    glVertex2f( -0.49f, 0.64f);
    glVertex2f( -0.49f, 0.62f);
    glVertex2f( -0.47f, 0.62f);
    glVertex2f( -0.47f, 0.64f);



    glEnd();



    glBegin(GL_QUADS);                 ///Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.49f, 0.66f);
    glVertex2f( -0.55f, 0.61f);
    glVertex2f( -0.53f, 0.61f);
    glVertex2f( -0.45f, 0.66f);



    glEnd();



    glBegin(GL_QUADS);                 ///Back Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.53f, 0.73f);
    glVertex2f( -0.5f, 0.7f);
    glVertex2f( -0.47f, 0.7f);
    glVertex2f( -0.51f, 0.73f);



    glEnd();



    glBegin(GL_QUADS);                 ///Tail Top Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.63f, 0.74f);
    glVertex2f( -0.62f, 0.7f);
    glVertex2f( -0.59f, 0.7f);
    glVertex2f( -0.62f, 0.74f);



    glEnd();



    glBegin(GL_QUADS);                 ///Tail Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.61f, 0.69f);
    glVertex2f( -0.64f, 0.67f);
    glVertex2f( -0.61f, 0.67f);
    glVertex2f( -0.58f, 0.69f);



    glEnd();



    glBegin(GL_QUADS);                 ///Looking
    glColor3ub(255,255,255);
    glVertex2f( -0.4f, 0.69f);
    glVertex2f( -0.4f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.39f, 0.69f);



    glEnd();



    glPointSize(2);                     ///Windows
   glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   glVertex2f(-0.57f,0.68f);
   glVertex2f(-0.53f,0.68f);
   glVertex2f(-0.49f,0.68f);
   glVertex2f(-0.46f,0.68f);
   glVertex2f(-0.43f,0.68f);




   glEnd();



glPopMatrix();
///Air Bus End


//building end


 	glBegin(GL_QUADS);              ///River
	glColor3ub(0, 153, 255); // Red
	glVertex2f(1.0, -0.5);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(-1.0f, -0.5f);
    glEnd();


    glPushMatrix();

    glTranslatef(position123,0,0);



    glBegin(GL_QUADS);              ///Boat lower part
	glColor3ub(153, 0, 204);
	glVertex2f(0.6, 0.01);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.43f, 0.01f);
    glEnd();


    glBegin(GL_QUADS);              ///Boat lower stripe part
	glColor3ub(255, 255, 255);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.613f, 0.059f);
	glVertex2f(0.395f, 0.059f);
	glVertex2f(0.404f, 0.05f);
    glEnd();
///

    glBegin(GL_QUADS);              ///Boat Upper part
	glColor3ub(153, 0, 204);
	glVertex2f(0.613f, 0.059f);
	glVertex2f(0.62f, 0.09f);
	glVertex2f(0.377f, 0.093f);
	glVertex2f(0.395f, 0.059f);
    glEnd();


    glBegin(GL_QUADS);              ///Boat Upper quid part
	glColor3ub(153, 0, 204);
	glVertex2f(0.45f, 0.091f);
	glVertex2f(0.43f, 0.12);
	glVertex2f(0.3610f, 0.12f);
    glVertex2f(0.378f, 0.091f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat end panel
	glColor3ub(153, 0, 204);
	glVertex2f(0.62f, 0.09f);
	glVertex2f(0.62f, 0.12);
	glVertex2f(0.615f, 0.12f);
    glVertex2f(0.615f, 0.09f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 1(1)
	glColor3ub(0, 0, 204);
	glVertex2f(0.6f, 0.0972f);
	glVertex2f(0.6f, 0.115);
	glVertex2f(0.58f, 0.115f);
    glVertex2f(0.58f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 1(2)
	glColor3ub(0, 0, 204);
	glVertex2f(0.6f, 0.119f);
	glVertex2f(0.6f, 0.135);
	glVertex2f(0.58f, 0.135f);
    glVertex2f(0.58f, 0.119f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 2
	glColor3ub(0, 0, 204);
	glVertex2f(0.535f, 0.0972f);
	glVertex2f(0.535f, 0.135);
	glVertex2f(0.575f, 0.135f);
    glVertex2f(0.575f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 3(1)
    glColor3ub(0, 0, 204);
	glVertex2f(0.5f, 0.0972f);
	glVertex2f(0.5f, 0.115);
	glVertex2f(0.53f, 0.115f);
    glVertex2f(0.53f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 3(2)
	glColor3ub(0, 0, 204);
	glVertex2f(0.5f, 0.119f);
	glVertex2f(0.5, 0.135);
	glVertex2f(0.53f, 0.135f);
    glVertex2f(0.53f, 0.119f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 4
	glColor3ub(0, 0, 204);
	glVertex2f(0.47f, 0.0972f);
	glVertex2f(0.47f, 0.135);
	glVertex2f(0.49f, 0.135f);
    glVertex2f(0.49f, 0.0972f);

   glEnd();

    glPopMatrix();


glLoadIdentity();

//Building Start

glBegin(GL_QUADS);
	glColor3ub(73, 154, 129);        ///Smart Government Body Lower QUADS
	glVertex2f(-.6f, .2f);
	glVertex2f(-.5f, .2f);
	glVertex2f(-.5, -.5f);
	glVertex2f(-.6f, -.5f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 1st Windows QUADS
	glVertex2f(-.59f, .18f);
	glVertex2f(-.57f, .18f);
	glVertex2f(-.57, .14f);
	glVertex2f(-.59f, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 2nd Windows QUADS
	glVertex2f(-.56f, .18f);
	glVertex2f(-.54f, .18f);
	glVertex2f(-.54, .14f);
	glVertex2f(-.56, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 3rd Windows QUADS
	glVertex2f(-.53f, .18f);
	glVertex2f(-.51f, .18f);
	glVertex2f(-.51, .14f);
	glVertex2f(-.53, .14f);
    glEnd();

	glVertex2f(-.54, .08f);
	glVertex2f(-.56f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 6th Windows QUADS
	glVertex2f(-.53f, .12f);
	glVertex2f(-.51f, .12f);
	glVertex2f(-.51, .08f);
	glVertex2f(-.53f, .08f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 7th Windows QUADS
	glVertex2f(-.59f, .06f);
	glVertex2f(-.57f, .06f);
	glVertex2f(-.57, .02f);
	glVertex2f(-.59f, .02f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 8th Windows QUADS
	glVertex2f(-.56f, .06f);
	glVertex2f(-.54f, .06f);
	glVertex2f(-.54, .02f);
	glVertex2f(-.56f, .02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 9th Windows QUADS
	glVertex2f(-.53f, .06f);
	glVertex2f(-.51f, .06f);
	glVertex2f(-.51, .02f);
	glVertex2f(-.53, .02f);
    glEnd();






    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body Lower 1st  Windows QUADS
	glVertex2f(-.59f, -.18f);
	glVertex2f(-.57f, -.18f);
	glVertex2f(-.57, -.14f);
	glVertex2f(-.59f, -.14f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 2nd Windows QUADS
	glVertex2f(-.56f, -.18f);
	glVertex2f(-.54f, -.18f);
	glVertex2f(-.54, -.14f);
	glVertex2f(-.56, -.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 3rd Windows QUADS
	glVertex2f(-.53f, -.18f);
	glVertex2f(-.51f, -.18f);
	glVertex2f(-.51, -.14f);
	glVertex2f(-.53,-.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 4th Windows QUADS
	glVertex2f(-.59f, -.12f);
	glVertex2f(-.57f, -.12f);
	glVertex2f(-.57, -.08f);
	glVertex2f(-.59f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government lower 5th Windows QUADS
	glVertex2f(-.56f, -.12f);
	glVertex2f(-.54f, -.12f);
	glVertex2f(-.54, -.08f);
	glVertex2f(-.56f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 6th Windows QUADS
	glVertex2f(-.53f, -.12f);
	glVertex2f(-.51f, -.12f);
	glVertex2f(-.51, -.08f);
	glVertex2f(-.53f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 7th Windows QUADS
	glVertex2f(-.59f, -.06f);
	glVertex2f(-.57f, -.06f);
	glVertex2f(-.57, -.02f);
	glVertex2f(-.59f, -.02f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 8th Windows QUADS
	glVertex2f(-.56f, -.06f);
	glVertex2f(-.54f, -.06f);
	glVertex2f(-.54, -.02f);
	glVertex2f(-.56f, -.02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Lower 9th Windows QUADS
	glVertex2f(-.53f, -.06f);
	glVertex2f(-.51f, -.06f);
	glVertex2f(-.51, -.02f);
	glVertex2f(-.53, -.02f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123, 60, 92);        ///Smart Government Body Upper QUADS
	glVertex2f(-.59f, .3f);
	glVertex2f(-.51f, .3f);
	glVertex2f(-.51, .2f);
	glVertex2f(-.59f, .2f);
    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3ub(123, 60, 92);        ///Smart Government Antina
    glVertex2f( -0.546f, 0.35f);
    glVertex2f( -0.550f, 0.45f);
    glVertex2f( -0.554f, 0.35f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Windows QUADS 1
	glVertex2f(-.585, .28f);
	glVertex2f(-.57, .28f);
	glVertex2f(-.57, .23f);
	glVertex2f(-.585f, .23f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 2
	glVertex2f(-.56f, .28f);
	glVertex2f(-.54f, .28f);
	glVertex2f(-.54, .23f);
	glVertex2f(-.56f, .23f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 3
	glVertex2f(-.53f, .28f);
	glVertex2f(-.515f, .28f);
	glVertex2f(-.515, .23f);
	glVertex2f(-.53f, .23f);
    glEnd();





                                ///Smart Government Body Upper QUADS
    glBegin(GL_QUADS);
    glColor3ub(232, 76, 51);
    glVertex2f( -0.54f, 0.35f);
    glVertex2f( -0.56f, 0.35f);
    glVertex2f( -0.59f, 0.3f);
    glVertex2f( -0.51f, 0.3f);
    glEnd();







    glBegin(GL_QUADS);
	glColor3ub(52, 119, 128);        ///LEFT house QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.5);
	glVertex2f(-1, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(32, 66, 73);        ///LEFT house upper QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.2);
	glVertex2f(-1, -.2);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);        ///LEFT house WINDOWS QUADS
	glVertex2f(-.98, -.25);
	glVertex2f(-.93, -.25);
	glVertex2f(-.93, -.45);
	glVertex2f(-.98, -.45);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 1st Left QUADS
	glVertex2f(-.9, -.15);
	glVertex2f(-.75, -.15);
	glVertex2f(-.75, -.5f);
	glVertex2f(-.9f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 1st Windows QUADS
	glVertex2f(-.88, -.2);
	glVertex2f(-.85, -.2);
	glVertex2f(-.85, -.3);
	glVertex2f(-.88, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);       ///Manufacture Body 2rd Windows QUADS
	glVertex2f(-.835, -.2);
	glVertex2f(-.805, -.2);
	glVertex2f(-.805, -.3);
	glVertex2f(-.835, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 3rd Windows QUADS
	glVertex2f(-.79, -.2);
	glVertex2f(-.76, -.2);
	glVertex2f(-.76, -.3);
	glVertex2f(-.79, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.75, -.15);
	glVertex2f(-.67, -.25f);
	glVertex2f(-.67f, -.5f);
	glVertex2f(-.75f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);        ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.7, -.15);
	glVertex2f(-.62, -.25f);
	glVertex2f(-.62f, -.5f);
	glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 3rd Left QUADS
	glVertex2f(-.65, -.15);
	glVertex2f(-.57, -.25f);
	glVertex2f(-.57, -.5);
	glVertex2f(-.65, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Left Pipe QUADS
	glVertex2f(-.87, .0);
	glVertex2f(-.84, .0);
	glVertex2f(-.83, -.15);
	glVertex2f(-.88, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left Down Stripe Pipe QUADS
	glVertex2f(-.8765, -.10);
	glVertex2f(-.8345, -.10);
	glVertex2f(-.83, -.13);
	glVertex2f(-.88, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left UP Stripe Pipe QUADS
	glVertex2f(-.8725, -.04);
	glVertex2f(-.838, -.04);
	glVertex2f(-.834, -.07);
	glVertex2f(-.875, -.07);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Right Pipe QUADS
	glVertex2f(-.81, .0);
	glVertex2f(-.78, .0);
	glVertex2f(-.77, -.15);
	glVertex2f(-.82, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right Down Stripe Pipe QUADS
	glVertex2f(-.816, -.10);
	glVertex2f(-.774, -.10);
	glVertex2f(-.77, -.13);
	glVertex2f(-.82, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right UP Stripe Pipe QUADS
	glVertex2f(-.8125, -.04);
	glVertex2f(-.778, -.04);
	glVertex2f(-.774, -.07);
	glVertex2f(-.815, -.07);
    glEnd();




/// Rushdi's Work Finsh


///Riyad's work start

     //building-1
    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.14,0.17);//b
    glVertex2f(0.1855,0.17);//b
    glVertex2f(0.1855,0.23);
    glVertex2f(0.14,0.23);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(0 ,77 ,0);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.2,0.0);//b
    glVertex2f(0.2,0.17);//c
    glVertex2f(0.12,0.17);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.13,0.14);//a
    glVertex2f(0.14,0.14);//b
    glVertex2f(0.14,0.16);//c
    glVertex2f(0.13,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.14);//a
    glVertex2f(0.165,0.14);//b
    glVertex2f(0.165,0.16);//c
    glVertex2f(0.155,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.14);//a
    glVertex2f(0.19,0.14);//b
    glVertex2f(0.19,0.16);//c
    glVertex2f(0.18,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.1);//a
    glVertex2f(0.165,0.1);//b
    glVertex2f(0.165,0.13);//c
    glVertex2f(0.155,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.1);//a
    glVertex2f(0.19,0.1);//b
    glVertex2f(0.19,0.13);//c
    glVertex2f(0.18,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.05);//a
    glVertex2f(0.19,0.05);//b
    glVertex2f(0.19,0.08);//c
    glVertex2f(0.18,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.05);//a
    glVertex2f(0.165,0.05);//b
    glVertex2f(0.165,0.08);//c
    glVertex2f(0.155,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.01);//a
    glVertex2f(0.19,0.01);//b
    glVertex2f(0.19,0.04);//c
    glVertex2f(0.18,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,0.0);//a
    glVertex2f(0.17,0.0);//b
    glVertex2f(0.17,0.03);//c
    glVertex2f(0.15,0.03);//d
    glEnd();
    glLoadIdentity();



    //building2

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.12);//c
    glVertex2f(0.0,0.12);//d
    glEnd();
    glLoadIdentity();

    //door
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.05,0.0);//a
    glVertex2f(0.1,0.0);//b
    glVertex2f(0.1,0.04);//c
    glVertex2f(0.05,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.0);//a
    glVertex2f(0.03,0.0);//b
    glVertex2f(0.03,0.04);//c
    glVertex2f(0.01,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.14,0.0);//b
    glVertex2f(0.14,0.04);//c
    glVertex2f(0.12,0.04);//d
    glEnd();
    glLoadIdentity();

    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.075,0.0);//a
    glVertex2f(0.075,0.04);
    glEnd();
    glLoadIdentity();



    //door top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door-top
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.04,0.04);//a
    glVertex2f(0.11,0.04);//b
    glVertex2f(0.11,0.055);//c
    glVertex2f(0.04,0.055);//d
    glEnd();
    glLoadIdentity();

    //window
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.11,0.075);//a
    glVertex2f(0.14,0.075);//b
    glVertex2f(0.14,0.095);//c
    glVertex2f(0.11,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.06,0.075);//a
    glVertex2f(0.09,0.075);//b
    glVertex2f(0.09,0.095);//c
    glVertex2f(0.06,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.075);//a
    glVertex2f(0.04,0.075);//b
    glVertex2f(0.04,0.095);//c
    glVertex2f(0.01,0.095);//d
    glEnd();
    glLoadIdentity();

    //pillar
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.01,0.0);//b
    glVertex2f(0.01,0.02);//c
    glVertex2f(0.0,0.02);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m1-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.03,0.0);//a
    glVertex2f(0.05,0.0);//b
    glVertex2f(0.05,0.03);//c
    glVertex2f(0.03,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m2-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.10,0.0);//a
    glVertex2f(0.12,0.0);//b
    glVertex2f(0.12,0.03);//c
    glVertex2f(0.10,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.14,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.02);//c
    glVertex2f(0.14,0.02);//d
    glEnd();
    glLoadIdentity();

    //top boarder
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(-0.01,0.12);//a
    glVertex2f(0.16,0.12);//b
    glVertex2f(0.16,0.13);//c
    glVertex2f(-0.01,0.13);//d
    glEnd();
    glLoadIdentity();

    //house top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.01,0.13);//a
    glVertex2f(0.14,0.13);//b
    glVertex2f(0.14,0.14);//c
    glVertex2f(0.01,0.14);//d
    glEnd();
    glLoadIdentity();

    //tower
    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//1
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.05,0.14);//a
    glVertex2f(0.07,0.3);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//2
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.07,0.3);//b
    glVertex2f(0.09,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//3
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.09,0.14);//b
    glVertex2f(0.053,0.169);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//b
    glVertex2f(0.05,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//c
    glVertex2f(0.0577,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.053,0.169);//c
    glVertex2f(0.081,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.081,0.21);//b
    glVertex2f(0.062,0.24);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0577,0.21);//b
    glVertex2f(0.0791,0.24);//b
    glEnd();
    glLoadIdentity();

glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.0891,0.24);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0891,0.24);//b
    glVertex2f(0.1,0.21);//b
    glVertex2f(0.1,0.27);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.04,0.21);//b
    glVertex2f(0.04,0.27);//b
    glEnd();
    glLoadIdentity();

//clock
    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_QUADS);
    glColor3f(.0f, .1f, 1.0f);//Forest Green
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();
    glLoadIdentity();


    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

   glLoadIdentity();

   glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(a,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(b,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(c,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(2.0f, 0.5f, 1.0f); // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    a-=0.005f;
    b-=0.005f;
    c-=0.002f;

///platform
    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(0.01,0.02);
    glVertex2f(0.20,0.02);
    glVertex2f(0.17,0.05);
    glVertex2f(0.02,0.05);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69 ,19);
    glVertex2f(0.05,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.12);
    glVertex2f(0.05,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.14,0.03);
    glVertex2f(0.15,0.03);
    glVertex2f(0.15,0.12);
    glVertex2f(0.14,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.02,0.12);
    glVertex2f(0.18,0.12);
    glVertex2f(0.18,0.15);
    glVertex2f(0.02,0.15);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,180, 140);
    glVertex2f(0.06,0.05);
    glVertex2f(0.14,0.05);
    glVertex2f(0.14,0.12);
    glVertex2f(0.06,0.12);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.04);
    glVertex2f(0.08,0.04);
    glVertex2f(0.08,0.06);
    glVertex2f(0.07,0.06);//a
    glEnd();
    glLoadIdentity();

     glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.12,0.04);
    glVertex2f(0.13,0.04);
    glVertex2f(0.13,0.06);
    glVertex2f(0.12,0.06);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.06);
    glVertex2f(0.13,0.06);
    glVertex2f(0.13,0.07);
    glVertex2f(0.07,0.07);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,105 ,30);
    glVertex2f(0.01,0.01);
    glVertex2f(0.20,0.01);
    glVertex2f(0.20,0.02);
    glVertex2f(0.01,0.02);//a
    glEnd();
    glLoadIdentity();

///Riyad'work end



	 ///Hospital start

	glBegin(GL_QUADS);                  ///ground floor
	glColor3ub(0, 102, 255);
	glVertex2f( -0.01f, -0.25f);
	glVertex2f( -0.01f, -0.5f);
	glVertex2f( 0.31f, -0.5f);
	glVertex2f( 0.31f, -0.25f);

	glEnd();

	glBegin(GL_QUADS);                  ///Ground Floor Roof
	glColor3ub(255, 255, 255);
	glVertex2f( -0.03f, -0.2f);
	glVertex2f( -0.03f, -0.25f);
	glVertex2f( 0.33f, -0.25f);
	glVertex2f( 0.33f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Body
	glColor3ub(0, 102, 255);
	glVertex2f( 0.00f, 0.15f);
	glVertex2f( 0.00f, -0.2f);
	glVertex2f( 0.3f, -0.2f);
	glVertex2f( 0.3f, 0.15f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Top Floor
	glColor3ub(0, 71, 179);
	glVertex2f( 0.05f, 0.2f);
	glVertex2f( 0.05f, 0.15f);
	glVertex2f( 0.25f, 0.15f);
	glVertex2f( 0.25f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);              ///Hospital Top Floor Roof
	glColor3ub(0, 102, 255);
	glVertex2f( 0.03f, 0.22f);
	glVertex2f( 0.03f, 0.2f);
	glVertex2f( 0.27f, 0.2f);
	glVertex2f( 0.27f, 0.22f);

	glEnd();

	glBegin(GL_LINES);                  ///Solar panel stand
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f,0.22f);

    glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.3f);
	glVertex2f( 0.2f,0.22f);

    glEnd();

    glBegin(GL_QUADS);                  ///3rd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, 0.05f);
	glVertex2f( 0.00f, 0.00f);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f, 0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.05f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.0f);
	glVertex2f( 0.3f,0.0f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, 0.00f);
	glVertex2f( 0.0001f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, 0.00f);
	glVertex2f( 0.05f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.00f);
	glVertex2f( 0.1f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, 0.00f);
	glVertex2f( 0.15f,0.05f);

    glEnd();

glBegin(GL_QUADS);
	glColor3ub(73, 154, 129);        ///Smart Government Body Lower QUADS
	glVertex2f(-.6f, .2f);
	glVertex2f(-.5f, .2f);
	glVertex2f(-.5, -.5f);
	glVertex2f(-.6f, -.5f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 1st Windows QUADS
	glVertex2f(-.59f, .18f);
	glVertex2f(-.57f, .18f);
	glVertex2f(-.57, .14f);
	glVertex2f(-.59f, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 2nd Windows QUADS
	glVertex2f(-.56f, .18f);
	glVertex2f(-.54f, .18f);
	glVertex2f(-.54, .14f);
	glVertex2f(-.56, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 3rd Windows QUADS
	glVertex2f(-.53f, .18f);
	glVertex2f(-.51f, .18f);
	glVertex2f(-.51, .14f);
	glVertex2f(-.53, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 4th Windows QUADS
	glVertex2f(-.59f, .12f);
	glVertex2f(-.57f, .12f);
	glVertex2f(-.57, .08f);
	glVertex2f(-.59f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 5th Windows QUADS
	glVertex2f(-.56f, .12f);
	glVertex2f(-.54f, .12f);
	glVertex2f(-.54, .08f);
	glVertex2f(-.56f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 6th Windows QUADS
	glVertex2f(-.53f, .12f);
	glVertex2f(-.51f, .12f);
	glVertex2f(-.51, .08f);
	glVertex2f(-.53f, .08f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 7th Windows QUADS
	glVertex2f(-.59f, .06f);
	glVertex2f(-.57f, .06f);
	glVertex2f(-.57, .02f);
	glVertex2f(-.59f, .02f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 8th Windows QUADS
	glVertex2f(-.56f, .06f);
	glVertex2f(-.54f, .06f);
	glVertex2f(-.54, .02f);
	glVertex2f(-.56f, .02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 9th Windows QUADS
	glVertex2f(-.53f, .06f);
	glVertex2f(-.51f, .06f);
	glVertex2f(-.51, .02f);
	glVertex2f(-.53, .02f);
    glEnd();






    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body Lower 1st  Windows QUADS
	glVertex2f(-.59f, -.18f);
	glVertex2f(-.57f, -.18f);
	glVertex2f(-.57, -.14f);
	glVertex2f(-.59f, -.14f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 2nd Windows QUADS
	glVertex2f(-.56f, -.18f);
	glVertex2f(-.54f, -.18f);
	glVertex2f(-.54, -.14f);
	glVertex2f(-.56, -.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 3rd Windows QUADS
	glVertex2f(-.53f, -.18f);
	glVertex2f(-.51f, -.18f);
	glVertex2f(-.51, -.14f);
	glVertex2f(-.53,-.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 4th Windows QUADS
	glVertex2f(-.59f, -.12f);
	glVertex2f(-.57f, -.12f);
	glVertex2f(-.57, -.08f);
	glVertex2f(-.59f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government lower 5th Windows QUADS
	glVertex2f(-.56f, -.12f);
	glVertex2f(-.54f, -.12f);
	glVertex2f(-.54, -.08f);
	glVertex2f(-.56f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 6th Windows QUADS
	glVertex2f(-.53f, -.12f);
	glVertex2f(-.51f, -.12f);
	glVertex2f(-.51, -.08f);
	glVertex2f(-.53f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 7th Windows QUADS
	glVertex2f(-.59f, -.06f);
	glVertex2f(-.57f, -.06f);
	glVertex2f(-.57, -.02f);
	glVertex2f(-.59f, -.02f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 8th Windows QUADS
	glVertex2f(-.56f, -.06f);
	glVertex2f(-.54f, -.06f);
	glVertex2f(-.54, -.02f);
	glVertex2f(-.56f, -.02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Lower 9th Windows QUADS
	glVertex2f(-.53f, -.06f);
	glVertex2f(-.51f, -.06f);
	glVertex2f(-.51, -.02f);
	glVertex2f(-.53, -.02f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123, 60, 92);        ///Smart Government Body Upper QUADS
	glVertex2f(-.59f, .3f);
	glVertex2f(-.51f, .3f);
	glVertex2f(-.51, .2f);
	glVertex2f(-.59f, .2f);
    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3ub(123, 60, 92);        ///Smart Government Antina
    glVertex2f( -0.546f, 0.35f);
    glVertex2f( -0.550f, 0.45f);
    glVertex2f( -0.554f, 0.35f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Windows QUADS 1
	glVertex2f(-.585, .28f);
	glVertex2f(-.57, .28f);
	glVertex2f(-.57, .23f);
	glVertex2f(-.585f, .23f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 2
	glVertex2f(-.56f, .28f);
	glVertex2f(-.54f, .28f);
	glVertex2f(-.54, .23f);
	glVertex2f(-.56f, .23f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 3
	glVertex2f(-.53f, .28f);
	glVertex2f(-.515f, .28f);
	glVertex2f(-.515, .23f);
	glVertex2f(-.53f, .23f);
    glEnd();





                                ///Smart Government Body Upper QUADS
    glBegin(GL_QUADS);
    glColor3ub(232, 76, 51);
    glVertex2f( -0.54f, 0.35f);
    glVertex2f( -0.56f, 0.35f);
    glVertex2f( -0.59f, 0.3f);
    glVertex2f( -0.51f, 0.3f);
    glEnd();







    glBegin(GL_QUADS);
	glColor3ub(52, 119, 128);        ///LEFT house QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.5);
	glVertex2f(-1, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(32, 66, 73);        ///LEFT house upper QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.2);
	glVertex2f(-1, -.2);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);        ///LEFT house WINDOWS QUADS
	glVertex2f(-.98, -.25);
	glVertex2f(-.93, -.25);
	glVertex2f(-.93, -.45);
	glVertex2f(-.98, -.45);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 1st Left QUADS
	glVertex2f(-.9, -.15);
	glVertex2f(-.75, -.15);
	glVertex2f(-.75, -.5f);
	glVertex2f(-.9f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 1st Windows QUADS
	glVertex2f(-.88, -.2);
	glVertex2f(-.85, -.2);
	glVertex2f(-.85, -.3);
	glVertex2f(-.88, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);       ///Manufacture Body 2rd Windows QUADS
	glVertex2f(-.835, -.2);
	glVertex2f(-.805, -.2);
	glVertex2f(-.805, -.3);
	glVertex2f(-.835, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 3rd Windows QUADS
	glVertex2f(-.79, -.2);
	glVertex2f(-.76, -.2);
	glVertex2f(-.76, -.3);
	glVertex2f(-.79, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.75, -.15);
	glVertex2f(-.67, -.25f);
	glVertex2f(-.67f, -.5f);
	glVertex2f(-.75f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);        ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.7, -.15);
	glVertex2f(-.62, -.25f);
	glVertex2f(-.62f, -.5f);
	glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 3rd Left QUADS
	glVertex2f(-.65, -.15);
	glVertex2f(-.57, -.25f);
	glVertex2f(-.57, -.5);
	glVertex2f(-.65, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Left Pipe QUADS
	glVertex2f(-.87, .0);
	glVertex2f(-.84, .0);
	glVertex2f(-.83, -.15);
	glVertex2f(-.88, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left Down Stripe Pipe QUADS
	glVertex2f(-.8765, -.10);
	glVertex2f(-.8345, -.10);
	glVertex2f(-.83, -.13);
	glVertex2f(-.88, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left UP Stripe Pipe QUADS
	glVertex2f(-.8725, -.04);
	glVertex2f(-.838, -.04);
	glVertex2f(-.834, -.07);
	glVertex2f(-.875, -.07);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Right Pipe QUADS
	glVertex2f(-.81, .0);
	glVertex2f(-.78, .0);
	glVertex2f(-.77, -.15);
	glVertex2f(-.82, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right Down Stripe Pipe QUADS
	glVertex2f(-.816, -.10);
	glVertex2f(-.774, -.10);
	glVertex2f(-.77, -.13);
	glVertex2f(-.82, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right UP Stripe Pipe QUADS
	glVertex2f(-.8125, -.04);
	glVertex2f(-.778, -.04);
	glVertex2f(-.774, -.07);
	glVertex2f(-.815, -.07);
    glEnd();




/// Rushdi's Work Finsh


///Riyad's work start

     //building-1
    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.14,0.17);//b
    glVertex2f(0.1855,0.17);//b
    glVertex2f(0.1855,0.23);
    glVertex2f(0.14,0.23);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(0 ,77 ,0);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.2,0.0);//b
    glVertex2f(0.2,0.17);//c
    glVertex2f(0.12,0.17);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.13,0.14);//a
    glVertex2f(0.14,0.14);//b
    glVertex2f(0.14,0.16);//c
    glVertex2f(0.13,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.14);//a
    glVertex2f(0.165,0.14);//b
    glVertex2f(0.165,0.16);//c
    glVertex2f(0.155,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.14);//a
    glVertex2f(0.19,0.14);//b
    glVertex2f(0.19,0.16);//c
    glVertex2f(0.18,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.1);//a
    glVertex2f(0.165,0.1);//b
    glVertex2f(0.165,0.13);//c
    glVertex2f(0.155,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.1);//a
    glVertex2f(0.19,0.1);//b
    glVertex2f(0.19,0.13);//c
    glVertex2f(0.18,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.05);//a
    glVertex2f(0.19,0.05);//b
    glVertex2f(0.19,0.08);//c
    glVertex2f(0.18,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.05);//a
    glVertex2f(0.165,0.05);//b
    glVertex2f(0.165,0.08);//c
    glVertex2f(0.155,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.01);//a
    glVertex2f(0.19,0.01);//b
    glVertex2f(0.19,0.04);//c
    glVertex2f(0.18,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,0.0);//a
    glVertex2f(0.17,0.0);//b
    glVertex2f(0.17,0.03);//c
    glVertex2f(0.15,0.03);//d
    glEnd();
    glLoadIdentity();



    //building2

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.12);//c
    glVertex2f(0.0,0.12);//d
    glEnd();
    glLoadIdentity();

    //door
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.05,0.0);//a
    glVertex2f(0.1,0.0);//b
    glVertex2f(0.1,0.04);//c
    glVertex2f(0.05,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.0);//a
    glVertex2f(0.03,0.0);//b
    glVertex2f(0.03,0.04);//c
    glVertex2f(0.01,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.14,0.0);//b
    glVertex2f(0.14,0.04);//c
    glVertex2f(0.12,0.04);//d
    glEnd();
    glLoadIdentity();

    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.075,0.0);//a
    glVertex2f(0.075,0.04);
    glEnd();
    glLoadIdentity();



    //door top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door-top
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.04,0.04);//a
    glVertex2f(0.11,0.04);//b
    glVertex2f(0.11,0.055);//c
    glVertex2f(0.04,0.055);//d
    glEnd();
    glLoadIdentity();

    //window
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.11,0.075);//a
    glVertex2f(0.14,0.075);//b
    glVertex2f(0.14,0.095);//c
    glVertex2f(0.11,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.06,0.075);//a
    glVertex2f(0.09,0.075);//b
    glVertex2f(0.09,0.095);//c
    glVertex2f(0.06,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.075);//a
    glVertex2f(0.04,0.075);//b
    glVertex2f(0.04,0.095);//c
    glVertex2f(0.01,0.095);//d
    glEnd();
    glLoadIdentity();

    //pillar
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.01,0.0);//b
    glVertex2f(0.01,0.02);//c
    glVertex2f(0.0,0.02);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m1-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.03,0.0);//a
    glVertex2f(0.05,0.0);//b
    glVertex2f(0.05,0.03);//c
    glVertex2f(0.03,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m2-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.10,0.0);//a
    glVertex2f(0.12,0.0);//b
    glVertex2f(0.12,0.03);//c
    glVertex2f(0.10,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.14,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.02);//c
    glVertex2f(0.14,0.02);//d
    glEnd();
    glLoadIdentity();

    //top boarder
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(-0.01,0.12);//a
    glVertex2f(0.16,0.12);//b
    glVertex2f(0.16,0.13);//c
    glVertex2f(-0.01,0.13);//d
    glEnd();
    glLoadIdentity();

    //house top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.01,0.13);//a
    glVertex2f(0.14,0.13);//b
    glVertex2f(0.14,0.14);//c
    glVertex2f(0.01,0.14);//d
    glEnd();
    glLoadIdentity();

    //tower
    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//1
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.05,0.14);//a
    glVertex2f(0.07,0.3);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//2
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.07,0.3);//b
    glVertex2f(0.09,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//3
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.09,0.14);//b
    glVertex2f(0.053,0.169);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//b
    glVertex2f(0.05,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//c
    glVertex2f(0.0577,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.053,0.169);//c
    glVertex2f(0.081,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.081,0.21);//b
    glVertex2f(0.062,0.24);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0577,0.21);//b
    glVertex2f(0.0791,0.24);//b
    glEnd();
    glLoadIdentity();

glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.0891,0.24);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0891,0.24);//b
    glVertex2f(0.1,0.21);//b
    glVertex2f(0.1,0.27);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.04,0.21);//b
    glVertex2f(0.04,0.27);//b
    glEnd();
    glLoadIdentity();

//clock
    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_QUADS);
    glColor3f(.0f, .1f, 1.0f);//Forest Green
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();
    glLoadIdentity();


    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

   glLoadIdentity();

   glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(a,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(b,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(c,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(2.0f, 0.5f, 1.0f); // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    a-=0.005f;
    b-=0.005f;
    c-=0.002f;

///platform
    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(0.01,0.02);
    glVertex2f(0.20,0.02);
    glVertex2f(0.17,0.05);
    glVertex2f(0.02,0.05);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69 ,19);
    glVertex2f(0.05,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.12);
    glVertex2f(0.05,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.14,0.03);
    glVertex2f(0.15,0.03);
    glVertex2f(0.15,0.12);
    glVertex2f(0.14,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.02,0.12);
    glVertex2f(0.18,0.12);
    glVertex2f(0.18,0.15);
    glVertex2f(0.02,0.15);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,180, 140);
    glVertex2f(0.06,0.05);
    glVertex2f(0.14,0.05);
    glVertex2f(0.14,0.12);
    glVertex2f(0.06,0.12);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.04);
    glVertex2f(0.08,0.04);
    glVertex2f(0.08,0.06);
    glVertex2f(0.07,0.06);//a
    glEnd();
    glLoadIdentity();

     glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.12,0.04);
    glVertex2f(0.13,0.04);
    glVertex2f(0.13,0.06);
    glVertex2f(0.12,0.06);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.06);
    glVertex2f(0.13,0.06);
    glVertex2f(0.13,0.07);
    glVertex2f(0.07,0.07);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,105 ,30);
    glVertex2f(0.01,0.01);
    glVertex2f(0.20,0.01);
    glVertex2f(0.20,0.02);
    glVertex2f(0.01,0.02);//a
    glEnd();
    glLoadIdentity();

///Riyad'work end



	 ///Hospital start

	glBegin(GL_QUADS);                  ///ground floor
	glColor3ub(0, 102, 255);
	glVertex2f( -0.01f, -0.25f);
	glVertex2f( -0.01f, -0.5f);
	glVertex2f( 0.31f, -0.5f);
	glVertex2f( 0.31f, -0.25f);

	glEnd();

	glBegin(GL_QUADS);                  ///Ground Floor Roof
	glColor3ub(255, 255, 255);
	glVertex2f( -0.03f, -0.2f);
	glVertex2f( -0.03f, -0.25f);
	glVertex2f( 0.33f, -0.25f);
	glVertex2f( 0.33f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Body
	glColor3ub(0, 102, 255);
	glVertex2f( 0.00f, 0.15f);
	glVertex2f( 0.00f, -0.2f);
	glVertex2f( 0.3f, -0.2f);
	glVertex2f( 0.3f, 0.15f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Top Floor
	glColor3ub(0, 71, 179);
	glVertex2f( 0.05f, 0.2f);
	glVertex2f( 0.05f, 0.15f);
	glVertex2f( 0.25f, 0.15f);
	glVertex2f( 0.25f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);              ///Hospital Top Floor Roof
	glColor3ub(0, 102, 255);
	glVertex2f( 0.03f, 0.22f);
	glVertex2f( 0.03f, 0.2f);
	glVertex2f( 0.27f, 0.2f);
	glVertex2f( 0.27f, 0.22f);

	glEnd();

	glBegin(GL_LINES);                  ///Solar panel stand
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f,0.22f);

    glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.3f);
	glVertex2f( 0.2f,0.22f);

    glEnd();

    glBegin(GL_QUADS);                  ///3rd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, 0.05f);
	glVertex2f( 0.00f, 0.00f);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f, 0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.05f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.0f);
	glVertex2f( 0.3f,0.0f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, 0.00f);
	glVertex2f( 0.0001f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, 0.00f);
	glVertex2f( 0.05f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.00f);
	glVertex2f( 0.1f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, 0.00f);
	glVertex2f( 0.15f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.00f);
	glVertex2f( 0.2f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, 0.00f);
	glVertex2f( 0.25f,0.05f);

    glEnd();

	glBegin(GL_QUADS);                  ///2nd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, -0.05f);
	glVertex2f( 0.00f, -0.1f);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.1f);
	glVertex2f( 0.3f,-0.1f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.05f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, -0.1f);
	glVertex2f( 0.0001f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, -0.1f);
	glVertex2f( 0.05f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, -0.1f);
	glVertex2f( 0.1f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, -0.1f);
	glVertex2f( 0.15f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, -0.1f);
	glVertex2f( 0.2f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, -0.1f);
	glVertex2f( 0.25f,-0.05f);

    glEnd();


    glBegin(GL_QUADS);                  ///1st Steep
	glColor3ub(204, 224, 255);
	glVertex2f( 0.05f, -0.47f);
	glVertex2f( 0.05f, -0.5f);
	glVertex2f( 0.25f, -0.5f);
	glVertex2f( 0.25f, -0.47f);

	glEnd();


	 glBegin(GL_QUADS);                 ///2nd steep
	glColor3ub(255, 255, 255);
	glVertex2f( 0.06f, -0.44f);
	glVertex2f( 0.06f, -0.47f);
	glVertex2f( 0.24f, -0.47f);
	glVertex2f( 0.24f, -0.44f);

	glEnd();


	 glBegin(GL_QUADS);                 ///Hospital Door
	glColor3ub(128, 179, 255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f, -0.44f);
	glVertex2f( 0.22f, -0.44f);
	glVertex2f( 0.22f, -0.25f);

	glEnd();

	glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.22f, -0.25f);
	glVertex2f( 0.22f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.12f, -0.25f);
	glVertex2f( 0.12f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.18f, -0.25f);
	glVertex2f( 0.18f,-0.45f);

    glEnd();

    glBegin(GL_QUADS);                 ///Ground Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.01f, -0.27f);
	glVertex2f( 0.01f, -0.32f);
	glVertex2f( 0.06f, -0.32f);
	glVertex2f( 0.06f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Ground Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.24f, -0.27f);
	glVertex2f( 0.24f, -0.32f);
	glVertex2f( 0.29f, -0.32f);
	glVertex2f( 0.29f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.21f, 0.12f);
	glVertex2f( 0.21f, 0.07f);
	glVertex2f( 0.26f, 0.07f);
	glVertex2f( 0.26f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.04f, 0.12f);
	glVertex2f( 0.04f, 0.07f);
	glVertex2f( 0.09f, 0.07f);
	glVertex2f( 0.09f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///1st Floor Middle Window
	glColor3ub(255,255,255);
	glVertex2f( 0.09f, -0.11f);
	glVertex2f( 0.09f, -0.19f);
	glVertex2f( 0.21f, -0.19f);
	glVertex2f( 0.21f, -0.11f);

	glEnd();

	glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.12f);
	glVertex2f( 0.12f, -0.18f);

    glEnd();

    glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.18f, -0.12f);
	glVertex2f( 0.18f, -0.18f);

    glEnd();

    glLineWidth(2.0);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.15f);
	glVertex2f( 0.18f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);                 ///Solar Panel
	glColor3ub(0,0,0);
	glVertex2f( 0.07f, 0.3f);
	glVertex2f( 0.07f, 0.24f);
	glVertex2f( 0.22f, 0.24f);
	glVertex2f( 0.22f, 0.3f);

	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f, 0.24f);

    glEnd();

     glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.13f, 0.3f);
	glVertex2f( 0.13f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.16f, 0.3f);
	glVertex2f( 0.16f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.19f, 0.3f);
	glVertex2f( 0.19f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.28f);
	glVertex2f( 0.22f, 0.28f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.26f);
	glVertex2f( 0.22f, 0.26f);

    glEnd();
    ///Hospital End
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.00f);
	glVertex2f( 0.2f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, 0.00f);
	glVertex2f( 0.25f,0.05f);

    glEnd();

	glBegin(GL_QUADS);                  ///2nd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, -0.05f);
	glVertex2f( 0.00f, -0.1f);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.1f);
	glVertex2f( 0.3f,-0.1f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.05f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, -0.1f);
	glVertex2f( 0.0001f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, -0.1f);
	glVertex2f( 0.05f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, -0.1f);
	glVertex2f( 0.1f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, -0.1f);
	glVertex2f( 0.15f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, -0.1f);
	glVertex2f( 0.2f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, -0.1f);
	glVertex2f( 0.25f,-0.05f);

    glEnd();


    glBegin(GL_QUADS);                  ///1st Steep
	glColor3ub(204, 224, 255);
	glVertex2f( 0.05f, -0.47f);
	glVertex2f( 0.05f, -0.5f);
	glVertex2f( 0.25f, -0.5f);
	glVertex2f( 0.25f, -0.47f);

	glEnd();


	 glBegin(GL_QUADS);                 ///2nd steep
	glColor3ub(255, 255, 255);
	glVertex2f( 0.06f, -0.44f);
	glVertex2f( 0.06f, -0.47f);
	glVertex2f( 0.24f, -0.47f);
	glVertex2f( 0.24f, -0.44f);

	glEnd();


	 glBegin(GL_QUADS);                 ///Hospital Door
	glColor3ub(128, 179, 255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f, -0.44f);
	glVertex2f( 0.22f, -0.44f);
	glVertex2f( 0.22f, -0.25f);

	glEnd();

	glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.22f, -0.25f);
	glVertex2f( 0.22f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.12f, -0.25f);
	glVertex2f( 0.12f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.18f, -0.25f);
	glVertex2f( 0.18f,-0.45f);

    glEnd();

    glBegin(GL_QUADS);                 ///Ground Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.01f, -0.27f);
	glVertex2f( 0.01f, -0.32f);
	glVertex2f( 0.06f, -0.32f);
	glVertex2f( 0.06f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Ground Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.24f, -0.27f);
	glVertex2f( 0.24f, -0.32f);
	glVertex2f( 0.29f, -0.32f);
	glVertex2f( 0.29f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.21f, 0.12f);
	glVertex2f( 0.21f, 0.07f);
	glVertex2f( 0.26f, 0.07f);
	glVertex2f( 0.26f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.04f, 0.12f);
	glVertex2f( 0.04f, 0.07f);
	glVertex2f( 0.09f, 0.07f);
	glVertex2f( 0.09f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///1st Floor Middle Window
	glColor3ub(255,255,255);
	glVertex2f( 0.09f, -0.11f);
	glVertex2f( 0.09f, -0.19f);
	glVertex2f( 0.21f, -0.19f);
	glVertex2f( 0.21f, -0.11f);

	glEnd();

	glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.12f);
	glVertex2f( 0.12f, -0.18f);

    glEnd();

    glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.18f, -0.12f);
	glVertex2f( 0.18f, -0.18f);

    glEnd();

    glLineWidth(2.0);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.15f);
	glVertex2f( 0.18f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);                 ///Solar Panel
	glColor3ub(0,0,0);
	glVertex2f( 0.07f, 0.3f);
	glVertex2f( 0.07f, 0.24f);
	glVertex2f( 0.22f, 0.24f);
	glVertex2f( 0.22f, 0.3f);

	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f, 0.24f);

    glEnd();

     glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.13f, 0.3f);
	glVertex2f( 0.13f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.16f, 0.3f);
	glVertex2f( 0.16f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.19f, 0.3f);
	glVertex2f( 0.19f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.28f);
	glVertex2f( 0.22f, 0.28f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.26f);
	glVertex2f( 0.22f, 0.26f);

    glEnd();
    ///Hospital End

    glLoadIdentity();

//building end

  ///Windmil Start
     //pillar
    glTranslatef(.9,0.5,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.3f);
    glVertex2f( 0.01f, -0.3f);



    glEnd();
    glLoadIdentity();



    glTranslatef(.9,0.5,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i15,0.0,0.0,1.0);



///wind mill
    glBegin(GL_TRIANGLES);  ///up fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.01f, 0.02f);
    glVertex2f( 0.0f, 0.1f);



    glEnd();



    glBegin(GL_TRIANGLES);  ///Down fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.02f);
    glVertex2f( -0.0f, -0.1f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Right Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.02f, -0.01f);
    glVertex2f( 0.1f, 0.0f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Left Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, 0.01f);
    glVertex2f( -0.1f, 0.0f);
    glEnd();



    glPopMatrix();



    i15+=0.1f;



    glLoadIdentity();


    ///Flag start
    int i16;
    	 x=0.42f;  y=-0.15f;  radius =.02f;

	 triangleAmount = 20; //# of triangles used to draw circle
	 int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_QUADS);                  ///Flag Green
	glColor3f(.0f, 1.0f, 0.0f);
	glVertex2f(0.37, -.1);
    glVertex2f(0.37, -0.2);
    glVertex2f(0.49, -0.2);
    glVertex2f(0.49, -.1);
    glEnd();


     glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(x, y); // center of circle
		for(i16 = 0; i16 <= triangleAmount;i16++) {
			glVertex2f(
		        x + (radius * cos(i16 *  twicePi / triangleAmount)),
			    y + (radius * sin(i16 * twicePi / triangleAmount))
			);
		}

	glEnd();

	glBegin(GL_QUADS);                  ///Stand
	glColor3ub(204, 102, 0);
	glVertex2f( 0.36f, -0.1f);
	glVertex2f( 0.36f, -0.4f);
	glVertex2f( 0.37f, -0.4f);
	glVertex2f( 0.37f, -0.1f);
    glEnd();

    ///Flag End



    //road
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51);

    glVertex2f(-1,-.5);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-.5);

    glEnd();
//road's middle lines
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();

    //copying road's middle line
    //1
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //2
    glTranslatef(.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //3
    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //4
    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //5
    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //left side
    //6
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //7
    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //8
    glTranslatef(-.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //9
    glTranslatef(-.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //10
    glTranslatef(-1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //road upper side border
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(-1,-.48);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,-.48);
    glEnd();

    //Starting drawing light

    //road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();


    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

    glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient[] = {4,4,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.
    //Left light
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.48);
    glVertex2f(-.03,-.48);
    glEnd();
    //Light Right
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.48);
    glVertex2f(.12,-.48);
    glEnd();
    glDisable(GL_LIGHTING);

//end 1st road light

//copy light 2
    glTranslatef(.45,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

    glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {4,4,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
    //Left light

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.48);
    glVertex2f(-.03,-.48);
    glEnd();
    //Light Right

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.48);
    glVertex2f(.12,-.48);
    glEnd();
    glDisable(GL_LIGHTING);

//end 2nd road light
    glLoadIdentity();

    //copy light 3
     glTranslatef(.9,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

    glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient2[] = {4,4,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);//A lighting model parameter.
    //Left light
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.48);
    glVertex2f(-.03,-.48);
    glEnd();
    //Light Right
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.48);
    glVertex2f(.12,-.48);
    glEnd();
    glDisable(GL_LIGHTING);

//end 3rd road light
    glLoadIdentity();

    //copy light 4
     glTranslatef(-.45,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

    glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient3[] = {4,4,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);//A lighting model parameter.
    //Left light
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.48);
    glVertex2f(-.03,-.48);
    glEnd();
    //Light Right
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.48);
    glVertex2f(.12,-.48);
    glEnd();
    glDisable(GL_LIGHTING);

//end 4th road light
    glLoadIdentity();

    //copy road light 5
     glTranslatef(-.9,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

    glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient4[] = {4,4,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);//A lighting model parameter.
    //Left light
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.48);
    glVertex2f(-.03,-.48);
    glEnd();
    //Light Right
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.48);
    glVertex2f(.12,-.48);
    glEnd();
    glDisable(GL_LIGHTING);
    //end 5th road light

//new car
glPushMatrix();
glTranslatef(position_car2,0.0f, 0.0f);

glTranslatef(0.9f, 0.05f, 0.0f);
glScalef(2.0,1.8,0);

 glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f,-0.33f);
    glVertex2f(-0.8f,-0.30f);
    glVertex2f(-0.9f,-0.30f);
    glVertex2f(-0.9f,-0.33f);
    glEnd();

   glColor3ub(13, 13, 13);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f,-0.30f);
    glVertex2f(-0.83f,-0.28f);
    glVertex2f(-0.87f,-0.28f);
    glVertex2f(-0.88f,-0.30f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.824f,-0.298f);
    glVertex2f(-0.832f,-0.282f);
    glVertex2f(-0.848f,-0.282f);
    glVertex2f(-0.848f,-0.298f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.851f,-0.298f);
    glVertex2f(-0.851f,-0.282f);
    glVertex2f(-0.868f,-0.282f);
    glVertex2f(-0.876f,-0.298f);
    glEnd();

     i;
    j;
    x = -0.82f; y = -0.33f; radius = 0.01f; GLfloat a = -0.88f; GLfloat b = -0.33f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;

    glColor3ub(13, 13, 13);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
        }
    glEnd();

    glColor3ub(13, 13, 13);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount;j++)
        {
            glVertex2f(a + (radius * cos(j *  twicePi / triangleAmount)),b + (radius * sin(j * twicePi / triangleAmount)));
        }
    glEnd();

glPopMatrix();

glLoadIdentity();

//end new car
//blue car
glPushMatrix();
glTranslatef(position_jip2,0.0f, 0.0f);

glScalef(-.4,.4,0);
glTranslatef(-0.4f, -1.4f, 0.0f);

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
 i;
	 x=.1f;  y=-.05f;  radius =.06f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
 j;
	 GLfloat x1=-.23f;  GLfloat y1=-.05f;  GLfloat radius1 =.06f;
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
	 x=.1f;  y=-.05f;  radius =.03f;
	 triangleAmount2 = 20;
	 twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi2 / triangleAmount2)),
			    y + (radius * sin(k * twicePi2 / triangleAmount2))
			);
		}
glEnd();
int l;
	 x=-.23f;  y=-.05f;  radius =.03f;
	 int triangleAmount3 = 20;
	 GLfloat twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(l = 0; l <= triangleAmount3;l++) {
			glVertex2f(
		            x + (radius * cos(l*  twicePi3 / triangleAmount3)),
			    y + (radius * sin(l* twicePi3 / triangleAmount3))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();

//end blue car

//red car
glPushMatrix();
glTranslatef(position_car3,0.0f, 0.0f);

    glScalef(-.5,.4,0);
glTranslatef(-1.7f, -1.5f, 0.0f);

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
 i;
	 x8=-.06f;  y8=0.0f;  radius8 =.06f;
	 triangleAmount8 = 20;
	 twicePi8 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
glEnd();
 i;
	 x=.18f;  y=0.0f;  radius =.06f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();
 r;
	 GLfloat x11=-.06f;  GLfloat y11=0.0f;  GLfloat radius11 =.03f;
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
	 x1=.18f;  y1=0.0f;  radius1 =0.03f;
	 triangleAmount1 = 20;
	 twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount1;s++) {
			glVertex2f(
		            x1 + (radius1 * cos(s*  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(s* twicePi1 / triangleAmount1))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();
//end red car

//bus
glPushMatrix();
glTranslatef(position_bus2,0.0f, 0.0f);

glScalef(-.2,.3,0);
glTranslatef(.7f, -2.5f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-.6,0.25);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.4);
    glVertex2f(-0.6,0.4);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 255);
    glVertex2f(-.6,0.4);
    glVertex2f(0.6,0.4);
    glVertex2f(0.6,0.7);
    glVertex2f(-.6,0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2f(-.6,0.4);
    glVertex2f(-.5,0.4);
    glVertex2f(-.5,0.7);
    glVertex2f(-.6,0.7);


    glVertex2f(-.4,0.5);
    glVertex2f(-.3,0.5);
    glVertex2f(-.3,0.6);
    glVertex2f(-.4,0.6);

    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glVertex2f(-.2,0.5);
    glVertex2f(-.1,0.5);
    glVertex2f(-.1,0.6);
    glVertex2f(-.2,0.6);
    glEnd();

    glTranslatef(-.25,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glEnd();
     glLoadIdentity();
     glTranslatef(position_bus2,0.0f, 0.0f);

     glScalef(-.2,.3,0);
glTranslatef(.7f, -2.5f, 0.0f);

	x=.3f; y=.25f; radius =.11f;
	glColor3f(0,0,0);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glColor3f(0,0,0);
    j;

    x=-.3f;  y1=.25f;  radius =.11f;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius* sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

     x=.3f;  y=.25f;  radius =.06f;
	glColor3f(1,1,1);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi3 / triangleAmount)),
			    y + (radius* sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	glColor3f(1,1,1);
    i;

     x=-.3f;  y=.25f;  radius =.06f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius4 = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

	glLoadIdentity();

//traffic light
glTranslatef(0.0f, -0.38f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
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
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();
glTranslatef(0.0f, -0.38f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
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
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(0.9f,-0.12f);
glEnd();

glLoadIdentity();
//end traffic light

//bus
glPushMatrix();
glTranslatef(position_bus1,0.0f, 0.0f);

glScalef(.2,.3,0);
glTranslatef(1.0f, -3.0f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(0, 48, 48);
    glVertex2f(-.6,0.25);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.4);
    glVertex2f(-0.6,0.4);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 255);
    glVertex2f(-.6,0.4);
    glVertex2f(0.6,0.4);
    glVertex2f(0.6,0.7);
    glVertex2f(-.6,0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 48, 48);
    glVertex2f(-.6,0.4);
    glVertex2f(-.5,0.4);
    glVertex2f(-.5,0.7);
    glVertex2f(-.6,0.7);


    glVertex2f(-.4,0.5);
    glVertex2f(-.3,0.5);
    glVertex2f(-.3,0.6);
    glVertex2f(-.4,0.6);

    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glVertex2f(-.2,0.5);
    glVertex2f(-.1,0.5);
    glVertex2f(-.1,0.6);
    glVertex2f(-.2,0.6);
    glEnd();

    glTranslatef(-.25,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glEnd();
     glLoadIdentity();
     glTranslatef(position_bus1,0.0f, 0.0f);

     glScalef(.2,.3,0);
glTranslatef(1.0f, -3.0f, 0.0f);

	x=.3f; y=.25f; radius =.11f;
	glColor3f(0,0,0);
	i;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glColor3f(0,0,0);
    i;

    x=-.3f;  y1=.25f;  radius =.11f;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

     x=.3f;  y=.25f;  radius =.06f;
	glColor3f(1,1,1);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi3 / triangleAmount)),
			    y + (radius* sin(i * twicePi3 / triangleAmount))
			);
		}
	glEnd();

	glColor3f(1,1,1);
    i;

     x=-.3f;  y=.25f;  radius =.06f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius4 = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glLoadIdentity();

	//end bus

glPushMatrix();
glTranslatef(position_jip1,0.0f, 0.0f);

glScalef(.4,.4,0);
glTranslatef(-2.0f, -2.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(117, 102, 2);
glVertex2f(-.23,.3);
glVertex2f(-.38,.06);
glVertex2f(.12,.06);
glVertex2f(.12,.3);

glColor3ub(117, 102, 2);
glVertex2f(-.38,.06);
glVertex2f(-.38,-.06);
glVertex2f(.12,-.06);
glVertex2f(.12,.06);

glColor3ub(117, 102, 2);
glVertex2f(.12,-.06);
glVertex2f(.2,-.06);
glVertex2f(.19,.06);
glVertex2f(.12,.06);

glColor3ub(117, 102, 2);
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
    i;
	 x=.1f;  y=-.05f; radius =.06f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
    i;
	x=-.23f; y=-.05f; radius =.06f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();
    k;
	x=.1f; y=-.05f; radius =.03f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
glEnd();
    i;
	x=-.23f; y=-.05f; radius =.03f;
	triangleAmount3 = 20;
	twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(i = 0; i <= triangleAmount3;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi3 / triangleAmount3)),
			    y + (radius * sin(i* twicePi3 / triangleAmount3))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();

    //red car
glPushMatrix();
glTranslatef(position_car1,0.0f, 0.0f);

    glScalef(.5,.4,0);
glTranslatef(-0.3f, -2.4f, 0.0f);

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
	 x8=-.06f;  y8=0.0f;  radius8 =.06f;
	 triangleAmount8 = 20;
	 twicePi8 = 2.0f * PI;
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
	 x9=.18f;  y9=0.0f;  radius9 =.06f;
	 triangleAmount9 = 20;
	 twicePi9 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9);
		for(q = 0; q <= triangleAmount9;q++) {
			glVertex2f(
		            x9 + (radius9 * cos(q*  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(q* twicePi9 / triangleAmount9))
			);
		}
glEnd();
 r;
	 x11=-.06f;  y11=0.0f;  radius11 =.03f;
	 triangleAmount11 = 20;
	 twicePi11 = 2.0f * PI;
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
 s;
	 x1=.18f;  y1=0.0f;  radius1 =0.03f;
	 triangleAmount1 = 20;
	 twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount1;s++) {
			glVertex2f(
		            x1 + (radius1 * cos(s*  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(s* twicePi1 / triangleAmount1))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();
//end red car

glFlush();

glutTimerFunc(1500,demo_rain,0);
   glFlush();
}

void demo_night(int val) {

 glutDisplayFunc(night);

}


void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Background Color
    //sky
    glBegin(GL_QUADS);
    glColor3ub(77, 184, 200);

    glVertex2f(-1,1);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,1);

    glEnd();

//sun
    glBegin(GL_TRIANGLE_FAN);
glColor3ub(245, 117, 66);
int j;
GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.1f;
int triangleAmount = 200;
GLfloat twicePi = 2.0f * PI;
glVertex2f(x, y);
for(j = 0; j <= triangleAmount;j++)
{
    glVertex2f
    (
        x + (radius * cos(j *  twicePi / triangleAmount)), y + (radius * sin(j * twicePi / triangleAmount))
    );
}
glEnd();

// end

//cloud
//1st ring
glLoadIdentity();
      glTranslatef(-0.7,0.1,0);

	int j7;

	GLfloat x7=.3f; GLfloat y7= .8f; GLfloat radius7 =.050f;
	int triangleAmount7 = 20; //# of triangles used to draw circle
	glColor3ub(222, 224, 227);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(j7 = 0; j7 <= triangleAmount7;j7++) {
			glVertex2f(
		            x7 + (radius7 * cos(j7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(j7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();
//2nd ring
	int j8;

	GLfloat x8=.35f; GLfloat y8= .85f; GLfloat radius8 =.050f;
	int triangleAmount8 = 20; //# of triangles used to draw circle
	glColor3ub(222, 224, 227);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(j8 = 0; j8 <= triangleAmount8;j8++) {
			glVertex2f(
		            x8 + (radius8 * cos(j8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();
//3rd ring
	int j9;

	GLfloat x9=.40f; GLfloat y9= .8f; GLfloat radius9 =.050f;
	int triangleAmount9 = 20; //# of triangles used to draw circle
	glColor3ub(222, 224, 227);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(j9 = 0; j9 <= triangleAmount9;j9++) {
			glVertex2f(
		            x9 + (radius8 * cos(j9 *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(j9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();
//4th ring
	int j10;

	GLfloat x10=.35f; GLfloat y10= .80f; GLfloat radius10 =.050f;
	int triangleAmount10 = 20; //# of triangles used to draw circle
	glColor3ub(222, 224, 227);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x10, y10); // center of circle
		for(j10 = 0; j10 <= triangleAmount10;j10++) {
			glVertex2f(
		            x10 + (radius10 * cos(j10 *  twicePi10 / triangleAmount10)),
			    y10 + (radius10 * sin(j10 * twicePi10 / triangleAmount10))
			);
		}
	glEnd();

glLoadIdentity();

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
//end cloud
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

//birds end

 ///Air Bus Start
    glPushMatrix();



glTranslatef(position_plane,0,0);




    ///Air Bus Start
    glBegin(GL_POLYGON);                ///Body
    glColor3f(0, 38, 153);
    glVertex2f( -0.66f, 0.7f);
    glVertex2f( -0.66, 0.69f);
    glVertex2f( -0.59f, 0.65f);
    glVertex2f( -0.38f, 0.65f);
    glVertex2f( -0.36f, 0.67f);
    glVertex2f( -0.36f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.4f, 0.7f);



    glEnd();



    glBegin(GL_QUADS);                 ///Engine
    glColor3ub(0,0,0);
    glVertex2f( -0.49f, 0.64f);
    glVertex2f( -0.49f, 0.62f);
    glVertex2f( -0.47f, 0.62f);
    glVertex2f( -0.47f, 0.64f);



    glEnd();



    glBegin(GL_QUADS);                 ///Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.49f, 0.66f);
    glVertex2f( -0.55f, 0.61f);
    glVertex2f( -0.53f, 0.61f);
    glVertex2f( -0.45f, 0.66f);



    glEnd();



    glBegin(GL_QUADS);                 ///Back Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.53f, 0.73f);
    glVertex2f( -0.5f, 0.7f);
    glVertex2f( -0.47f, 0.7f);
    glVertex2f( -0.51f, 0.73f);



    glEnd();



    glBegin(GL_QUADS);                 ///Tail Top Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.63f, 0.74f);
    glVertex2f( -0.62f, 0.7f);
    glVertex2f( -0.59f, 0.7f);
    glVertex2f( -0.62f, 0.74f);



    glEnd();



    glBegin(GL_QUADS);                 ///Tail Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.61f, 0.69f);
    glVertex2f( -0.64f, 0.67f);
    glVertex2f( -0.61f, 0.67f);
    glVertex2f( -0.58f, 0.69f);

    glEnd();

    glBegin(GL_QUADS);                 ///Looking
    glColor3ub(255,255,255);
    glVertex2f( -0.4f, 0.69f);
    glVertex2f( -0.4f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.39f, 0.69f);

    glEnd();

    glPointSize(2);                     ///Windows
   glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   glVertex2f(-0.57f,0.68f);
   glVertex2f(-0.53f,0.68f);
   glVertex2f(-0.49f,0.68f);
   glVertex2f(-0.46f,0.68f);
   glVertex2f(-0.43f,0.68f);

   glEnd();

glPopMatrix();
///Air Bus End


 	glBegin(GL_QUADS);              ///River
	glColor3ub(0, 153, 255); // Red
	glVertex2f(1.0, -0.5);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(-1.0f, -0.5f);
    glEnd();


    glPushMatrix();

    glTranslatef(position123,0,0);



    glBegin(GL_QUADS);              ///Boat lower part
	glColor3ub(153, 0, 204);
	glVertex2f(0.6, 0.01);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.43f, 0.01f);
    glEnd();


    glBegin(GL_QUADS);              ///Boat lower stripe part
	glColor3ub(255, 255, 255);
	glVertex2f(0.61f, 0.05f);
	glVertex2f(0.613f, 0.059f);
	glVertex2f(0.395f, 0.059f);
	glVertex2f(0.404f, 0.05f);
    glEnd();
///

    glBegin(GL_QUADS);              ///Boat Upper part
	glColor3ub(153, 0, 204);
	glVertex2f(0.613f, 0.059f);
	glVertex2f(0.62f, 0.09f);
	glVertex2f(0.377f, 0.093f);
	glVertex2f(0.395f, 0.059f);
    glEnd();


    glBegin(GL_QUADS);              ///Boat Upper quid part
	glColor3ub(153, 0, 204);
	glVertex2f(0.45f, 0.091f);
	glVertex2f(0.43f, 0.12);
	glVertex2f(0.3610f, 0.12f);
    glVertex2f(0.378f, 0.091f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat end panel
	glColor3ub(153, 0, 204);
	glVertex2f(0.62f, 0.09f);
	glVertex2f(0.62f, 0.12);
	glVertex2f(0.615f, 0.12f);
    glVertex2f(0.615f, 0.09f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 1(1)
	glColor3ub(0, 0, 204);
	glVertex2f(0.6f, 0.0972f);
	glVertex2f(0.6f, 0.115);
	glVertex2f(0.58f, 0.115f);
    glVertex2f(0.58f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 1(2)
	glColor3ub(0, 0, 204);
	glVertex2f(0.6f, 0.119f);
	glVertex2f(0.6f, 0.135);
	glVertex2f(0.58f, 0.135f);
    glVertex2f(0.58f, 0.119f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 2
	glColor3ub(0, 0, 204);
	glVertex2f(0.535f, 0.0972f);
	glVertex2f(0.535f, 0.135);
	glVertex2f(0.575f, 0.135f);
    glVertex2f(0.575f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 3(1)
    glColor3ub(0, 0, 204);
	glVertex2f(0.5f, 0.0972f);
	glVertex2f(0.5f, 0.115);
	glVertex2f(0.53f, 0.115f);
    glVertex2f(0.53f, 0.0972f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 3(2)
	glColor3ub(0, 0, 204);
	glVertex2f(0.5f, 0.119f);
	glVertex2f(0.5, 0.135);
	glVertex2f(0.53f, 0.135f);
    glVertex2f(0.53f, 0.119f);
    glEnd();

    glBegin(GL_QUADS);              ///Boat Container 4
	glColor3ub(0, 0, 204);
	glVertex2f(0.47f, 0.0972f);
	glVertex2f(0.47f, 0.135);
	glVertex2f(0.49f, 0.135f);
    glVertex2f(0.49f, 0.0972f);

   glEnd();

    glPopMatrix();


//Building Start

glBegin(GL_QUADS);
	glColor3ub(73, 154, 129);        ///Smart Government Body Lower QUADS
	glVertex2f(-.6f, .2f);
	glVertex2f(-.5f, .2f);
	glVertex2f(-.5, -.5f);
	glVertex2f(-.6f, -.5f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 1st Windows QUADS
	glVertex2f(-.59f, .18f);
	glVertex2f(-.57f, .18f);
	glVertex2f(-.57, .14f);
	glVertex2f(-.59f, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 2nd Windows QUADS
	glVertex2f(-.56f, .18f);
	glVertex2f(-.54f, .18f);
	glVertex2f(-.54, .14f);
	glVertex2f(-.56, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 3rd Windows QUADS
	glVertex2f(-.53f, .18f);
	glVertex2f(-.51f, .18f);  ///Windmil Start
     //pillar
    glTranslatef(.9,0.5,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.3f);
    glVertex2f( 0.01f, -0.3f);



    glEnd();
    glLoadIdentity();



    glTranslatef(.9,0.5,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i15,0.0,0.0,1.0);



///wind mill
    glBegin(GL_TRIANGLES);  ///up fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.01f, 0.02f);
    glVertex2f( 0.0f, 0.1f);



    glEnd();



    glBegin(GL_TRIANGLES);  ///Down fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.02f);
    glVertex2f( -0.0f, -0.1f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Right Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.02f, -0.01f);
    glVertex2f( 0.1f, 0.0f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Left Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, 0.01f);
    glVertex2f( -0.1f, 0.0f);
    glEnd();



    glPopMatrix();



    i15+=0.1f;



    glLoadIdentity();


    ///Flag start
    int i16;
    	x=0.42f; y=-0.15f; radius =.02f;

	triangleAmount = 20; //# of triangles used to draw circle
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_QUADS);                  ///Flag Green
	glColor3f(.0f, 1.0f, 0.0f);
	glVertex2f(0.37, -.1);
    glVertex2f(0.37, -0.2);
    glVertex2f(0.49, -0.2);
    glVertex2f(0.49, -.1);
    glEnd();


     glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(x, y); // center of circle
		for(i16 = 0; i16 <= triangleAmount;i16++) {
			glVertex2f(
		        x + (radius * cos(i16 *  twicePi / triangleAmount)),
			    y + (radius * sin(i16 * twicePi / triangleAmount))
			);
		}

	glEnd();

	glBegin(GL_QUADS);                  ///Stand
	glColor3ub(204, 102, 0);
	glVertex2f( 0.36f, -0.1f);
	glVertex2f( 0.36f, -0.4f);
	glVertex2f( 0.37f, -0.4f);
	glVertex2f( 0.37f, -0.1f);
    glEnd();

    ///Flag End
	glVertex2f(-.51, .14f);
	glVertex2f(-.53, .14f);
    glEnd();

	glVertex2f(-.54, .08f);
	glVertex2f(-.56f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 6th Windows QUADS
	glVertex2f(-.53f, .12f);
	glVertex2f(-.51f, .12f);
	glVertex2f(-.51, .08f);
	glVertex2f(-.53f, .08f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 7th Windows QUADS
	glVertex2f(-.59f, .06f);
	glVertex2f(-.57f, .06f);
	glVertex2f(-.57, .02f);
	glVertex2f(-.59f, .02f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 8th Windows QUADS
	glVertex2f(-.56f, .06f);
	glVertex2f(-.54f, .06f);
	glVertex2f(-.54, .02f);
	glVertex2f(-.56f, .02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 9th Windows QUADS
	glVertex2f(-.53f, .06f);
	glVertex2f(-.51f, .06f);
	glVertex2f(-.51, .02f);
	glVertex2f(-.53, .02f);
    glEnd();






    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body Lower 1st  Windows QUADS
	glVertex2f(-.59f, -.18f);
	glVertex2f(-.57f, -.18f);
	glVertex2f(-.57, -.14f);
	glVertex2f(-.59f, -.14f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 2nd Windows QUADS
	glVertex2f(-.56f, -.18f);
	glVertex2f(-.54f, -.18f);
	glVertex2f(-.54, -.14f);
	glVertex2f(-.56, -.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 3rd Windows QUADS
	glVertex2f(-.53f, -.18f);
	glVertex2f(-.51f, -.18f);
	glVertex2f(-.51, -.14f);
	glVertex2f(-.53,-.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 4th Windows QUADS
	glVertex2f(-.59f, -.12f);
	glVertex2f(-.57f, -.12f);
	glVertex2f(-.57, -.08f);
	glVertex2f(-.59f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government lower 5th Windows QUADS
	glVertex2f(-.56f, -.12f);
	glVertex2f(-.54f, -.12f);
	glVertex2f(-.54, -.08f);
	glVertex2f(-.56f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 6th Windows QUADS
	glVertex2f(-.53f, -.12f);
	glVertex2f(-.51f, -.12f);
	glVertex2f(-.51, -.08f);
	glVertex2f(-.53f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 7th Windows QUADS
	glVertex2f(-.59f, -.06f);
	glVertex2f(-.57f, -.06f);
	glVertex2f(-.57, -.02f);
	glVertex2f(-.59f, -.02f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 8th Windows QUADS
	glVertex2f(-.56f, -.06f);
	glVertex2f(-.54f, -.06f);
	glVertex2f(-.54, -.02f);
	glVertex2f(-.56f, -.02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Lower 9th Windows QUADS
	glVertex2f(-.53f, -.06f);
	glVertex2f(-.51f, -.06f);
	glVertex2f(-.51, -.02f);
	glVertex2f(-.53, -.02f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123, 60, 92);        ///Smart Government Body Upper QUADS
	glVertex2f(-.59f, .3f);
	glVertex2f(-.51f, .3f);
	glVertex2f(-.51, .2f);
	glVertex2f(-.59f, .2f);
    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3ub(123, 60, 92);        ///Smart Government Antina
    glVertex2f( -0.546f, 0.35f);
    glVertex2f( -0.550f, 0.45f);
    glVertex2f( -0.554f, 0.35f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Windows QUADS 1
	glVertex2f(-.585, .28f);
	glVertex2f(-.57, .28f);
	glVertex2f(-.57, .23f);
	glVertex2f(-.585f, .23f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 2
	glVertex2f(-.56f, .28f);
	glVertex2f(-.54f, .28f);
	glVertex2f(-.54, .23f);
	glVertex2f(-.56f, .23f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 3
	glVertex2f(-.53f, .28f);
	glVertex2f(-.515f, .28f);
	glVertex2f(-.515, .23f);
	glVertex2f(-.53f, .23f);
    glEnd();





                                ///Smart Government Body Upper QUADS
    glBegin(GL_QUADS);
    glColor3ub(232, 76, 51);
    glVertex2f( -0.54f, 0.35f);
    glVertex2f( -0.56f, 0.35f);
    glVertex2f( -0.59f, 0.3f);
    glVertex2f( -0.51f, 0.3f);
    glEnd();







    glBegin(GL_QUADS);
	glColor3ub(52, 119, 128);        ///LEFT house QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.5);
	glVertex2f(-1, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(32, 66, 73);        ///LEFT house upper QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.2);
	glVertex2f(-1, -.2);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);        ///LEFT house WINDOWS QUADS
	glVertex2f(-.98, -.25);
	glVertex2f(-.93, -.25);
	glVertex2f(-.93, -.45);
	glVertex2f(-.98, -.45);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 1st Left QUADS
	glVertex2f(-.9, -.15);
	glVertex2f(-.75, -.15);
	glVertex2f(-.75, -.5f);
	glVertex2f(-.9f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 1st Windows QUADS
	glVertex2f(-.88, -.2);
	glVertex2f(-.85, -.2);
	glVertex2f(-.85, -.3);
	glVertex2f(-.88, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);       ///Manufacture Body 2rd Windows QUADS
	glVertex2f(-.835, -.2);
	glVertex2f(-.805, -.2);
	glVertex2f(-.805, -.3);
	glVertex2f(-.835, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 3rd Windows QUADS
	glVertex2f(-.79, -.2);
	glVertex2f(-.76, -.2);
	glVertex2f(-.76, -.3);
	glVertex2f(-.79, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.75, -.15);
	glVertex2f(-.67, -.25f);
	glVertex2f(-.67f, -.5f);
	glVertex2f(-.75f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);        ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.7, -.15);
	glVertex2f(-.62, -.25f);
	glVertex2f(-.62f, -.5f);
	glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 3rd Left QUADS
	glVertex2f(-.65, -.15);
	glVertex2f(-.57, -.25f);
	glVertex2f(-.57, -.5);
	glVertex2f(-.65, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Left Pipe QUADS
	glVertex2f(-.87, .0);
	glVertex2f(-.84, .0);
	glVertex2f(-.83, -.15);
	glVertex2f(-.88, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left Down Stripe Pipe QUADS
	glVertex2f(-.8765, -.10);
	glVertex2f(-.8345, -.10);
	glVertex2f(-.83, -.13);
	glVertex2f(-.88, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left UP Stripe Pipe QUADS
	glVertex2f(-.8725, -.04);
	glVertex2f(-.838, -.04);
	glVertex2f(-.834, -.07);
	glVertex2f(-.875, -.07);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Right Pipe QUADS
	glVertex2f(-.81, .0);
	glVertex2f(-.78, .0);
	glVertex2f(-.77, -.15);
	glVertex2f(-.82, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right Down Stripe Pipe QUADS
	glVertex2f(-.816, -.10);
	glVertex2f(-.774, -.10);
	glVertex2f(-.77, -.13);
	glVertex2f(-.82, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right UP Stripe Pipe QUADS
	glVertex2f(-.8125, -.04);
	glVertex2f(-.778, -.04);
	glVertex2f(-.774, -.07);
	glVertex2f(-.815, -.07);
    glEnd();




/// Rushdi's Work Finsh


///Riyad's work start

     //building-1
    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.14,0.17);//b
    glVertex2f(0.1855,0.17);//b
    glVertex2f(0.1855,0.23);
    glVertex2f(0.14,0.23);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(0 ,77 ,0);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.2,0.0);//b
    glVertex2f(0.2,0.17);//c
    glVertex2f(0.12,0.17);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.13,0.14);//a
    glVertex2f(0.14,0.14);//b
    glVertex2f(0.14,0.16);//c
    glVertex2f(0.13,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.14);//a
    glVertex2f(0.165,0.14);//b
    glVertex2f(0.165,0.16);//c
    glVertex2f(0.155,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.14);//a
    glVertex2f(0.19,0.14);//b
    glVertex2f(0.19,0.16);//c
    glVertex2f(0.18,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.1);//a
    glVertex2f(0.165,0.1);//b
    glVertex2f(0.165,0.13);//c
    glVertex2f(0.155,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.1);//a
    glVertex2f(0.19,0.1);//b
    glVertex2f(0.19,0.13);//c
    glVertex2f(0.18,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.05);//a
    glVertex2f(0.19,0.05);//b
    glVertex2f(0.19,0.08);//c
    glVertex2f(0.18,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.05);//a
    glVertex2f(0.165,0.05);//b
    glVertex2f(0.165,0.08);//c
    glVertex2f(0.155,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.01);//a
    glVertex2f(0.19,0.01);//b
    glVertex2f(0.19,0.04);//c
    glVertex2f(0.18,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,0.0);//a
    glVertex2f(0.17,0.0);//b
    glVertex2f(0.17,0.03);//c
    glVertex2f(0.15,0.03);//d
    glEnd();
    glLoadIdentity();



    //building2

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.12);//c
    glVertex2f(0.0,0.12);//d
    glEnd();
    glLoadIdentity();

    //door
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.05,0.0);//a
    glVertex2f(0.1,0.0);//b
    glVertex2f(0.1,0.04);//c
    glVertex2f(0.05,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.0);//a
    glVertex2f(0.03,0.0);//b
    glVertex2f(0.03,0.04);//c
    glVertex2f(0.01,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.14,0.0);//b
    glVertex2f(0.14,0.04);//c
    glVertex2f(0.12,0.04);//d
    glEnd();
    glLoadIdentity();

    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.075,0.0);//a
    glVertex2f(0.075,0.04);
    glEnd();
    glLoadIdentity();



    //door top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door-top
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.04,0.04);//a
    glVertex2f(0.11,0.04);//b
    glVertex2f(0.11,0.055);//c
    glVertex2f(0.04,0.055);//d
    glEnd();
    glLoadIdentity();

    //window
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.11,0.075);//a
    glVertex2f(0.14,0.075);//b
    glVertex2f(0.14,0.095);//c
    glVertex2f(0.11,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.06,0.075);//a
    glVertex2f(0.09,0.075);//b
    glVertex2f(0.09,0.095);//c
    glVertex2f(0.06,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.075);//a
    glVertex2f(0.04,0.075);//b
    glVertex2f(0.04,0.095);//c
    glVertex2f(0.01,0.095);//d
    glEnd();
    glLoadIdentity();

    //pillar
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.01,0.0);//b
    glVertex2f(0.01,0.02);//c
    glVertex2f(0.0,0.02);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m1-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.03,0.0);//a
    glVertex2f(0.05,0.0);//b
    glVertex2f(0.05,0.03);//c
    glVertex2f(0.03,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m2-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.10,0.0);//a
    glVertex2f(0.12,0.0);//b
    glVertex2f(0.12,0.03);//c
    glVertex2f(0.10,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.14,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.02);//c
    glVertex2f(0.14,0.02);//d
    glEnd();
    glLoadIdentity();

    //top boarder
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(-0.01,0.12);//a
    glVertex2f(0.16,0.12);//b
    glVertex2f(0.16,0.13);//c
    glVertex2f(-0.01,0.13);//d
    glEnd();
    glLoadIdentity();

    //house top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.01,0.13);//a
    glVertex2f(0.14,0.13);//b
    glVertex2f(0.14,0.14);//c
    glVertex2f(0.01,0.14);//d
    glEnd();
    glLoadIdentity();

    //tower
    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//1
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.05,0.14);//a
    glVertex2f(0.07,0.3);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//2
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.07,0.3);//b
    glVertex2f(0.09,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//3
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.09,0.14);//b
    glVertex2f(0.053,0.169);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//b
    glVertex2f(0.05,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//c
    glVertex2f(0.0577,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.053,0.169);//c
    glVertex2f(0.081,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.081,0.21);//b
    glVertex2f(0.062,0.24);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0577,0.21);//b
    glVertex2f(0.0791,0.24);//b
    glEnd();
    glLoadIdentity();

glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.0891,0.24);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0891,0.24);//b
    glVertex2f(0.1,0.21);//b
    glVertex2f(0.1,0.27);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.04,0.21);//b
    glVertex2f(0.04,0.27);//b
    glEnd();
    glLoadIdentity();

//clock
    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_QUADS);
    glColor3f(.0f, .1f, 1.0f);//Forest Green
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();
    glLoadIdentity();


    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

   glLoadIdentity();

   glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(a,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(b,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(c,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(2.0f, 0.5f, 1.0f); // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    a-=0.005f;
    b-=0.005f;
    c-=0.002f;

///platform
    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(0.01,0.02);
    glVertex2f(0.20,0.02);
    glVertex2f(0.17,0.05);
    glVertex2f(0.02,0.05);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69 ,19);
    glVertex2f(0.05,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.12);
    glVertex2f(0.05,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.14,0.03);
    glVertex2f(0.15,0.03);
    glVertex2f(0.15,0.12);
    glVertex2f(0.14,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.02,0.12);
    glVertex2f(0.18,0.12);
    glVertex2f(0.18,0.15);
    glVertex2f(0.02,0.15);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,180, 140);
    glVertex2f(0.06,0.05);
    glVertex2f(0.14,0.05);
    glVertex2f(0.14,0.12);
    glVertex2f(0.06,0.12);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.04);
    glVertex2f(0.08,0.04);
    glVertex2f(0.08,0.06);
    glVertex2f(0.07,0.06);//a
    glEnd();
    glLoadIdentity();

     glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.12,0.04);
    glVertex2f(0.13,0.04);
    glVertex2f(0.13,0.06);
    glVertex2f(0.12,0.06);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.06);
    glVertex2f(0.13,0.06);
    glVertex2f(0.13,0.07);
    glVertex2f(0.07,0.07);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,105 ,30);
    glVertex2f(0.01,0.01);
    glVertex2f(0.20,0.01);
    glVertex2f(0.20,0.02);
    glVertex2f(0.01,0.02);//a
    glEnd();
    glLoadIdentity();

///Riyad'work end



	 ///Hospital start

	glBegin(GL_QUADS);                  ///ground floor
	glColor3ub(0, 102, 255);
	glVertex2f( -0.01f, -0.25f);
	glVertex2f( -0.01f, -0.5f);
	glVertex2f( 0.31f, -0.5f);
	glVertex2f( 0.31f, -0.25f);

	glEnd();

	glBegin(GL_QUADS);                  ///Ground Floor Roof
	glColor3ub(255, 255, 255);
	glVertex2f( -0.03f, -0.2f);
	glVertex2f( -0.03f, -0.25f);
	glVertex2f( 0.33f, -0.25f);
	glVertex2f( 0.33f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Body
	glColor3ub(0, 102, 255);
	glVertex2f( 0.00f, 0.15f);
	glVertex2f( 0.00f, -0.2f);
	glVertex2f( 0.3f, -0.2f);
	glVertex2f( 0.3f, 0.15f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Top Floor
	glColor3ub(0, 71, 179);
	glVertex2f( 0.05f, 0.2f);
	glVertex2f( 0.05f, 0.15f);
	glVertex2f( 0.25f, 0.15f);
	glVertex2f( 0.25f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);              ///Hospital Top Floor Roof
	glColor3ub(0, 102, 255);
	glVertex2f( 0.03f, 0.22f);
	glVertex2f( 0.03f, 0.2f);
	glVertex2f( 0.27f, 0.2f);
	glVertex2f( 0.27f, 0.22f);

	glEnd();

	glBegin(GL_LINES);                  ///Solar panel stand
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f,0.22f);

    glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.3f);
	glVertex2f( 0.2f,0.22f);

    glEnd();

    glBegin(GL_QUADS);                  ///3rd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, 0.05f);
	glVertex2f( 0.00f, 0.00f);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f, 0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.05f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.0f);
	glVertex2f( 0.3f,0.0f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, 0.00f);
	glVertex2f( 0.0001f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, 0.00f);
	glVertex2f( 0.05f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.00f);
	glVertex2f( 0.1f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, 0.00f);
	glVertex2f( 0.15f,0.05f);

    glEnd();

glBegin(GL_QUADS);
	glColor3ub(73, 154, 129);        ///Smart Government Body Lower QUADS
	glVertex2f(-.6f, .2f);
	glVertex2f(-.5f, .2f);
	glVertex2f(-.5, -.5f);
	glVertex2f(-.6f, -.5f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 1st Windows QUADS
	glVertex2f(-.59f, .18f);
	glVertex2f(-.57f, .18f);
	glVertex2f(-.57, .14f);
	glVertex2f(-.59f, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 2nd Windows QUADS
	glVertex2f(-.56f, .18f);
	glVertex2f(-.54f, .18f);
	glVertex2f(-.54, .14f);
	glVertex2f(-.56, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 3rd Windows QUADS
	glVertex2f(-.53f, .18f);
	glVertex2f(-.51f, .18f);
	glVertex2f(-.51, .14f);
	glVertex2f(-.53, .14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 4th Windows QUADS
	glVertex2f(-.59f, .12f);
	glVertex2f(-.57f, .12f);
	glVertex2f(-.57, .08f);
	glVertex2f(-.59f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 5th Windows QUADS
	glVertex2f(-.56f, .12f);
	glVertex2f(-.54f, .12f);
	glVertex2f(-.54, .08f);
	glVertex2f(-.56f, .08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 6th Windows QUADS
	glVertex2f(-.53f, .12f);
	glVertex2f(-.51f, .12f);
	glVertex2f(-.51, .08f);
	glVertex2f(-.53f, .08f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 7th Windows QUADS
	glVertex2f(-.59f, .06f);
	glVertex2f(-.57f, .06f);
	glVertex2f(-.57, .02f);
	glVertex2f(-.59f, .02f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 8th Windows QUADS
	glVertex2f(-.56f, .06f);
	glVertex2f(-.54f, .06f);
	glVertex2f(-.54, .02f);
	glVertex2f(-.56f, .02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body 9th Windows QUADS
	glVertex2f(-.53f, .06f);
	glVertex2f(-.51f, .06f);
	glVertex2f(-.51, .02f);
	glVertex2f(-.53, .02f);
    glEnd();






    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Body Lower 1st  Windows QUADS
	glVertex2f(-.59f, -.18f);
	glVertex2f(-.57f, -.18f);
	glVertex2f(-.57, -.14f);
	glVertex2f(-.59f, -.14f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 2nd Windows QUADS
	glVertex2f(-.56f, -.18f);
	glVertex2f(-.54f, -.18f);
	glVertex2f(-.54, -.14f);
	glVertex2f(-.56, -.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 3rd Windows QUADS
	glVertex2f(-.53f, -.18f);
	glVertex2f(-.51f, -.18f);
	glVertex2f(-.51, -.14f);
	glVertex2f(-.53,-.14f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 4th Windows QUADS
	glVertex2f(-.59f, -.12f);
	glVertex2f(-.57f, -.12f);
	glVertex2f(-.57, -.08f);
	glVertex2f(-.59f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government lower 5th Windows QUADS
	glVertex2f(-.56f, -.12f);
	glVertex2f(-.54f, -.12f);
	glVertex2f(-.54, -.08f);
	glVertex2f(-.56f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 6th Windows QUADS
	glVertex2f(-.53f, -.12f);
	glVertex2f(-.51f, -.12f);
	glVertex2f(-.51, -.08f);
	glVertex2f(-.53f, -.08f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 7th Windows QUADS
	glVertex2f(-.59f, -.06f);
	glVertex2f(-.57f, -.06f);
	glVertex2f(-.57, -.02f);
	glVertex2f(-.59f, -.02f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3ub(185, 215, 218);        ///Smart Government Lower 8th Windows QUADS
	glVertex2f(-.56f, -.06f);
	glVertex2f(-.54f, -.06f);
	glVertex2f(-.54, -.02f);
	glVertex2f(-.56f, -.02f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Lower 9th Windows QUADS
	glVertex2f(-.53f, -.06f);
	glVertex2f(-.51f, -.06f);
	glVertex2f(-.51, -.02f);
	glVertex2f(-.53, -.02f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(123, 60, 92);        ///Smart Government Body Upper QUADS
	glVertex2f(-.59f, .3f);
	glVertex2f(-.51f, .3f);
	glVertex2f(-.51, .2f);
	glVertex2f(-.59f, .2f);
    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3ub(123, 60, 92);        ///Smart Government Antina
    glVertex2f( -0.546f, 0.35f);
    glVertex2f( -0.550f, 0.45f);
    glVertex2f( -0.554f, 0.35f);
    glEnd();




    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);        ///Smart Government Windows QUADS 1
	glVertex2f(-.585, .28f);
	glVertex2f(-.57, .28f);
	glVertex2f(-.57, .23f);
	glVertex2f(-.585f, .23f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 2
	glVertex2f(-.56f, .28f);
	glVertex2f(-.54f, .28f);
	glVertex2f(-.54, .23f);
	glVertex2f(-.56f, .23f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(207, 225, 208);       ///Smart Government Windows QUADS 3
	glVertex2f(-.53f, .28f);
	glVertex2f(-.515f, .28f);
	glVertex2f(-.515, .23f);
	glVertex2f(-.53f, .23f);
    glEnd();





                                ///Smart Government Body Upper QUADS
    glBegin(GL_QUADS);
    glColor3ub(232, 76, 51);
    glVertex2f( -0.54f, 0.35f);
    glVertex2f( -0.56f, 0.35f);
    glVertex2f( -0.59f, 0.3f);
    glVertex2f( -0.51f, 0.3f);
    glEnd();







    glBegin(GL_QUADS);
	glColor3ub(52, 119, 128);        ///LEFT house QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.5);
	glVertex2f(-1, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(32, 66, 73);        ///LEFT house upper QUADS
	glVertex2f(-1, -.1);
	glVertex2f(-.8, -.1);
	glVertex2f(-.8, -.2);
	glVertex2f(-1, -.2);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);        ///LEFT house WINDOWS QUADS
	glVertex2f(-.98, -.25);
	glVertex2f(-.93, -.25);
	glVertex2f(-.93, -.45);
	glVertex2f(-.98, -.45);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 1st Left QUADS
	glVertex2f(-.9, -.15);
	glVertex2f(-.75, -.15);
	glVertex2f(-.75, -.5f);
	glVertex2f(-.9f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 1st Windows QUADS
	glVertex2f(-.88, -.2);
	glVertex2f(-.85, -.2);
	glVertex2f(-.85, -.3);
	glVertex2f(-.88, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);       ///Manufacture Body 2rd Windows QUADS
	glVertex2f(-.835, -.2);
	glVertex2f(-.805, -.2);
	glVertex2f(-.805, -.3);
	glVertex2f(-.835, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(59, 96, 103);        ///Manufacture Body 3rd Windows QUADS
	glVertex2f(-.79, -.2);
	glVertex2f(-.76, -.2);
	glVertex2f(-.76, -.3);
	glVertex2f(-.79, -.3);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.75, -.15);
	glVertex2f(-.67, -.25f);
	glVertex2f(-.67f, -.5f);
	glVertex2f(-.75f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);        ///Manufacture Body 2nd Left QUADS
	glVertex2f(-.7, -.15);
	glVertex2f(-.62, -.25f);
	glVertex2f(-.62f, -.5f);
	glVertex2f(-.7f, -.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(236, 117, 51);         ///Manufacture Body 3rd Left QUADS
	glVertex2f(-.65, -.15);
	glVertex2f(-.57, -.25f);
	glVertex2f(-.57, -.5);
	glVertex2f(-.65, -.5);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Left Pipe QUADS
	glVertex2f(-.87, .0);
	glVertex2f(-.84, .0);
	glVertex2f(-.83, -.15);
	glVertex2f(-.88, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left Down Stripe Pipe QUADS
	glVertex2f(-.8765, -.10);
	glVertex2f(-.8345, -.10);
	glVertex2f(-.83, -.13);
	glVertex2f(-.88, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Left UP Stripe Pipe QUADS
	glVertex2f(-.8725, -.04);
	glVertex2f(-.838, -.04);
	glVertex2f(-.834, -.07);
	glVertex2f(-.875, -.07);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(238, 200, 166);        ///Manufacture Body Right Pipe QUADS
	glVertex2f(-.81, .0);
	glVertex2f(-.78, .0);
	glVertex2f(-.77, -.15);
	glVertex2f(-.82, -.15);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right Down Stripe Pipe QUADS
	glVertex2f(-.816, -.10);
	glVertex2f(-.774, -.10);
	glVertex2f(-.77, -.13);
	glVertex2f(-.82, -.13);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(238, 0, 0);        ///Manufacture Body Right UP Stripe Pipe QUADS
	glVertex2f(-.8125, -.04);
	glVertex2f(-.778, -.04);
	glVertex2f(-.774, -.07);
	glVertex2f(-.815, -.07);
    glEnd();




/// Rushdi's Work Finsh


///Riyad's work start

     //building-1
    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.14,0.17);//b
    glVertex2f(0.1855,0.17);//b
    glVertex2f(0.1855,0.23);
    glVertex2f(0.14,0.23);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(0 ,77 ,0);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.2,0.0);//b
    glVertex2f(0.2,0.17);//c
    glVertex2f(0.12,0.17);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.13,0.14);//a
    glVertex2f(0.14,0.14);//b
    glVertex2f(0.14,0.16);//c
    glVertex2f(0.13,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.14);//a
    glVertex2f(0.165,0.14);//b
    glVertex2f(0.165,0.16);//c
    glVertex2f(0.155,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.14);//a
    glVertex2f(0.19,0.14);//b
    glVertex2f(0.19,0.16);//c
    glVertex2f(0.18,0.16);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.1);//a
    glVertex2f(0.165,0.1);//b
    glVertex2f(0.165,0.13);//c
    glVertex2f(0.155,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.1);//a
    glVertex2f(0.19,0.1);//b
    glVertex2f(0.19,0.13);//c
    glVertex2f(0.18,0.13);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.05);//a
    glVertex2f(0.19,0.05);//b
    glVertex2f(0.19,0.08);//c
    glVertex2f(0.18,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.155,0.05);//a
    glVertex2f(0.165,0.05);//b
    glVertex2f(0.165,0.08);//c
    glVertex2f(0.155,0.08);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(204, 255, 204);
    glVertex2f(0.18,0.01);//a
    glVertex2f(0.19,0.01);//b
    glVertex2f(0.19,0.04);//c
    glVertex2f(0.18,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.59,-0.5,0);
    glScalef(3,3,0);//window
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15,0.0);//a
    glVertex2f(0.17,0.0);//b
    glVertex2f(0.17,0.03);//c
    glVertex2f(0.15,0.03);//d
    glEnd();
    glLoadIdentity();



    //building2

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.12);//c
    glVertex2f(0.0,0.12);//d
    glEnd();
    glLoadIdentity();

    //door
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.05,0.0);//a
    glVertex2f(0.1,0.0);//b
    glVertex2f(0.1,0.04);//c
    glVertex2f(0.05,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.0);//a
    glVertex2f(0.03,0.0);//b
    glVertex2f(0.03,0.04);//c
    glVertex2f(0.01,0.04);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.12,0.0);//a
    glVertex2f(0.14,0.0);//b
    glVertex2f(0.14,0.04);//c
    glVertex2f(0.12,0.04);//d
    glEnd();
    glLoadIdentity();

    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-door
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.075,0.0);//a
    glVertex2f(0.075,0.04);
    glEnd();
    glLoadIdentity();



    //door top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//mid-door-top
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.04,0.04);//a
    glVertex2f(0.11,0.04);//b
    glVertex2f(0.11,0.055);//c
    glVertex2f(0.04,0.055);//d
    glEnd();
    glLoadIdentity();

    //window
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.11,0.075);//a
    glVertex2f(0.14,0.075);//b
    glVertex2f(0.14,0.095);//c
    glVertex2f(0.11,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.06,0.075);//a
    glVertex2f(0.09,0.075);//b
    glVertex2f(0.09,0.095);//c
    glVertex2f(0.06,0.095);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-window
    glBegin(GL_QUADS);
    glColor3ub(95,158,160);
    glVertex2f(0.01,0.075);//a
    glVertex2f(0.04,0.075);//b
    glVertex2f(0.04,0.095);//c
    glVertex2f(0.01,0.095);//d
    glEnd();
    glLoadIdentity();

    //pillar
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//l-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.0,0.0);//a
    glVertex2f(0.01,0.0);//b
    glVertex2f(0.01,0.02);//c
    glVertex2f(0.0,0.02);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m1-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.03,0.0);//a
    glVertex2f(0.05,0.0);//b
    glVertex2f(0.05,0.03);//c
    glVertex2f(0.03,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//m2-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.10,0.0);//a
    glVertex2f(0.12,0.0);//b
    glVertex2f(0.12,0.03);//c
    glVertex2f(0.10,0.03);//d
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//r-pillar
    glBegin(GL_QUADS);
    glColor3ub(255 ,160 ,122);
    glVertex2f(0.14,0.0);//a
    glVertex2f(0.15,0.0);//b
    glVertex2f(0.15,0.02);//c
    glVertex2f(0.14,0.02);//d
    glEnd();
    glLoadIdentity();

    //top boarder
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(-0.01,0.12);//a
    glVertex2f(0.16,0.12);//b
    glVertex2f(0.16,0.13);//c
    glVertex2f(-0.01,0.13);//d
    glEnd();
    glLoadIdentity();

    //house top
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,218,185);
    glVertex2f(0.01,0.13);//a
    glVertex2f(0.14,0.13);//b
    glVertex2f(0.14,0.14);//c
    glVertex2f(0.01,0.14);//d
    glEnd();
    glLoadIdentity();

    //tower
    glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//1
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.05,0.14);//a
    glVertex2f(0.07,0.3);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//2
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.07,0.3);//b
    glVertex2f(0.09,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//3
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.09,0.14);//b
    glVertex2f(0.053,0.169);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//b
    glVertex2f(0.05,0.14);//c
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.087,0.169);//c
    glVertex2f(0.0577,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.053,0.169);//c
    glVertex2f(0.081,0.21);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.081,0.21);//b
    glVertex2f(0.062,0.24);//b
    glEnd();
    glLoadIdentity();
glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0577,0.21);//b
    glVertex2f(0.0791,0.24);//b
    glEnd();
    glLoadIdentity();

glLineWidth(2.0);
glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_LINES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.0891,0.24);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.0891,0.24);//b
    glVertex2f(0.1,0.21);//b
    glVertex2f(0.1,0.27);//b
    glEnd();
    glLoadIdentity();

    glTranslated(-0.6,-0.5,0);
    glScalef(3,3,0);//
    glBegin(GL_TRIANGLES);
    glColor3ub(224 ,255 ,255);
    glVertex2f(0.052,0.24);//b
    glVertex2f(0.04,0.21);//b
    glVertex2f(0.04,0.27);//b
    glEnd();
    glLoadIdentity();

//clock
    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_QUADS);
    glColor3f(.0f, .1f, 1.0f);//Forest Green
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();
    glLoadIdentity();


    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

   glLoadIdentity();

   glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(a,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(b,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslated(-0.1,0.1,0);
    glScalef(-0.08,-.08,0);
    glPushMatrix();
    glRotatef(c,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(2.0f, 0.5f, 1.0f); // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    a-=0.005f;
    b-=0.005f;
    c-=0.002f;

///platform
    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(255, 140, 0);
    glVertex2f(0.01,0.02);
    glVertex2f(0.20,0.02);
    glVertex2f(0.17,0.05);
    glVertex2f(0.02,0.05);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69 ,19);
    glVertex2f(0.05,0.03);
    glVertex2f(0.06,0.03);
    glVertex2f(0.06,0.12);
    glVertex2f(0.05,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.14,0.03);
    glVertex2f(0.15,0.03);
    glVertex2f(0.15,0.12);
    glVertex2f(0.14,0.12);//a

    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(139 ,69, 19);
    glVertex2f(0.02,0.12);
    glVertex2f(0.18,0.12);
    glVertex2f(0.18,0.15);
    glVertex2f(0.02,0.15);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,180, 140);
    glVertex2f(0.06,0.05);
    glVertex2f(0.14,0.05);
    glVertex2f(0.14,0.12);
    glVertex2f(0.06,0.12);//a
    glEnd();
    glLoadIdentity();


    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.04);
    glVertex2f(0.08,0.04);
    glVertex2f(0.08,0.06);
    glVertex2f(0.07,0.06);//a
    glEnd();
    glLoadIdentity();

     glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.12,0.04);
    glVertex2f(0.13,0.04);
    glVertex2f(0.13,0.06);
    glVertex2f(0.12,0.06);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(165 ,42 ,42);
    glVertex2f(0.07,0.06);
    glVertex2f(0.13,0.06);
    glVertex2f(0.13,0.07);
    glVertex2f(0.07,0.07);//a
    glEnd();
    glLoadIdentity();

    glTranslated(0.55,-0.5,0);
    glScalef(2,2,0);//
    glBegin(GL_QUADS);
    glColor3ub(210 ,105 ,30);
    glVertex2f(0.01,0.01);
    glVertex2f(0.20,0.01);
    glVertex2f(0.20,0.02);
    glVertex2f(0.01,0.02);//a
    glEnd();
    glLoadIdentity();

///Riyad'work end



	 ///Hospital start

	glBegin(GL_QUADS);                  ///ground floor
	glColor3ub(0, 102, 255);
	glVertex2f( -0.01f, -0.25f);
	glVertex2f( -0.01f, -0.5f);
	glVertex2f( 0.31f, -0.5f);
	glVertex2f( 0.31f, -0.25f);

	glEnd();

	glBegin(GL_QUADS);                  ///Ground Floor Roof
	glColor3ub(255, 255, 255);
	glVertex2f( -0.03f, -0.2f);
	glVertex2f( -0.03f, -0.25f);
	glVertex2f( 0.33f, -0.25f);
	glVertex2f( 0.33f, -0.2f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Body
	glColor3ub(0, 102, 255);
	glVertex2f( 0.00f, 0.15f);
	glVertex2f( 0.00f, -0.2f);
	glVertex2f( 0.3f, -0.2f);
	glVertex2f( 0.3f, 0.15f);

	glEnd();

	glBegin(GL_QUADS);                  ///Hospital Top Floor
	glColor3ub(0, 71, 179);
	glVertex2f( 0.05f, 0.2f);
	glVertex2f( 0.05f, 0.15f);
	glVertex2f( 0.25f, 0.15f);
	glVertex2f( 0.25f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);              ///Hospital Top Floor Roof
	glColor3ub(0, 102, 255);
	glVertex2f( 0.03f, 0.22f);
	glVertex2f( 0.03f, 0.2f);
	glVertex2f( 0.27f, 0.2f);
	glVertex2f( 0.27f, 0.22f);

	glEnd();

	glBegin(GL_LINES);                  ///Solar panel stand
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f,0.22f);

    glEnd();

    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.3f);
	glVertex2f( 0.2f,0.22f);

    glEnd();

    glBegin(GL_QUADS);                  ///3rd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, 0.05f);
	glVertex2f( 0.00f, 0.00f);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f, 0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.05f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, 0.0f);
	glVertex2f( 0.3f,0.0f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, 0.00f);
	glVertex2f( 0.0001f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, 0.00f);
	glVertex2f( 0.3f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, 0.00f);
	glVertex2f( 0.05f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, 0.00f);
	glVertex2f( 0.1f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, 0.00f);
	glVertex2f( 0.15f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.00f);
	glVertex2f( 0.2f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, 0.00f);
	glVertex2f( 0.25f,0.05f);

    glEnd();

	glBegin(GL_QUADS);                  ///2nd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, -0.05f);
	glVertex2f( 0.00f, -0.1f);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.1f);
	glVertex2f( 0.3f,-0.1f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.05f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, -0.1f);
	glVertex2f( 0.0001f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, -0.1f);
	glVertex2f( 0.05f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, -0.1f);
	glVertex2f( 0.1f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, -0.1f);
	glVertex2f( 0.15f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, -0.1f);
	glVertex2f( 0.2f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, -0.1f);
	glVertex2f( 0.25f,-0.05f);

    glEnd();


    glBegin(GL_QUADS);                  ///1st Steep
	glColor3ub(204, 224, 255);
	glVertex2f( 0.05f, -0.47f);
	glVertex2f( 0.05f, -0.5f);
	glVertex2f( 0.25f, -0.5f);
	glVertex2f( 0.25f, -0.47f);

	glEnd();


	 glBegin(GL_QUADS);                 ///2nd steep
	glColor3ub(255, 255, 255);
	glVertex2f( 0.06f, -0.44f);
	glVertex2f( 0.06f, -0.47f);
	glVertex2f( 0.24f, -0.47f);
	glVertex2f( 0.24f, -0.44f);

	glEnd();


	 glBegin(GL_QUADS);                 ///Hospital Door
	glColor3ub(128, 179, 255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f, -0.44f);
	glVertex2f( 0.22f, -0.44f);
	glVertex2f( 0.22f, -0.25f);

	glEnd();

	glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.22f, -0.25f);
	glVertex2f( 0.22f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.12f, -0.25f);
	glVertex2f( 0.12f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.18f, -0.25f);
	glVertex2f( 0.18f,-0.45f);

    glEnd();

    glBegin(GL_QUADS);                 ///Ground Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.01f, -0.27f);
	glVertex2f( 0.01f, -0.32f);
	glVertex2f( 0.06f, -0.32f);
	glVertex2f( 0.06f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Ground Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.24f, -0.27f);
	glVertex2f( 0.24f, -0.32f);
	glVertex2f( 0.29f, -0.32f);
	glVertex2f( 0.29f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.21f, 0.12f);
	glVertex2f( 0.21f, 0.07f);
	glVertex2f( 0.26f, 0.07f);
	glVertex2f( 0.26f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.04f, 0.12f);
	glVertex2f( 0.04f, 0.07f);
	glVertex2f( 0.09f, 0.07f);
	glVertex2f( 0.09f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///1st Floor Middle Window
	glColor3ub(255,255,255);
	glVertex2f( 0.09f, -0.11f);
	glVertex2f( 0.09f, -0.19f);
	glVertex2f( 0.21f, -0.19f);
	glVertex2f( 0.21f, -0.11f);

	glEnd();

	glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.12f);
	glVertex2f( 0.12f, -0.18f);

    glEnd();

    glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.18f, -0.12f);
	glVertex2f( 0.18f, -0.18f);

    glEnd();

    glLineWidth(2.0);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.15f);
	glVertex2f( 0.18f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);                 ///Solar Panel
	glColor3ub(0,0,0);
	glVertex2f( 0.07f, 0.3f);
	glVertex2f( 0.07f, 0.24f);
	glVertex2f( 0.22f, 0.24f);
	glVertex2f( 0.22f, 0.3f);

	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f, 0.24f);

    glEnd();

     glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.13f, 0.3f);
	glVertex2f( 0.13f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.16f, 0.3f);
	glVertex2f( 0.16f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.19f, 0.3f);
	glVertex2f( 0.19f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.28f);
	glVertex2f( 0.22f, 0.28f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.26f);
	glVertex2f( 0.22f, 0.26f);

    glEnd();
    ///Hospital End
	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, 0.00f);
	glVertex2f( 0.2f,0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, 0.00f);
	glVertex2f( 0.25f,0.05f);

    glEnd();

	glBegin(GL_QUADS);                  ///2nd floor
	glColor3ub(102, 163, 255);
	glVertex2f( 0.00f, -0.05f);
	glVertex2f( 0.00f, -0.1f);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f, -0.05f);

	glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.1f);
	glVertex2f( 0.3f,-0.1f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0f, -0.05f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.0001f, -0.1f);
	glVertex2f( 0.0001f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.3f, -0.1f);
	glVertex2f( 0.3f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.05f, -0.1f);
	glVertex2f( 0.05f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.1f, -0.1f);
	glVertex2f( 0.1f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.15f, -0.1f);
	glVertex2f( 0.15f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.2f, -0.1f);
	glVertex2f( 0.2f,-0.05f);

    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f( 0.25f, -0.1f);
	glVertex2f( 0.25f,-0.05f);

    glEnd();


    glBegin(GL_QUADS);                  ///1st Steep
	glColor3ub(204, 224, 255);
	glVertex2f( 0.05f, -0.47f);
	glVertex2f( 0.05f, -0.5f);
	glVertex2f( 0.25f, -0.5f);
	glVertex2f( 0.25f, -0.47f);

	glEnd();


	 glBegin(GL_QUADS);                 ///2nd steep
	glColor3ub(255, 255, 255);
	glVertex2f( 0.06f, -0.44f);
	glVertex2f( 0.06f, -0.47f);
	glVertex2f( 0.24f, -0.47f);
	glVertex2f( 0.24f, -0.44f);

	glEnd();


	 glBegin(GL_QUADS);                 ///Hospital Door
	glColor3ub(128, 179, 255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f, -0.44f);
	glVertex2f( 0.22f, -0.44f);
	glVertex2f( 0.22f, -0.25f);

	glEnd();

	glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.08f, -0.25f);
	glVertex2f( 0.08f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.22f, -0.25f);
	glVertex2f( 0.22f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.12f, -0.25f);
	glVertex2f( 0.12f,-0.45f);

    glEnd();

    glBegin(GL_LINES);              ///Door Border
	glColor3ub(255,255,255);
	glVertex2f( 0.18f, -0.25f);
	glVertex2f( 0.18f,-0.45f);

    glEnd();

    glBegin(GL_QUADS);                 ///Ground Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.01f, -0.27f);
	glVertex2f( 0.01f, -0.32f);
	glVertex2f( 0.06f, -0.32f);
	glVertex2f( 0.06f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Ground Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.24f, -0.27f);
	glVertex2f( 0.24f, -0.32f);
	glVertex2f( 0.29f, -0.32f);
	glVertex2f( 0.29f, -0.27f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Right Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.21f, 0.12f);
	glVertex2f( 0.21f, 0.07f);
	glVertex2f( 0.26f, 0.07f);
	glVertex2f( 0.26f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///Top Floor Left Window
	glColor3ub(204, 224, 255);
	glVertex2f( 0.04f, 0.12f);
	glVertex2f( 0.04f, 0.07f);
	glVertex2f( 0.09f, 0.07f);
	glVertex2f( 0.09f, 0.12f);

	glEnd();

	glBegin(GL_QUADS);                 ///1st Floor Middle Window
	glColor3ub(255,255,255);
	glVertex2f( 0.09f, -0.11f);
	glVertex2f( 0.09f, -0.19f);
	glVertex2f( 0.21f, -0.19f);
	glVertex2f( 0.21f, -0.11f);

	glEnd();

	glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.12f);
	glVertex2f( 0.12f, -0.18f);

    glEnd();

    glLineWidth(2.5);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.18f, -0.12f);
	glVertex2f( 0.18f, -0.18f);

    glEnd();

    glLineWidth(2.0);               ///H
	glBegin(GL_LINES);
	glColor3ub(0, 61, 153);
	glVertex2f( 0.12f, -0.15f);
	glVertex2f( 0.18f, -0.15f);

    glEnd();

    glBegin(GL_QUADS);                 ///Solar Panel
	glColor3ub(0,0,0);
	glVertex2f( 0.07f, 0.3f);
	glVertex2f( 0.07f, 0.24f);
	glVertex2f( 0.22f, 0.24f);
	glVertex2f( 0.22f, 0.3f);

	glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.1f, 0.3f);
	glVertex2f( 0.1f, 0.24f);

    glEnd();

     glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.13f, 0.3f);
	glVertex2f( 0.13f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.16f, 0.3f);
	glVertex2f( 0.16f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.19f, 0.3f);
	glVertex2f( 0.19f, 0.24f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.28f);
	glVertex2f( 0.22f, 0.28f);

    glEnd();

    glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f( 0.07f, 0.26f);
	glVertex2f( 0.22f, 0.26f);

    glEnd();
    ///Hospital End

    glLoadIdentity();

//building end

  ///Windmil Start
     //pillar
    glTranslatef(.9,0.5,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.3f);
    glVertex2f( 0.01f, -0.3f);



    glEnd();
    glLoadIdentity();



    glTranslatef(.9,0.5,0);
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glRotatef(i15,0.0,0.0,1.0);



///wind mill
    glBegin(GL_TRIANGLES);  ///up fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.01f, 0.02f);
    glVertex2f( 0.0f, 0.1f);



    glEnd();



    glBegin(GL_TRIANGLES);  ///Down fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.01f, -0.02f);
    glVertex2f( -0.0f, -0.1f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Right Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.02f, -0.01f);
    glVertex2f( 0.1f, 0.0f);
    glEnd();



    glBegin(GL_TRIANGLES);  ///Left Fan
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.02f, 0.01f);
    glVertex2f( -0.1f, 0.0f);
    glEnd();



    glPopMatrix();



    i15+=0.1f;



    glLoadIdentity();


    ///Flag start
    i16;
    	 x=0.42f;  y=-0.15f;  radius =.02f;

	 triangleAmount = 20; //# of triangles used to draw circle
	 lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_QUADS);                  ///Flag Green
	glColor3f(.0f, 1.0f, 0.0f);
	glVertex2f(0.37, -.1);
    glVertex2f(0.37, -0.2);
    glVertex2f(0.49, -0.2);
    glVertex2f(0.49, -.1);
    glEnd();


     glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(x, y); // center of circle
		for(i16 = 0; i16 <= triangleAmount;i16++) {
			glVertex2f(
		        x + (radius * cos(i16 *  twicePi / triangleAmount)),
			    y + (radius * sin(i16 * twicePi / triangleAmount))
			);
		}

	glEnd();

	glBegin(GL_QUADS);                  ///Stand
	glColor3ub(204, 102, 0);
	glVertex2f( 0.36f, -0.1f);
	glVertex2f( 0.36f, -0.4f);
	glVertex2f( 0.37f, -0.4f);
	glVertex2f( 0.37f, -0.1f);
    glEnd();

    ///Flag End
    ///Flag End



glLoadIdentity();











    //road
    glBegin(GL_QUADS);
    glColor3ub(51, 51, 51);

    glVertex2f(-1,-.5);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-.5);

    glEnd();
//road's middle lines
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();

    //copying road's middle line
    //1
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //2
    glTranslatef(.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //3
    glTranslatef(.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //4
    glTranslatef(.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //5
    glTranslatef(1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //left side
    //6
    glTranslatef(-.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //7
    glTranslatef(-.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //8
    glTranslatef(-.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //9
    glTranslatef(-.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //10
    glTranslatef(-1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);

    glVertex2f(-.056,-.74);
    glVertex2f(-.05,-.76);
    glVertex2f(.05,-.76);
    glVertex2f(.044,-.74);
    glEnd();
    glLoadIdentity();

    //road upper side border
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(-1,-.48);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,-.48);
    glEnd();

    //Starting drawing light

    //road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light

//copy light 2
    glTranslatef(.45,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

    //copy light 3
     glTranslatef(.9,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

    //copy light 4
     glTranslatef(-.45,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

    //copy road light 5
     glTranslatef(-.9,0,0);
//road light foot
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 102);

    glVertex2f(-.015,-.48);
    glVertex2f(.015,-.48);
    glVertex2f(.015,-.46);
    glVertex2f(.01,-.45);
    glVertex2f(-.01,-.45);
    glVertex2f(-.015,-.46);
    glEnd();

    //road light stand
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);

    glVertex2f(.005,-.45);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.45);
    glEnd();

    //light lamp left part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();

    //lamp light right part
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
//end 1st road light
    glLoadIdentity();

//new car
glPushMatrix();
glTranslatef(position_car2,0.0f, 0.0f);

glTranslatef(0.9f, 0.05f, 0.0f);
glScalef(2.0,1.8,0);

 glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f,-0.33f);
    glVertex2f(-0.8f,-0.30f);
    glVertex2f(-0.9f,-0.30f);
    glVertex2f(-0.9f,-0.33f);
    glEnd();

   glColor3ub(13, 13, 13);
    glBegin(GL_QUADS);
    glVertex2f(-0.82f,-0.30f);
    glVertex2f(-0.83f,-0.28f);
    glVertex2f(-0.87f,-0.28f);
    glVertex2f(-0.88f,-0.30f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.824f,-0.298f);
    glVertex2f(-0.832f,-0.282f);
    glVertex2f(-0.848f,-0.282f);
    glVertex2f(-0.848f,-0.298f);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.851f,-0.298f);
    glVertex2f(-0.851f,-0.282f);
    glVertex2f(-0.868f,-0.282f);
    glVertex2f(-0.876f,-0.298f);
    glEnd();

     i;
    j;
    x = -0.82f; y = -0.33f; radius = 0.01f; GLfloat a = -0.88f; GLfloat b = -0.33f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;

    glColor3ub(13, 13, 13);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
        }
    glEnd();

    glColor3ub(13, 13, 13);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount;j++)
        {
            glVertex2f(a + (radius * cos(j *  twicePi / triangleAmount)),b + (radius * sin(j * twicePi / triangleAmount)));
        }
    glEnd();

glPopMatrix();

glLoadIdentity();

//end new car
//blue car
glPushMatrix();
glTranslatef(position_jip2,0.0f, 0.0f);

glScalef(-.4,.4,0);
glTranslatef(-0.4f, -1.4f, 0.0f);

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
 i;
	 x=.1f;  y=-.05f;  radius =.06f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
 j;
	 x=-.23f;  y=-.05f;  radius =.06f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j*  twicePi / triangleAmount)),
			    y + (radius * sin(j* twicePi / triangleAmount))
			);
		}
glEnd();
 int k;
	 x=.1f;  y=-.05f;  radius =.03f;
	 triangleAmount2 = 20;
	 twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi2 / triangleAmount2)),
			    y + (radius * sin(k * twicePi2 / triangleAmount2))
			);
		}
glEnd();
int l;
	 x=-.23f;  y=-.05f;  radius =.03f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l*  twicePi / triangleAmount)),
			    y + (radius * sin(l* twicePi / triangleAmount))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();

//end blue car

//red car
glPushMatrix();
glTranslatef(position_car3,0.0f, 0.0f);

    glScalef(-.5,.4,0);
glTranslatef(-1.7f, -1.5f, 0.0f);

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
 i;
	 x8=-.06f;  y8=0.0f;  radius8 =.06f;
	 triangleAmount8 = 20;
	 twicePi8 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
glEnd();
 i;
	 x=.18f;  y=0.0f;  radius =.06f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();
 r;
	 x=-.06f;  y=0.0f;  radius =.03f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(r = 0; r <= triangleAmount;r++) {
			glVertex2f(
		            x + (radius * cos(r *  twicePi / triangleAmount)),
			    y + (radius * sin(r * twicePi / triangleAmount))
			);
		}
glEnd();
int s;
	 x=.18f;  y=0.0f;  radius =0.03f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount;s++) {
			glVertex2f(
		            x + (radius * cos(s*  twicePi / triangleAmount)),
			    y + (radius * sin(s* twicePi / triangleAmount))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();
//end red car

//bus
glPushMatrix();
glTranslatef(position_bus2,0.0f, 0.0f);

glScalef(-.2,.3,0);
glTranslatef(.7f, -2.5f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(-.6,0.25);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.4);
    glVertex2f(-0.6,0.4);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 255);
    glVertex2f(-.6,0.4);
    glVertex2f(0.6,0.4);
    glVertex2f(0.6,0.7);
    glVertex2f(-.6,0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2f(-.6,0.4);
    glVertex2f(-.5,0.4);
    glVertex2f(-.5,0.7);
    glVertex2f(-.6,0.7);


    glVertex2f(-.4,0.5);
    glVertex2f(-.3,0.5);
    glVertex2f(-.3,0.6);
    glVertex2f(-.4,0.6);

    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glVertex2f(-.2,0.5);
    glVertex2f(-.1,0.5);
    glVertex2f(-.1,0.6);
    glVertex2f(-.2,0.6);
    glEnd();

    glTranslatef(-.25,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glEnd();
     glLoadIdentity();
     glTranslatef(position_bus2,0.0f, 0.0f);

     glScalef(-.2,.3,0);
glTranslatef(.7f, -2.5f, 0.0f);

	x=.3f; y=.25f; radius =.11f;
	glColor3f(0,0,0);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glColor3f(0,0,0);
    j;

    x=-.3f;  y=.25f;  radius =.11f;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius* sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

     x=.3f;  y=.25f;  radius =.06f;
	glColor3f(1,1,1);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glColor3f(1,1,1);
    i;

     x=-.3f;  y=.25f;  radius =.06f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius4 = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();

	glLoadIdentity();

//traffic light
glTranslatef(0.0f, -0.38f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.91f,-0.4f);
glVertex2f(-0.9f,-0.4f);
glVertex2f(-0.9f,0.01f);
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
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(-0.91f,-0.12f);
glEnd();

glLoadIdentity();
glTranslatef(0.0f, -0.38f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.91f,-0.4f);
glVertex2f(0.9f,-0.4f);
glVertex2f(0.9f,0.01f);
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
glEnd();

glPointSize(8);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(0.9f,-0.12f);
glEnd();

glLoadIdentity();
//end traffic light

//bus
glPushMatrix();
glTranslatef(position_bus1,0.0f, 0.0f);

glScalef(.2,.3,0);
glTranslatef(1.0f, -3.0f, 0.0f);

glBegin(GL_QUADS);
    glColor3ub(0, 48, 48);
    glVertex2f(-.6,0.25);
    glVertex2f(0.6,0.25);
    glVertex2f(0.6,0.4);
    glVertex2f(-0.6,0.4);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 255);
    glVertex2f(-.6,0.4);
    glVertex2f(0.6,0.4);
    glVertex2f(0.6,0.7);
    glVertex2f(-.6,0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 48, 48);
    glVertex2f(-.6,0.4);
    glVertex2f(-.5,0.4);
    glVertex2f(-.5,0.7);
    glVertex2f(-.6,0.7);


    glVertex2f(-.4,0.5);
    glVertex2f(-.3,0.5);
    glVertex2f(-.3,0.6);
    glVertex2f(-.4,0.6);

    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glVertex2f(-.2,0.5);
    glVertex2f(-.1,0.5);
    glVertex2f(-.1,0.6);
    glVertex2f(-.2,0.6);
    glEnd();

    glTranslatef(-.25,0,0);
    glBegin(GL_QUADS);
    glVertex2f(.4,0.5);
    glVertex2f(.3,0.5);
    glVertex2f(.3,0.6);
    glVertex2f(.4,0.6);

    glEnd();
     glLoadIdentity();
     glTranslatef(position_bus1,0.0f, 0.0f);

     glScalef(.2,.3,0);
glTranslatef(1.0f, -3.0f, 0.0f);

	x=.3f; y=.25f; radius =.11f;
	glColor3f(0,0,0);
	i;
	triangleAmount = 20;
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glColor3f(0,0,0);
    i;

    x=-.3f;  y=.25f;  radius =.11f;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

     x=.3f;  y=.25f;  radius =.06f;
	glColor3f(1,1,1);
	i;
	triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glColor3f(1,1,1);
    i;

     x=-.3f;  y=.25f;  radius =.06f;
	 triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius4 = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius* sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glPopMatrix();
	glLoadIdentity();

	//end bus

glPushMatrix();
glTranslatef(position_jip1,0.0f, 0.0f);

glScalef(.4,.4,0);
glTranslatef(-2.0f, -2.2f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(117, 102, 2);
glVertex2f(-.23,.3);
glVertex2f(-.38,.06);
glVertex2f(.12,.06);
glVertex2f(.12,.3);

glColor3ub(117, 102, 2);
glVertex2f(-.38,.06);
glVertex2f(-.38,-.06);
glVertex2f(.12,-.06);
glVertex2f(.12,.06);

glColor3ub(117, 102, 2);
glVertex2f(.12,-.06);
glVertex2f(.2,-.06);
glVertex2f(.19,.06);
glVertex2f(.12,.06);

glColor3ub(117, 102, 2);
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
    i;
	 x=.1f;  y=-.05f; radius =.06f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
glEnd();
    i;
	x=-.23f; y=-.05f; radius =.06f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();
    k;
	x=.1f; y=-.05f; radius =.03f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
glEnd();
    i;
	x=-.23f; y=-.05f; radius =.03f;
	triangleAmount = 20;
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i*  twicePi / triangleAmount)),
			    y + (radius * sin(i* twicePi / triangleAmount))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();

    //red car
glPushMatrix();
glTranslatef(position_car1,0.0f, 0.0f);

    glScalef(.5,.4,0);
glTranslatef(-0.3f, -2.4f, 0.0f);

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
	 x8=-.06f;  y8=0.0f;  radius8 =.06f;
	 triangleAmount8 = 20;
	 twicePi8 = 2.0f * PI;
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
	 x9=.18f;  y9=0.0f;  radius9 =.06f;
	 triangleAmount9 = 20;
	 twicePi9 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9);
		for(q = 0; q <= triangleAmount9;q++) {
			glVertex2f(
		            x9 + (radius9 * cos(q*  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(q* twicePi9 / triangleAmount9))
			);
		}
glEnd();
 r;
	 x=-.06f;  y=0.0f;  radius =.03f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(r = 0; r <= triangleAmount;r++) {
			glVertex2f(
		            x + (radius * cos(r *  twicePi / triangleAmount)),
			    y + (radius * sin(r * twicePi / triangleAmount))
			);
		}
glEnd();
 s;
	 x=.18f;  y=0.0f;  radius=0.03f;
	 triangleAmount = 20;
	 twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		glColor3ub(255, 255,255);
		for(s = 0; s <= triangleAmount;s++) {
			glVertex2f(
		            x + (radius * cos(s*  twicePi / triangleAmount)),
			    y + (radius * sin(s* twicePi / triangleAmount))
			);
		}
glEnd();

glPopMatrix();
glLoadIdentity();
//end red car

glFlush();

glutTimerFunc(1500,demo_night,0);
glFlush();
}

void demo_day()
{
       glutDisplayFunc(day);
}

void displayTraficGreen(){
glPointSize(8);
    glutDisplayFunc(demo_day);

    glBegin(GL_POINTS);
    glColor3f(0,1,0);
    glVertex2f(-0.91f,-0.12f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(day);
	//soundTrain();
	//soundCar();

	//glutKeyboardFunc(TraficLight);
    glutTimerFunc(100, update_plane, 0);
	glutTimerFunc(100, update_bird, 0);
	glutTimerFunc(100, update_train, 0);
	glutTimerFunc(100, update_jip1, 0);
	glutTimerFunc(100, update_bus1, 0);
	glutTimerFunc(100, update_car1, 0);
	glutTimerFunc(100, update_car2, 0);
	glutTimerFunc(100, update_jip2, 0);
	glutTimerFunc(100, update_car3, 0);
    glutTimerFunc(100, update_bus2, 0);

    glutTimerFunc(100, update_ship, 0);

    glutTimerFunc(100, update_rain, 0);
    glutSpecialFunc(SpecialInput_train);
    glutMouseFunc(handleMouse_LeftCar);
    glutKeyboardFunc(handleKeypress_RightCar);

    glutIdleFunc(Idle);

	glutMainLoop();
	return 0;
}
