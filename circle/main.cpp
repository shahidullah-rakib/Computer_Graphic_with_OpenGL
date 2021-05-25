#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
//glColor3f(0,0,0);
glColor3ub(255,0,0);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);

//glColor3f(0,0,1);
glColor3ub(20, 33, 219);
glVertex2f(0.0f,1.0f);
glVertex2f(0.0f,-1.0f);
glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0,0,0);
	int i;

	GLfloat x=.4f; GLfloat y=.4f; GLfloat radius =.2f;
	int triangleAmount = 200; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);

		GLfloat p=-.4f; GLfloat q=-.4f; GLfloat radius2 =.2f;
	int j;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
		for(j = 0; j <= lineAmount;j++) {
			glVertex2f(
			    p + (radius2 * cos(j *  twicePi2 / lineAmount)),
			    q + (radius2* sin(j * twicePi2 / lineAmount))
			);
		}
	glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
