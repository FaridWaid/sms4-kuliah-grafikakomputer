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
void drawsnowflake()
{
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.3, 0.2);
    glVertex2f(4.7, 0.2);
    glVertex2f(7.0, 3.0);
    glVertex2f(8.0, 3.0);
    glVertex2f(6.0, 0.2);
    glVertex2f(10.7, 0.2);
    glVertex2f(13.0, 2.5);
    glVertex2f(14.0, 2.5);
    glVertex2f(11.7, 0.2);
    glVertex2f(14.7, 0.2);
    glVertex2f(16.0, 1.0);
    glVertex2f(17.0, 1.0);
    glVertex2f(15.7, 0.2);
    glVertex2f(18.0, 0.2);
    glVertex2f(19.0, 0.0);
    glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,1.0,0.0);
    drawsnowflake();


    glPushMatrix();
    glScaled(1.0, -1.0, 1.0);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(60, 0, 0, 1);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(60, 0, 0, 1);
    glScaled(1.0, -1.0, 1.0);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(120, 0, 0, 1);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(120, 0, 0, 1);
    glScaled(1.0, -1.0, 1.0);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(180, 0, 0, 1);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(180, 0, 0, 1);
    glScaled(1.0, -1.0, 1.0);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(240, 0, 0, 1);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(240, 0, 0, 1);
    glScaled(1.0, -1.0, 1.0);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(300, 0, 0, 1);
    drawsnowflake();
    glPopMatrix();

    glPushMatrix();
    glRotated(300, 0, 0, 1);
    glScaled(1.0, -1.0, 1.0);
    drawsnowflake();
    glPopMatrix();

	glFlush();
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-20.0,20.0,-20.0,20.0);
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
	glutCreateWindow("Snowflake");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
