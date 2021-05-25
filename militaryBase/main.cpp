#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include <GL/gl.h>
#include <iostream>

using namespace std;

float _angle = 0.0f;
float move1=0.4f;
float move2=0.2f;
float move3=0.9f;
float move4=-0.5f;
float move5=-0.2f;
float move6=0.9f;
float move7=0.9f;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;


void Ground(){
    //Ground
    glBegin(GL_QUADS);
    glColor3f(0.741f, 0.718f, 0.420f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();
}



void Ground2(){
    //Sky
    glBegin(GL_QUADS);
    glColor3f(0.000, 0.749, 1.000);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(1.0f, 0.65f);
    glVertex2f(1.0f, 1.0f);
    glEnd();

    //Hills 1
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-0.9f, 0.7f);
    glVertex2f(-0.95f, 0.74f);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.63f, 0.75f);
    glVertex2f(-0.55f, 0.67f);
    glVertex2f(-0.5f, 0.65f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.92f, 0.65f);
    glVertex2f(-0.87f, 0.65f);
    glVertex2f(-0.85f, 0.79f);
    glEnd();
    //Shadow 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.68f, 0.65f);
    glVertex2f(-0.64f, 0.65f);
    glVertex2f(-0.75f, 0.8f);
    glEnd();

    //Hills 2
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.65f, 0.65f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.53f, 0.83f);
    glVertex2f(-0.5f, 0.84f);
    glVertex2f(-0.4f, 0.8f);
    glVertex2f(-0.36f, 0.75f);
    glVertex2f(-0.3f, 0.72f);
    glVertex2f(-0.2f, 0.65f);
    glEnd();
    //Shadow 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.52f, 0.65f);
    glVertex2f(-0.39f, 0.65f);
    glVertex2f(-0.5f, 0.8f);
    glEnd();

    //Hills 3
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-0.2f, 0.65f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(-0.06f, 0.8f);
    glVertex2f(-0.0f, 0.8f);
    glVertex2f(0.03f, 0.9f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.15f, 0.85f);
    glVertex2f(0.2f, 0.83f);
    glVertex2f(0.27f, 0.73f);
    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.4f, 0.65f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(-0.04f, 0.65f);
    glVertex2f(0.03f, 0.65f);
    glVertex2f(0.03f, 0.9f);
    glEnd();
    //Shadow 3
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.22f, 0.65f);
    glVertex2f(0.29f, 0.65f);
    glVertex2f(0.1f, 0.9f);
    glEnd();

    //Hills 4
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(0.3f, 0.65f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.44f, 0.8f);
    glVertex2f(0.47f, 0.75f);
    glVertex2f(0.5f, 0.75f);
    glVertex2f(0.56f, 0.84f);
    glVertex2f(0.6f, 0.86f);
    glVertex2f(0.7f, 0.88f);
    glVertex2f(0.75f, 0.75f);
    glVertex2f(0.8f, 0.75f);
    glVertex2f(0.9f, 0.65f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.35f, 0.65f);
    glVertex2f(0.38f, 0.65f);
    glVertex2f(0.42f, 0.8f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.47f, 0.65f);
    glVertex2f(0.52f, 0.65f);
    glVertex2f(0.56f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.7f, 0.65f);
    glVertex2f(0.78f, 0.65f);
    glVertex2f(0.67f, 0.85f);
    glEnd();
    //Shadow 4
    glBegin(GL_TRIANGLES);
    glColor3f(0.663, 0.663, 0.663);
    glVertex2f(0.85f, 0.65f);
    glVertex2f(0.89f, 0.65f);
    glVertex2f(0.82f, 0.73f);
    glEnd();

}





