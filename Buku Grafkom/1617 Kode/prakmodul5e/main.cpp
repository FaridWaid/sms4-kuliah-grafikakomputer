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
    glLoadIdentity();

    glRotated(-40,1,1,1);
    //glRotated(40,1,0,0);

    glutWireCube(1);
    glColor3f(0.0, 1.0, 1.0);
    glutWireTeapot(0.4);

    glTranslated(1,0,0);
    glColor3f(1.0, 1.0, 0.0);
    glutWireSphere(0.4, 12,12);
    glColor3f(1.0, 1.0, 1.0);
    glutWireCube(1);

    glTranslated(-1,1,0);
    glPushMatrix();
    glScaled(0.7, 0.7, 0.7);
    glColor3f(0.0, 1.0, 0.0);
    glutWireTetrahedron();
    glPopMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glutWireCube(1);

    glTranslated(1,0,0);
    glPushMatrix();
    glTranslated(0,-0.3,0);
    glRotated(-90,1,0,0);
    glColor3f(0.0, 0.0, 1.0);
    glutWireCone(0.4, 0.8, 12,12);
    glPopMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glutWireCube(1);

    glFlush();
}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 3.0, -2.5, 3.0, -2.5, 3.0);
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
    glutCreateWindow("Obyek 3 dimensi");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
 }
