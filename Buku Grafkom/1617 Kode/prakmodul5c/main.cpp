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

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glRotated(25,1,0,0);
    glTranslated(2,-2,0);
    glRotated(45,0,0,1);
    glPushMatrix();
    glPushMatrix();
    glPushMatrix();

    //balok bawah
    glScaled(4,1,1);
    glutWireCube(2);
    glPopMatrix();

    glTranslated(0,6,0);
    glScaled(4,1,1);
    glutWireCube(2);
    glPopMatrix();


    //balok kanan
    glTranslated(3,3,0);
    glRotated(-90,0,0,1);
    glScaled(4,1,1);
    glutWireCube(2);
    glPopMatrix();

    //balok kiri
    glTranslated(-3,3,0);
    glRotated(-90,0,0,1);
    glScaled(4,1,1);
    glutWireCube(2);

    glFlush();
}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Frame");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
 }