void Road(){
    //Main Road
    glBegin(GL_QUADS);
    glColor3f(0.467f, 0.533f, 0.600f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.0f, 0.2f);
    glEnd();
    //1st road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 0.04f);
    glVertex2f(0.6f, -0.04f);
    glVertex2f(0.8f, -0.04f);
    glVertex2f(0.8f, 0.04f);
    glEnd();
    //2nd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.04f);
    glVertex2f(0.3f, -0.04f);
    glVertex2f(0.5f, -0.04f);
    glVertex2f(0.5f, 0.04f);
    glEnd();
    //3rd road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.04f);
    glVertex2f(0.0f, -0.04f);
    glVertex2f(0.2f, -0.04f);
    glVertex2f(0.2f, 0.04f);
    glEnd();
    //4th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.3f, 0.04f);
    glVertex2f(-0.3f, -0.04f);
    glVertex2f(-0.1f, -0.04f);
    glVertex2f(-0.1f, 0.04f);
    glEnd();
    //5th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.6f, 0.04f);
    glVertex2f(-0.6f, -0.04f);
    glVertex2f(-0.4f, -0.04f);
    glVertex2f(-0.4f, 0.04f);
    glEnd();
    //6th road mark
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.04f);
    glVertex2f(-0.9f, -0.04f);
    glVertex2f(-0.7f, -0.04f);
    glVertex2f(-0.7f, 0.04f);
    glEnd();
}




void Vehicle(){
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Body
    glBegin(GL_POLYGON);
    glColor3f(0.741f, 0.718f, 0.420f);
    glVertex2f(-0.8f, 0.21f);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.4f, 0.21f);
    //glEnd();
    glPopMatrix();
    glEnd();


    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Body
    glBegin(GL_POLYGON);
    glColor3f(0.863f, 0.863f, 0.863f);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 0.2f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 1
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.7f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 2
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.6f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Glass Frame 3
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.5f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Head Light
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.45f, 0.1f);
    glVertex2f(-0.45f, 0.05f);
    glVertex2f(-0.4f, 0.05f);
    glVertex2f(-0.4f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();


    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(move3, 0.0f, 0.0f);
    //Bus Back Light
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.8f, 0.05f);
    glVertex2f(-0.75f, 0.05f);
    glVertex2f(-0.75f, 0.1f);
    //glEnd();
    glPopMatrix();
    glEnd();



//Bus Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,0.0f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Bus Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,0.0f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();






    //Military Van Body
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Front Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glPopMatrix();
    glEnd();
    //Military Van Back Cover
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.8f, 0.2f);
    glPopMatrix();
    glEnd();
    //Military Van Head Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.3f, -0.05f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.35f, 0.0f);
    glPopMatrix();
    glEnd();
    //Military Van Back Light
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.8f, -0.05f);
    glVertex2f(0.8f, 0.0f);
    glPopMatrix();
    glEnd();


//Military Van Wheel 1
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move4,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f, 1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();


//Military Van Wheel 2
glLineWidth(5.0);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move5,-0.08f, 0.0f);
glRotatef(_angle, 0.0f, 0.0f,1.0f);
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_LINES);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.045;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();

}






void Tabu(){
   //Tabu 1
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.8f, 0.5f);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.6f, 0.6f);
    glVertex2f(-0.6f, 0.5f);
    glEnd();
    //Door 1
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.73f, 0.58f);
    glVertex2f(-0.73f, 0.5f);
    glVertex2f(-0.67f, 0.5f);
    glVertex2f(-0.67f, 0.58f);
    glEnd();
    //Tabu 2
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.5f);
    glEnd();
    //Door 2
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.43f, 0.58f);
    glVertex2f(-0.43f, 0.5f);
    glVertex2f(-0.37f, 0.5f);
    glVertex2f(-0.37f, 0.58f);
    glEnd();
    //Tabu 3
    glBegin(GL_POLYGON);
    glColor3f(0.180f, 0.545f, 0.341f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.6f);
    glVertex2f(-0.1f, 0.7f);
    glVertex2f(0.0f, 0.6f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
    //Door 3
    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(-0.13f, 0.58f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.07f, 0.5f);
    glVertex2f(-0.07f, 0.58f);
    glEnd();
}




void Tree(){
    //Tree log 1
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.57f, 0.7f);
    glVertex2f(-0.57f, 0.6f);
    glVertex2f(-0.53f, 0.6f);
    glVertex2f(-0.53f, 0.7f);
    glEnd();
    //Triangle 1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.45f, 0.7f);
    glVertex2f(-0.55f, 0.9f);
    glEnd();
    //Tree log 2
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(-0.27f, 0.7f);
    glVertex2f(-0.27f, 0.6f);
    glVertex2f(-0.23f, 0.6f);
    glVertex2f(-0.23f, 0.7f);
    glEnd();
    //Triangle 2
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.25f, 0.9f);
    glEnd();
}



