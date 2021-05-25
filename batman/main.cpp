#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



void myDisplay(void)
{

    glBegin(GL_LINES);
//glColor3f(0,0,0);
glColor3ub(0,0,0);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);

//glColor3f(0,0,1);
glColor3ub(20, 33, 219);
glVertex2f(0.0f,1.0f);
glVertex2f(0.0f,-1.0f);
glEnd();
    /********************************************************************************************************
    *
    *                           BATMAN - ARKAM CITY :D
    *
    *********************************************************************************************************/

    /*  BATMAN HEAD */

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(4.0);

    //left horn - dark blue

    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(150,300);
    glVertex2i(170,300);
    glVertex2i(170,360);
    glVertex2i(150,360);
    glEnd();
    glFlush ();

    //right horn - light blue
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(190,300);
    glVertex2i(210,300);
    glVertex2i(210,360);
    glVertex2i(190,360);

    glEnd();
    glFlush ();

    //middle eyes - light blue
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(170,300);
    glVertex2i(190,300);
    glVertex2i(190,330);
    glVertex2i(170,330);

    glEnd();
    glFlush ();

    //middle eyes - skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.67,0.40,0.07 );
    glVertex2i(150,300);
    glVertex2i(170,300);
    glVertex2i(170,280);
    glVertex2i(150,280);
    glEnd();
    glFlush ();

    //right skin - skin color
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(170,300);
    glVertex2i(210,300);
    glVertex2i(210,280);
    glVertex2i(170,280);

    glEnd();
    glFlush ();



    /*  BATMAN BODY */

    //first layer
    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(120,280);
    glVertex2i(240,280);
    glVertex2i(240,250);
    glVertex2i(120,250);

    glEnd();
    glFlush ();

    //second layer
    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(100,250);
    glVertex2i(260,250);
    glVertex2i(260,225);
    glVertex2i(100,225);

    glEnd();
    glFlush();

    /* hand */

    //hands hand
    glBegin(GL_QUADS);
    glColor3f ( 0.97,0.61,0.20 );
    glVertex2i(100,225);
    glVertex2i(260,225);
    glVertex2i(260,200);
    glVertex2i(100,200);

    glEnd();
    glFlush ();

    //third layer - gray color
    glBegin(GL_QUADS);
    glColor3f ( 0.47,0.47,0.47 );
    glVertex2i(120,225);
    glVertex2i(240,225);
    glVertex2i(240,200);
    glVertex2i(120,200);

    glEnd();
    glFlush ();


    //glopss blue color
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(100,200);
    glVertex2i(260,200);
    glVertex2i(260,175);
    glVertex2i(100,175);

    glEnd();
    glFlush ();


    /*  BATMAN BELT COLOR - YELLOW   */

    // batman belt
    glBegin(GL_QUADS);
    glColor3f ( 0.99,0.93,0.13 );
    glVertex2i(120,200);
    glVertex2i(240,200);
    glVertex2i(240,175);
    glVertex2i(120,175);

    glEnd();
    glFlush ();


    /*  BATMAN WINGS COLOR - BLACK   */

    // BATMAN WINGS
    glBegin(GL_QUADS);
    glColor3f ( 0.0 ,0.0 ,0.0 );
    glVertex2i(100,175);
    glVertex2i(260,175);
    glVertex2i(260,110);
    glVertex2i(100,110);

    glEnd();
    glFlush ();


    /*  BATMAN UNDERWARE    */
    //BATMAN UNDERWARE
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(120,175);
    glVertex2i(240,175);
    glVertex2i(240,150);
    glVertex2i(120,150);

    glEnd();
    glFlush ();




    /*  BATMAN LEGS  */
    //batman left leg
    glBegin(GL_QUADS);
    glColor3f ( 0.4,0.4,0.4 );
    glVertex2i(120,150);
    glVertex2i(170,150);
    glVertex2i(170,70);
    glVertex2i(120,70);

    glEnd();
    glFlush ();

    //batman right leg
    glBegin(GL_QUADS);
    glColor3f ( 0.4,0.4,0.4 );
    glVertex2i(240,150);
    glVertex2i(190,150);
    glVertex2i(190,70);
    glVertex2i(240,70);

    glEnd();
    glFlush ();

    //BATMAN UNDERWARE DARK AREA
    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.04,0.12 );
    glVertex2i(120,175);
    glVertex2i(145,175);
    glVertex2i(145,150);
    glVertex2i(120,150);

    glEnd();
    glFlush ();

    //batman uderware bottom area
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(145,150);
    glVertex2i(215,150);
    glVertex2i(215,130);
    glVertex2i(145,130);

    glEnd();
    glFlush ();


    /*  BATMAN LEGS LEFT SHADOW */
    //batman left leg shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(120,150);
    glVertex2i(145,150);
    glVertex2i(145,70);
    glVertex2i(120,70);

    glEnd();
    glFlush ();

    /*  BATMAN LEGS RIGHT SHADOW */
    //batman right leg shadow
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(215,130);
    glVertex2i(190,130);
    glVertex2i(190,70);
    glVertex2i(215,70);

    glEnd();
    glFlush ();


    /*  BATMAN LEFT LEG SHOE */
    //batman right leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(120,70);
    glVertex2i(170,70);
    glVertex2i(170,50);
    glVertex2i(120,50);

    glEnd();
    glFlush ();

    //batman left shadow leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(120,70);
    glVertex2i(145,70);
    glVertex2i(145,50);
    glVertex2i(120,50);

    glEnd();
    glFlush ();


    /*  BATMAN RIGHT LEG SHOE */
    //batman right leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.04,0.11,0.30 );
    glVertex2i(190,70);
    glVertex2i(240,70);
    glVertex2i(240,50);
    glVertex2i(190,50);

    glEnd();
    glFlush ();

    //batman left shadow leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.02,0.05,0.12 );
    glVertex2i(190,70);
    glVertex2i(215,70);
    glVertex2i(215,50);
    glVertex2i(190,50);

    glEnd();
    glFlush ();


    /*  BATMAN LOGO */
    //batman left shadow leg show
    glBegin(GL_QUADS);
    glColor3f ( 0.2,0.2,0.2 );
    glVertex2i(135,250);
    glVertex2i(225,250);
    glVertex2i(225,225);
    glVertex2i(135,225);

    glEnd();
    glFlush ();



}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1024, 768);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Batman Vs nishat");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}



