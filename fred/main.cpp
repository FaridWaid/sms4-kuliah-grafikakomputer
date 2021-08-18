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

void kotak()
{
    glBegin(GL_POLYGON);
       glColor3f(1,0,0);
       glVertex3f(-7,3,0);
       glVertex3f(-6,4,0);
       glVertex3f(-5,3,0);
       glColor3f(0,0,1);
       glVertex3f(-5,1,0);
       glVertex3f(-6,0,0);
       glVertex3f(-7,1,0);
    glEnd();
}
void titik()
{
    glPointSize(3.0);
    glBegin(GL_POINTS); // membuat point
        glColor3f(1,1,1);
        glVertex3f(-6,1,0);
    glEnd();

    glPointSize(3.0);
    glBegin(GL_POINTS); // membuat point
        glColor3f(1,1,1);
        glVertex3f(-6,3,0);
    glEnd();
}
void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);

    // ANGKA 1
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,-8,0);
    kotak();titik();


    // ANGKA 1
        // ANGKA 7
    glRotated(90,0,0,1);
    glTranslated(17,-6,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glRotated(55,0,0,1);
    glTranslated(1.8,5.2,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();


    // ANGKA 7
    //ANGKA 9
    glRotated(-55,0,0,1);
    glTranslated(10,-18,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glRotated(-90,0,0,1);
    glTranslated(6,-10,0);
    kotak();
    titik();

    glRotated(90,0,0,1);
    glTranslated(6,6,0);
    kotak();
    titik();


    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glRotated(-90,0,0,1);
    glTranslated(2,-6,0);
    kotak();
    titik();

    glTranslated(12,-4,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glRotated(90,0,0,1);
    glTranslated(6,6,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();





    glFlush ();
}

void myinit()
{
	glClearColor(1,1,1,0);  //untuk memberi warna pada background
	glColor3f(1.0, 0.0, 0.0); // color pada object
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-20.0, 40.0, -20.0, 20.0);  // kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Primitif");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