void Gate(){
    //Left Pillar
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.23f, 0.2f);
    glVertex2f(0.23f, 0.5f);
    glEnd();
    //Middle Pillar
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.47f, 0.5f);
    glVertex2f(0.47f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.5f);
    glEnd();
    //Right Pillar
    glBegin(GL_QUADS);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.77f, 0.5f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.8f, 0.5f);
    glEnd();
    //Upper Part
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.2f, 0.5f);
    glEnd();
    //Check post
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.2f, 0.3);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glEnd();
    //Upper Bars
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.34f);
    glVertex2f(0.2f, 0.34f);
    glVertex2f(0.25f, 0.3f);
    glVertex2f(0.25f, 0.34f);
    glVertex2f(0.29f, 0.3f);
    glVertex2f(0.29f, 0.34f);
    glVertex2f(0.33f, 0.3f);
    glVertex2f(0.33f, 0.34f);
    glVertex2f(0.37f, 0.3f);
    glVertex2f(0.37f, 0.34f);
    glEnd();

    //Gate 2 Lines(HQ)
    glBegin(GL_LINES);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.0f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.01f, -0.2f);
    glVertex2f(0.01f, -0.3f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(0.03f, -0.3f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.2f);
    glVertex2f(0.07f, -0.3f);
    glVertex2f(0.09f, -0.2f);
    glVertex2f(0.09f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.11f, -0.2f);
    glVertex2f(0.11f, -0.3f);
    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.13f, -0.3f);
    glVertex2f(0.15f, -0.2f);
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.17f, -0.2f);
    glVertex2f(0.17f, -0.3f);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.19f, -0.3f);
    glVertex2f(0.81f, -0.2f);
    glVertex2f(0.81f, -0.3f);
    glVertex2f(0.83f, -0.2f);
    glVertex2f(0.83f, -0.3f);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.85f, -0.3f);
    glVertex2f(0.87f, -0.2f);
    glVertex2f(0.87f, -0.3f);
    glVertex2f(0.89f, -0.2f);
    glVertex2f(0.89f, -0.3f);
    glVertex2f(0.91f, -0.2f);
    glVertex2f(0.91f, -0.3f);
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.3f);
    glVertex2f(0.95f, -0.2f);
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.97f, -0.2f);
    glVertex2f(0.97f, -0.3f);
    glVertex2f(0.99f, -0.2f);
    glVertex2f(0.99f, -0.3f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(0.8f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glEnd();

    //Bar gates
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.99f, 0.2f);
    glVertex2f(-0.99f, 0.3f);
    glVertex2f(-0.97f, 0.2f);
    glVertex2f(-0.97f, 0.3f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.95f, 0.3f);
    glVertex2f(-0.93f, 0.2f);
    glVertex2f(-0.93f, 0.3f);
    glVertex2f(-0.91f, 0.2f);
    glVertex2f(-0.91f, 0.3f);
    glVertex2f(-0.89f, 0.2f);
    glVertex2f(-0.89f, 0.3f);
    glVertex2f(-0.87f, 0.2f);
    glVertex2f(-0.87f, 0.3f);
    glVertex2f(-0.85f, 0.2f);
    glVertex2f(-0.85f, 0.3f);
    glVertex2f(-0.83f, 0.2f);
    glVertex2f(-0.83f, 0.3f);
    glVertex2f(-0.81f, 0.2f);
    glVertex2f(-0.81f, 0.3f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.79f, 0.3f);
    glVertex2f(-0.77f, 0.2f);
    glVertex2f(-0.77f, 0.3f);
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.73f, 0.2f);
    glVertex2f(-0.73f, 0.3f);
    glVertex2f(-0.71f, 0.2f);
    glVertex2f(-0.71f, 0.3f);
    glVertex2f(-0.69f, 0.2f);
    glVertex2f(-0.69f, 0.3f);
    glVertex2f(-0.67f, 0.2f);
    glVertex2f(-0.67f, 0.3f);
    glVertex2f(-0.65f, 0.2f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.63f, 0.3f);
    glVertex2f(-0.61f, 0.2f);
    glVertex2f(-0.61f, 0.3f);
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.3f);
    glVertex2f(-0.57f, 0.2f);
    glVertex2f(-0.57f, 0.3f);
    glVertex2f(-0.55f, 0.2f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.53f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.51f, 0.2f);
    glVertex2f(-0.51f, 0.3f);
    glVertex2f(-0.49f, 0.2f);
    glVertex2f(-0.49f, 0.3f);
    glVertex2f(-0.47f, 0.2f);
    glVertex2f(-0.47f, 0.3f);
    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.45f, 0.3f);
    glVertex2f(-0.43f, 0.2f);
    glVertex2f(-0.43f, 0.3f);
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.41f, 0.3f);
    glVertex2f(-0.39f, 0.2f);
    glVertex2f(-0.39f, 0.3f);
    glVertex2f(-0.37f, 0.2f);
    glVertex2f(-0.37f, 0.3f);
    glVertex2f(-0.35f, 0.2f);
    glVertex2f(-0.35f, 0.3f);
    glVertex2f(-0.33f, 0.2f);
    glVertex2f(-0.33f, 0.3f);
    glVertex2f(-0.31f, 0.2f);
    glVertex2f(-0.31f, 0.3f);
    glVertex2f(-0.29f, 0.2f);
    glVertex2f(-0.29f, 0.3f);
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.3f);
    glVertex2f(-0.25f, 0.2f);
    glVertex2f(-0.25f, 0.3f);
    glVertex2f(-0.23f, 0.2f);
    glVertex2f(-0.23f, 0.3f);
    glVertex2f(-0.21f, 0.2f);
    glVertex2f(-0.21f, 0.3f);
    glVertex2f(-0.19f, 0.2f);
    glVertex2f(-0.19f, 0.3f);
    glVertex2f(-0.17f, 0.2f);
    glVertex2f(-0.17f, 0.3f);
    glVertex2f(-0.15f, 0.2f);
    glVertex2f(-0.15f, 0.3f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.13f, 0.3f);
    glVertex2f(-0.11f, 0.2f);
    glVertex2f(-0.09f, 0.3f);
    glVertex2f(-0.09f, 0.2f);
    glVertex2f(-0.07f, 0.3f);
    glVertex2f(-0.07f, 0.2f);
    glVertex2f(-0.05f, 0.3f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(-0.53f, 0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.01f, 0.2f);
    glVertex2f(0.01f, 0.3f);
    glVertex2f(0.03f, 0.2f);
    glVertex2f(0.03f, 0.3f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.05f, 0.3f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.07f, 0.3f);
    glVertex2f(0.09f, 0.2f);
    glVertex2f(0.09f, 0.3f);
    glVertex2f(0.11f, 0.2f);
    glVertex2f(0.11f, 0.3f);
    glVertex2f(0.13f, 0.2f);
    glVertex2f(0.13f, 0.3f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.3f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.3f);
    glVertex2f(0.19f, 0.2f);
    glVertex2f(0.19f, 0.3f);
    glVertex2f(0.81f, 0.2f);
    glVertex2f(0.81f, 0.3f);
    glVertex2f(0.83f, 0.2f);
    glVertex2f(0.83f, 0.3f);
    glVertex2f(0.85f, 0.2f);
    glVertex2f(0.85f, 0.3f);
    glVertex2f(0.87f, 0.2f);
    glVertex2f(0.87f, 0.3f);
    glVertex2f(0.89f, 0.2f);
    glVertex2f(0.89f, 0.3f);
    glVertex2f(0.91f, 0.2f);
    glVertex2f(0.91f, 0.3f);
    glVertex2f(0.93f, 0.2f);
    glVertex2f(0.93f, 0.3f);
    glVertex2f(0.95f, 0.2f);
    glVertex2f(0.95f, 0.3f);
    glVertex2f(0.97f, 0.2f);
    glVertex2f(0.97f, 0.3f);
    glVertex2f(0.99f, 0.2f);
    glVertex2f(0.99f, 0.3f);
    glEnd();
}






