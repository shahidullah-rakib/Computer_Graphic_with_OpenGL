#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Background Color
    //sky
/*    glBegin(GL_QUADS);
    glColor3ub(77, 184, 200);

    glVertex2f(-1,1);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,1);

    glEnd();*/




  //starting buildings structure


//2nd left side building
    glBegin(GL_QUADS);
    glColor3ub(0, 78, 102);
    glVertex2f(-0.92f,0.3f);
    glVertex2f(-0.92f,0.5f);
    glVertex2f(-0.95f,0.5f);
    glVertex2f(-0.95f,0.3f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(0, 153, 204);
    glVertex2f(-0.55f,-0.5f);
    glVertex2f(-0.55f,0.5f);
    glVertex2f(-0.92f,0.5f);
    glVertex2f(-0.92f,0.3f);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.8f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(242, 242, 242);

    glVertex2f(-0.6f,0.5f);
    glVertex2f(-0.6f,-0.35f);

    glVertex2f(-0.65f,0.5f);
    glVertex2f(-0.65f,-0.35f);

    glVertex2f(-0.7f,0.5f);
    glVertex2f(-0.7f,-0.35f);

    glVertex2f(-0.75f,0.5f);
    glVertex2f(-0.75f,-0.35f);

    glVertex2f(-0.8f,0.5f);
    glVertex2f(-0.8f,0.3f);

        glVertex2f(-0.85f,0.5f);
    glVertex2f(-0.85f,0.3f);

    glEnd();


    //1st left side building

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(-1.0f,-0.5f);
    glEnd();

   glPointSize(2);
   glBegin(GL_POINTS);
   glColor3ub(0,0,0);
   glVertex2f(-0.95f,0.26f);
   glVertex2f(-0.9f,0.26f);
   glVertex2f(-0.85f,0.26f);

   glVertex2f(-0.95f,0.2f);
   glVertex2f(-0.9f,0.2f);
   glVertex2f(-0.85f,0.2f);

   glVertex2f(-0.95f,0.14f);
   glVertex2f(-0.9f,0.14f);
   glVertex2f(-0.85f,0.14f);

   glVertex2f(-0.95f,0.08f);
   glVertex2f(-0.9f,0.08f);
   glVertex2f(-0.85f,0.08f);

   glVertex2f(-0.95f,0.02f);
   glVertex2f(-0.9f,0.02f);
   glVertex2f(-0.85f,0.02f);

   glVertex2f(-0.95f,-0.04f);
   glVertex2f(-0.9f,-0.04f);
   glVertex2f(-0.85f,-0.04f);

   glVertex2f(-0.95f,-0.1f);
   glVertex2f(-0.9f,-0.1f);
   glVertex2f(-0.85f,-0.1f);

   glVertex2f(-0.95f,-0.16f);
   glVertex2f(-0.9f,-0.16f);
   glVertex2f(-0.85f,-0.16f);

   glVertex2f(-0.95f,-0.22f);
   glVertex2f(-0.9f,-0.22);
   glVertex2f(-0.85f,-0.22f);

    glVertex2f(-0.95f,-0.28f);
   glVertex2f(-0.9f,-0.28);
   glVertex2f(-0.85f,-0.28f);

    glVertex2f(-0.95f,-0.34f);
   glVertex2f(-0.9f,-0.34);
   glVertex2f(-0.85f,-0.34f);

    glVertex2f(-0.95f,-0.4f);
   glVertex2f(-0.9f,-0.4);
   glVertex2f(-0.85f,-0.4f);


   glEnd();

//3rd building front light ash

    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191);
    glVertex2f(-0.35f,-0.5f);
    glVertex2f(-0.35f,0.2f);
    glVertex2f(-0.55f,0.2f);
    glVertex2f(-0.55f,-0.5f);
    glEnd();


//4th building 1st black building from left side

   glTranslatef(-1.01f,-0.35f, 0.0f);
   glScalef(-0.7,0.3,0);
   glBegin(GL_QUADS);
   glColor3ub(89, 89, 89);
   glVertex2f(-0.32f,-0.5f);
   glVertex2f(-0.32f,0.1f);
   glVertex2f(-0.8f,0.1f);
   glVertex2f(-0.8f,-0.5f);
   glEnd();

   glPointSize(3);
   glBegin(GL_POINTS);
   glColor3ub(230, 230, 230);
   glVertex2f(-0.72f,-0.1f);
   glVertex2f(-0.62f,-0.1f);
   glVertex2f(-0.52f,-0.1f);
   glVertex2f(-0.42f,-0.1f);

     glVertex2f(-0.72f,-0.29f);
   glVertex2f(-0.62f,-0.29f);
   glVertex2f(-0.52f,-0.29f);
   glVertex2f(-0.42f,-0.29f);

   glEnd();

