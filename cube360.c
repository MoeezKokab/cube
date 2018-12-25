#include<GL/glut.h>
int angle = 0;
void myinit()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glColor3f(0.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
//	gluOrtho2D(0, 20, 0, 20);
	glMatrixMode(GL_MODELVIEW);
}
void display()
{

}

void timer(int i)
{
    glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glLoadIdentity();
glRotatef(angle,0.0,1.0,0.0);
glRotatef(30,1.0,0.0,0.0);
glutWireCube(0.5);
glPopMatrix();
angle++;
glFlush();
glutTimerFunc(50,timer,0);
}





int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("moko");
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
myinit();
	glutInitWindowSize(200, 200);
	glutInitWindowPosition( 100,100 );

	glutDisplayFunc(display);
	timer(0);

	glutMainLoop();
	return 0;}