void watchTower(){
    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.07f, 0.8f);
    glVertex2f(0.33f, 0.8f);
    glVertex2f(0.2f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.75);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.3f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.3f, 0.7);
    glVertex2f(0.3f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.1f, 0.7);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.11f, 0.5f);
    glVertex2f(0.11f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.29f, 0.7);
    glVertex2f(0.29f, 0.58f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.3f, 0.7f);
    glEnd();



    //Upper Part
    glBegin(GL_TRIANGLES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.57f, 0.8f);
    glVertex2f(0.83f, 0.8f);
    glVertex2f(0.7f, 0.9f);
    glEnd();
    //Middle Part
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.75);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.8f, 0.75f);
    glEnd();
    //Side Left Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7);
    glVertex2f(0.6f, 0.8f);
    glEnd();
    //Side Right Line
    glBegin(GL_LINES);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.8f, 0.7);
    glVertex2f(0.8f, 0.8f);
    glEnd();
    //Left Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.61f, 0.58f);
    glVertex2f(0.61f, 0.7f);
    glEnd();
    //Right Leg
    glBegin(GL_POLYGON);
    glColor3f(0.545f, 0.000f, 0.000f);
    glVertex2f(0.79f, 0.7);
    glVertex2f(0.79f, 0.51f);
    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.7f);
    glEnd();
}