//5th building 2nd black building

   glLoadIdentity();
   glBegin(GL_POLYGON);
   glColor3ub(89, 89, 89);
   glVertex2f(0.0f,-0.5f);
   glVertex2f(0.0f,0.2f);
   glVertex2f(-0.1f,0.2f);
   glVertex2f(-0.2f,0.2f);
   glVertex2f(-0.4f,0.1f);
   glVertex2f(-0.4f,-0.5f);

   glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2f(0.22f,-0.5f);
    glVertex2f(0.22f,0.45f);
    glVertex2f(0.01f,0.48f);
    glVertex2f(0.0f,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(0.03f,0.47f);
    glVertex2f(0.03f,0.54f);

    glVertex2f(0.04f,0.47f);
    glVertex2f(0.04f,0.54f);

    glVertex2f(0.05f,0.47f);
    glVertex2f(0.05f,0.54f);
    glEnd();

    glLoadIdentity();
    glPointSize(3);
   glBegin(GL_POINTS);
   glColor3ub(230, 230, 230);
   glVertex2f(-0.08f,0.17f);
   glVertex2f(-0.16f,0.17f);
   glVertex2f(-0.24f,0.17f);


    glVertex2f(-0.08f,0.1f);
   glVertex2f(-0.16f,0.1f);
   glVertex2f(-0.24f,0.1f);
   glVertex2f(-0.32f,0.1f);

   glVertex2f(-0.08f,0.03f);
   glVertex2f(-0.16f,0.03f);
   glVertex2f(-0.24f,0.03f);
   glVertex2f(-0.32f,0.03f);

   glVertex2f(-0.08f,-0.05f);
   glVertex2f(-0.16f,-0.05f);
   glVertex2f(-0.24f,-0.05f);
   glVertex2f(-0.32f,-0.05f);

   glVertex2f(-0.08f,-0.12f);
   glVertex2f(-0.16f,-0.12f);
   glVertex2f(-0.24f,-0.12f);
   glVertex2f(-0.32f,-0.12f);

   glVertex2f(-0.08f,-0.19f);
   glVertex2f(-0.16f,-0.19f);
   glVertex2f(-0.24f,-0.19f);
   glVertex2f(-0.32f,-0.19f);

   glVertex2f(-0.08f,-0.26f);
   glVertex2f(-0.16f,-0.26f);
   glVertex2f(-0.24f,-0.26f);
   glVertex2f(-0.32f,-0.26f);

   glVertex2f(-0.08f,-0.33f);
   glVertex2f(-0.16f,-0.33f);
   glVertex2f(-0.24f,-0.33f);
   glVertex2f(-0.32f,-0.33f);

   glVertex2f(-0.08f,-0.4f);
   glVertex2f(-0.16f,-0.4f);
   glVertex2f(-0.24f,-0.4f);
   glVertex2f(-0.32f,-0.4f);

   glEnd();





//BLUE BUILDING

   glBegin(GL_POLYGON);
   glColor3ub(77, 255, 255);
   glVertex2f(0.45f,-0.5f);
   glVertex2f(0.45f,0.5f);
   glVertex2f(0.25f,0.5f);
   glVertex2f(0.25,-0.3f);
   glVertex2f(0.2f,-0.3f);
   glVertex2f(0.2f,-0.5f);
   glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 230, 230);
    glVertex2f(0.45f,0.5f);
    glVertex2f(0.25f,0.5f);
    glVertex2f(0.25f,0.47f);
    glVertex2f(0.45f,0.47f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.45f,-0.3f);

    glVertex2f(0.25f,0.45f);
    glVertex2f(0.45f,0.45f);

    glVertex2f(0.25f,0.42f);
    glVertex2f(0.45f,0.42f);

    glVertex2f(0.25f,0.39f);
    glVertex2f(0.45f,0.39f);

    glVertex2f(0.25f,0.36f);
    glVertex2f(0.45f,0.36f);

    glVertex2f(0.25f,0.33f);
    glVertex2f(0.45f,0.33f);

    glVertex2f(0.25f,0.30f);
    glVertex2f(0.45f,0.30f);

    glVertex2f(0.25f,0.27f);
    glVertex2f(0.45f,0.27f);

    glVertex2f(0.25f,0.24f);
    glVertex2f(0.45f,0.24f);

    glVertex2f(0.25f,0.21f);
    glVertex2f(0.45f,0.21f);

    glVertex2f(0.25f,0.18f);
    glVertex2f(0.45f,0.18f);

    glVertex2f(0.25f,0.15f);
    glVertex2f(0.45f,0.15f);

    glVertex2f(0.25f,0.12f);
    glVertex2f(0.45f,0.12f);

    glVertex2f(0.25f,0.09f);
    glVertex2f(0.45f,0.09f);

    glVertex2f(0.25f,0.06f);
    glVertex2f(0.45f,0.06f);

    glVertex2f(0.25f,0.03f);
    glVertex2f(0.45f,0.03f);

    glVertex2f(0.25f,0.0f);
    glVertex2f(0.45f,0.0f);

    glVertex2f(0.25f,-0.03f);
    glVertex2f(0.45f,-0.03f);

    glVertex2f(0.25f,-0.06f);
    glVertex2f(0.45f,-0.06f);

    glVertex2f(0.25f,-0.09f);
    glVertex2f(0.45f,-0.09f);

    glVertex2f(0.25f,-0.12f);
    glVertex2f(0.45f,-0.12f);


    glVertex2f(0.25f,-0.30f);
    glVertex2f(0.45f,-0.30f);

    glVertex2f(0.25f,-0.27f);
    glVertex2f(0.45f,-0.27f);

    glVertex2f(0.25f,-0.24f);
    glVertex2f(0.45f,-0.24f);

    glVertex2f(0.25f,-0.21f);
    glVertex2f(0.45f,-0.21f);

    glVertex2f(0.25f,-0.18f);
    glVertex2f(0.45f,-0.18f);

    glVertex2f(0.25f,-0.15f);
    glVertex2f(0.45f,-0.15f);

    glEnd();


     glBegin(GL_QUADS);
     glVertex2f(0.25f,-0.5f);
     glVertex2f(0.25f,-0.4f);
     glVertex2f(0.28f,-0.4f);
     glVertex2f(0.28f,-0.5f);
     glEnd();





      glLoadIdentity();
      glTranslatef(0.1,0,0);
     glBegin(GL_QUADS);
     glVertex2f(0.25f,-0.5f);
     glVertex2f(0.25f,-0.4f);
     glVertex2f(0.28f,-0.4f);
     glVertex2f(0.28f,-0.5f);
     glEnd();


     glLoadIdentity();
     glBegin(GL_QUADS);
     glVertex2f(0.45f,-0.3f);
     glVertex2f(0.2f,-0.3f);
     glVertex2f(0.2f,-0.37f);
     glVertex2f(0.45f,-0.37f);
     glEnd();

