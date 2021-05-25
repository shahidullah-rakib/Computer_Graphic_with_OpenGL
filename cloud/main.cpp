//1st ring
	int j7;

	GLfloat x7=.3f; GLfloat y7= .8f; GLfloat radius7 =.050f;
	int triangleAmount7 = 20; //# of triangles used to draw circle
	glColor3ub(255,255,255);

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(j7 = 0; j7 <= triangleAmount1;j7++) {
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
	glColor3ub(255,255,255);

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
	glColor3ub(255,255,255);

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
	glColor3ub(255,255,255);

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
//end cloud