void underGround(){
    glBegin(GL_POLYGON);
    glColor3f(0.502f, 0.502f, 0.000f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.333f, 0.420f, 0.184f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.000f, 0.392f, 0.000f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.8f);
    glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.8f);
    glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.25f);
    glVertex2f(0.25f, -0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.3f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.25f);
    glVertex2f(0.45f, -0.3f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.5f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.45f);
    glVertex2f(0.25f, -0.5f);
    glVertex2f(0.3f, -0.5f);
    glVertex2f(0.3f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.45f);
    glVertex2f(0.45f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.45f);
    glVertex2f(0.65f, -0.5f);
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.25f, -0.65f);
    glVertex2f(0.25f, -0.7f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.3f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.65f);
    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.52f, -0.8f);
    glVertex2f(0.52f, -0.65f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.65f, -0.7f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, -0.65f);
    glEnd();

    //Playground Body
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(-0.1f, -0.2f);
    glEnd();
    //Goal Bar (Upper)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.4f);
    glVertex2f(-0.76f, -0.4f);
    glEnd();
    //Goal Bar (Middle)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.76f, -0.4f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Bottom)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.93f, -0.7f);
    glVertex2f(-0.84f, -0.7f);
    glEnd();
    //Goal Bar (Mid Field)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.2f);
    glVertex2f(-0.48f, -1.0f);
    glEnd();
    //Goal Bar (Upper Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.07f, -0.4f);
    glVertex2f(-0.15f, -0.4f);
    glEnd();
    //Goal Bar (Middle Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, -0.4f);
    glVertex2f(-0.12f, -0.7f);
    glEnd();
    //Goal Bar (Bottom Right)
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12f, -0.7f);
    glVertex2f(-0.03f, -0.7f);
    glEnd();
}