//blue building end



    glBegin(GL_QUADS);
    glColor3ub(0, 77, 0);
    glVertex2f(0.67f,-0.5f);
    glVertex2f(0.67f,0.5f);
    glVertex2f(0.48f,0.3f);
    glVertex2f(0.48f,-0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.74f,-0.5f);
    glVertex2f(0.71f,0.5f);
    glVertex2f(0.67f,-0.5f);
    glEnd();


       glTranslatef(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.79f,0.3f);
     glVertex2f(0.67f,0.3f);
     glVertex2f(0.67f,0.27f);
     glVertex2f(0.79f,0.27f);
    glEnd();


    glLoadIdentity();
     glTranslatef(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.79f,0.3f);
     glVertex2f(0.67f,0.3f);
     glVertex2f(0.67f,0.27f);
     glVertex2f(0.79f,0.27f);
    glEnd();


     glLoadIdentity();
     glTranslatef(0,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.79f,0.3f);
     glVertex2f(0.67f,0.3f);
     glVertex2f(0.67f,0.27f);
     glVertex2f(0.79f,0.27f);
    glEnd();

       glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.79f,0.3f);
     glVertex2f(0.67f,0.3f);
     glVertex2f(0.67f,0.27f);
     glVertex2f(0.79f,0.27f);
    glEnd();





    glLoadIdentity();
    glTranslatef(0.26,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 77, 0);
    glVertex2f(0.67f,-0.5f);
    glVertex2f(0.67f,0.3f);
    glVertex2f(0.48f,0.5f);
    glVertex2f(0.48f,-0.5f);
    glEnd();

    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.95f,0.5f);
    glVertex2f(-0.95f,0.75f);
    glVertex2f(-0.73f,0.75f);
    glVertex2f(-0.73f,0.63f);
    glVertex2f(-0.69f,0.63f);
    glVertex2f(-0.69f,0.5f);




    glEnd();








    glLoadIdentity();

/*    //road
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

*/





                glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
