#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient[] = {1.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow

	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.6f, 0.2f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.4f, 0.6f);
	glVertex2f(0.3f, 0.4f);
	glEnd();

glDisable(GL_LIGHTING);//Enable Light Effect

	glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.

		// Draw a Red 1x1 Square centered at origin
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Red

	glVertex2f(-0.9f, 0.3f);    // x, y
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-.7f,  0.6f);

	glEnd();

glDisable(GL_LIGHTING);//Enable Light Effect



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