void Tank(){
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    //Back Part
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.65f, 0.4f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.6f, 0.4f);
    glEnd();
    //Exhaust
    glBegin(GL_QUADS);
    glColor3f(0.545, 0.271, 0.075);
    glVertex2f(-0.64f, 0.42f);
    glVertex2f(-0.64f, 0.4f);
    glVertex2f(-0.62f, 0.4f);
    glVertex2f(-0.62f, 0.46f);
    glVertex2f(-0.74f, 0.46f);
    glVertex2f(-0.74f, 0.42f);
    glVertex2f(-0.64f, 0.42f);
    glEnd();
    //Body
    glBegin(GL_QUADS);
    glColor3f(0.502, 0.502, 0.000);
    glVertex2f(-0.6f, 0.42f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.45f);
    glEnd();
    //Glass
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.4f, 0.43f);
    glVertex2f(-0.4f, 0.35f);
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.3f, 0.45f);
    glEnd();
    //Firing Side
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.3f, 0.41f);
    glVertex2f(-0.3f, 0.35f);
    glVertex2f(-0.1f, 0.4f);
    glVertex2f(-0.1f, 0.43f);
    glVertex2f(-0.3f, 0.41f);
    glEnd();
    //Wheel Chain Body
    glBegin(GL_QUADS);
    glColor3f(0.333, 0.420, 0.184);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.2f, 0.3f);
    glEnd();
    //Wheel Chain Body Line
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.7f, 0.3f);
    glVertex2f(-0.7f, 0.21f);
    glVertex2f(-0.7f, 0.21f);
    glVertex2f(-0.2f, 0.21f);
    glVertex2f(-0.2f, 0.21f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.7f, 0.3f);
    glEnd();
    //Wheel 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.67f, 0.27f);
    glVertex2f(-0.67f, 0.23f);
    glVertex2f(-0.63f, 0.23f);
    glVertex2f(-0.63f, 0.27f);
    glEnd();
    //Wheel 2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.57f, 0.27f);
    glVertex2f(-0.57f, 0.23f);
    glVertex2f(-0.53f, 0.23f);
    glVertex2f(-0.53f, 0.27f);
    glEnd();
     //Wheel 3
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.47f, 0.27f);
    glVertex2f(-0.47f, 0.23f);
    glVertex2f(-0.43f, 0.23f);
    glVertex2f(-0.43f, 0.27f);
    glEnd();
     //Wheel 4
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.37f, 0.27f);
    glVertex2f(-0.37f, 0.23f);
    glVertex2f(-0.33f, 0.23f);
    glVertex2f(-0.33f, 0.27f);
    glEnd();
     //Wheel 5
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.27f, 0.27f);
    glVertex2f(-0.27f, 0.23f);
    glVertex2f(-0.23f, 0.23f);
    glVertex2f(-0.23f, 0.27f);
    glEnd();
    glPopMatrix();
}



void Helicopter(){
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_POLYGON);
glColor3ub (240, 212, 34);
glVertex2f(.76, .16);
glVertex2f(.71, .16);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.7, .01);
glVertex2f(.76, .01);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (59, 43, 196);
glVertex2f(.68, .12);
glVertex2f(.67, .05);
glVertex2f(.73, .05);
glVertex2f(.73, .12);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (105, 112, 0);
glVertex2f(.76, .16);
glVertex2f(.76, .01);
glVertex2f(.85, .01);
glVertex2f(.85, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (240, 212, 34);    //last part of helicopter body
glVertex2f(.85, .1);
glVertex2f(.85, .01);
glVertex2f(.9, .04);
glVertex2f(.9, .06);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (240, 212, 34);    //last part pf helicopter body
glVertex2f(.89, .13);
glVertex2f(.9, .05);
glVertex2f(.91, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.74, .13);
glVertex2f(.74, .03);
glVertex2f(.77, .03);
glVertex2f(.77, .13);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub (0, 61, 41);
glVertex2f(.78, .1);
glVertex2f(.78, .05);
glVertex2f(.8, .05);
glVertex2f(.8, .1);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLoadIdentity();
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, 0.01);
glVertex2f(.71, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.725, 0.01);
glVertex2f(.725, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.8, 0.01);
glVertex2f(.8, -.02);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.815, 0.01);
glVertex2f(.815, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.69, -.020);
glVertex2f(.815,-.020);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_LINES);
glColor3ub (1, 1, 1);
glVertex2f(.71, -.05);
glVertex2f(.83, -.05);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glLineWidth(9);
glBegin(GL_LINES);
glColor3ub (255, 255, 255);
glVertex2f(.735, 0.16);
glVertex2f(.735,.18);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.6, .195);
glVertex2f(.6, .165);
glEnd();
glPopMatrix();

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move6, move6, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub (219, 224, 150);
glVertex2f(.735, .18);
glVertex2f(.865, .195);
glVertex2f(.865, .165);
glEnd();
glPopMatrix();
}




