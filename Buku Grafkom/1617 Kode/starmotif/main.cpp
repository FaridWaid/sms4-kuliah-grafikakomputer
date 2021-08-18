/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void drawmotif()
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.6, 2.2);
    glVertex2f(1.6, 2.2);
    glVertex2f(0.0, 7.0);
    glVertex2f(-2.2, 0.2);
    glVertex2f(-1.4, -0.4);
    glVertex2f(0.0, 4.0);
    glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,1.0);

    glLineWidth(2);
    for(int count = 0; count < 5; count++)
    {
        drawmotif();
        glRotated(72, 0, 0, 1.0);
    }

	glFlush();
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0,10.0, -10.0,10.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(0.0,0.0,0.0);
}

int main(int argc, char* argv[])
{

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Transform");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
