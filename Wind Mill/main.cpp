#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;


void Idle()
{
    glutPostRedisplay();
}
void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



    glPushMatrix();
    glTranslatef(0,.2,0);
    glRotatef(i,0,0.0,0.1);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.4f);
    glVertex2f( 0.0f, 0.4f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, -0.4f);
    glVertex2f( 0.0f, -0.4f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.4f, -0.15f);
    glVertex2f( 0.4f, 0.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.4f, 0.15f);
    glVertex2f( -0.4f, 0.0f);

    glEnd();

    glPopMatrix();

    i-=0.1f;

glLoadIdentity();

glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.2f);
    glVertex2f( -0.05f, -0.4f);
    glVertex2f( 0.05f, -0.4f);

    glEnd();

//glBegin(GL_LINES);
//glColor3ub(0,0,0);
//glVertex2f(-1.0f,0.0f);
//glVertex2f(1.0f,0.0f);
//glColor3ub(0, 0, 0);
//glVertex2f(0.0f,1.0f);
//glVertex2f(0.0f,-1.0f);
//glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//

    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;

    }