void Bird(){
    //1st Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.75f);
    glVertex2f(-0.47f, 0.8f);
    glVertex2f(-0.47f, 0.8f);
    glVertex2f(-0.45f, 0.75f);
    glVertex2f(-0.45f, 0.75f);
    glVertex2f(-0.43f, 0.8f);
    glVertex2f(-0.43f, 0.8f);
    glVertex2f(-0.4f, 0.75f);
    glEnd();
    glPopMatrix();
    //2nd Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.35f, 0.7f);
    glVertex2f(-0.33f, 0.75f);
    glVertex2f(-0.33f, 0.75f);
    glVertex2f(-0.3f, 0.7f);
    glEnd();
    glPopMatrix();
    //3rd Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 0.75f);
    glVertex2f(-0.27f, 0.8f);
    glVertex2f(-0.27f, 0.8f);
    glVertex2f(-0.25f, 0.75f);
    glVertex2f(-0.25f, 0.75f);
    glVertex2f(-0.23f, 0.8f);
    glVertex2f(-0.23f, 0.8f);
    glVertex2f(-0.2f, 0.75f);
    glEnd();
    glPopMatrix();
    //4th Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.75f);
    glVertex2f(0.43f, 0.8f);
    glVertex2f(0.43f, 0.8f);
    glVertex2f(0.45f, 0.75f);
    glVertex2f(0.45f, 0.75f);
    glVertex2f(0.47f, 0.8f);
    glVertex2f(0.47f, 0.8f);
    glVertex2f(0.5f, 0.75f);
    glEnd();
    glPopMatrix();
    //5th Bird
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-move7, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3f, 0.7f);
    glVertex2f(0.33f, 0.75f);
    glVertex2f(0.33f, 0.75f);
    glVertex2f(0.35f, 0.7f);
    glVertex2f(0.35f, 0.7f);
    glVertex2f(0.37f, 0.75f);
    glVertex2f(0.37f, 0.75f);
    glVertex2f(0.4f, 0.7f);
    glEnd();
    glPopMatrix();

}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'w':
    speed = 0.1f;
    break;
case 's':
    speed = 0.0f;
    break;
glutPostRedisplay();
	}
}





void update(int value) {
_angle+=2.0f;
if(_angle > 360.0)
{
_angle-=360;
}
glutPostRedisplay();
glutTimerFunc(90, update, 0);
}


void update1(int value) {
move1+=0.02f;
if(move1 > 1.3)
{
move1 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update1, 0);
}


void update2(int value) {
move2+=0.02f;
if(move2 > 1.3)
{
move2 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update2, 0);
}



void update3(int value) {
move3+=0.02f;
if(move3 > 1.3)
{
move3 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update3, 0);
}


void update4(int value) {
move4-=0.02f;
if(-move4 > 1.3)
{
move4 = 1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update4, 0);
}


void update5(int value) {
move5-=0.02f;
if(-move5 > 1.3)
{
move5 = 1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update5, 0);
}


void update6(int value) {
    if(position > 1.0)
        {
             position = -1.0f;
        }
    else if(position < -1.0)
    {
        position =  1.0f ;
    }
        position += speed;
	glutPostRedisplay();
	glutTimerFunc(700, update6, 0);
}


void update11(int value) {
move6-=0.02f;
if(-move6 > 1.0)
{
move6 = 1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update11, 0);
}


void update12(int value) {
move7+=0.02f;
if(move7 > 1.3)
{
move7 = -1.0f;
}
glutPostRedisplay();
glutTimerFunc(90, update12, 0);
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




void display(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glLineWidth(4.0);
    //Functions
    Ground();
    Ground2();
    Road();
    Vehicle();
    Tabu();
    Tree();
    Gate();
    watchTower();
    underGround();
    Tank();
    Helicopter();
    Bird();

    glTranslatef(rainX, rainY, 0);
	for (double i = -1.0f; i < 1.0f; i += 0.15f) {
      for (double j = -1.0f; j < 1.0f; j += 0.15f) {
        drawLine(i, j, i - 0.1f, j - 0.1f, 1, 1, 1, 1);
      }
	}
	glLoadIdentity();
	i += 0.1f;

glutSwapBuffers();
glFlush();

}




int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1920, 1080);
glutInitWindowPosition(50, 50);
glutCreateWindow("Military Base");
glutDisplayFunc(display);
glutTimerFunc(90, update, 0);
glutTimerFunc(90, update1, 0);
glutTimerFunc(90, update2, 0);
glutTimerFunc(90, update3, 0);
glutTimerFunc(90, update4, 0);
glutTimerFunc(90, update5, 0);
glutTimerFunc(700,update6, 0);
glutTimerFunc(90, update11, 0);
glutTimerFunc(90, update12, 0);
glutKeyboardFunc(handleKeypress);

glutIdleFunc(Idle);
glutTimerFunc(100, update_rain, 0);

glutMainLoop();
return 0;
}

