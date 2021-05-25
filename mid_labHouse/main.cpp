#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(131, 211, 235);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(1.0f,1.0f);
    glVertex2f(-1.0f,1.0f);

    glColor3ub(81, 181, 78);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,0.0f);


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(145, 82, 33);
    glVertex2f(-0.4f,0.5f);
    glVertex2f(-0.6f,0.1f);
    glVertex2f(0.0f,0.1f);
    glVertex2f(0.2f,0.5f);

    glColor3ub(189, 130, 58);
    glVertex2f(-0.39f,0.48f);
    glVertex2f(-0.57f,0.12f);
    glVertex2f(0.0f,0.13f);
    glVertex2f(0.17f,0.48f);

    glColor3ub(207, 50, 50);
    glVertex2f(-0.57f,0.1f);
    glVertex2f(-0.57f,-0.25f);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(0.0f,0.1f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.57f,-0.25f);
    glVertex2f(-0.55f,-0.26f);
    glVertex2f(-0.55f,0.1f);
    glVertex2f(-0.57f,0.1f);

    glColor3ub(0, 0, 0);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(0.0f,0.1f);
    glVertex2f(-0.02f,0.1f);
    glVertex2f(-0.02f,-0.406f);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.23f,-0.35f);
    glVertex2f(-0.23f,0.1f);
    glVertex2f(-0.25f,0.1f);
    glVertex2f(-0.25f,-0.34f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.57f,-0.27f);
    glVertex2f(0.0f,-0.42f);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(-0.57f,-0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(0.0f,-0.42f);
    glVertex2f(0.35f,-0.22f);
    glVertex2f(0.35f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(207, 50, 50);
    glVertex2f(0.2f,0.5f);
    glVertex2f(0.0f,0.1f);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(0.35f,-0.2f);
    glVertex2f(0.35f,0.1f);
    glEnd();

    glBegin(GL_QUADS);
    //front windows
    glColor3ub(76, 94, 80);
    glVertex2f(0.18f,0.0f);
    glVertex2f(0.18f,-0.3f);
    glVertex2f(0.22f,-0.28f);
    glVertex2f(0.22f,0.0f);

    glColor3ub(76, 94, 80);
    glVertex2f(0.25f,0.3f);
    glVertex2f(0.25f,0.0f);
    glVertex2f(0.29f,0.0f);
    glVertex2f(0.29f,0.2f);

    glColor3ub(76, 94, 80);
    glVertex2f(0.1f,0.2f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.15f,0.0f);
    glVertex2f(0.15f,0.3f);

    glEnd();


    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//


    glutMainLoop();
    return 0;



    }
