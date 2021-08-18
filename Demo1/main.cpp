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
#include<iostream>
#include <stdlib.h>

using namespace std;

float posX = 0.0;
float posY = 0.0;

void kotak( )
{
    glBegin(GL_POLYGON);
       glColor3f(0.309804,0.184314,0.309804);
       glVertex2f(-7+posX,3+posY);
       glVertex2f(-6+posX,4+posY);
       glVertex2f(-5+posX,3+posY);
       glVertex2f(-5+posX,1+posY);
       glColor3f(0.196078,0.6,0.8);
       glVertex2f(-6+posX,0+posY);
       glVertex2f(-7+posX,1+posY);
    glEnd();
}

void titik()
{
    glBegin(GL_POINTS); // membuat point
        glColor3f(1,0,0);
        glVertex3f(-6,1,0);
    glEnd();

    glBegin(GL_POINTS); // membuat point
        glColor3f(1,0,0);
        glVertex3f(-6,3,0);
    glEnd();
}
void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);

    // ANGKA 0
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,-8,0);
    kotak();
    titik();

    glRotated(90,0,0,1);
    glTranslated(6,1.8,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glRotated(-90,0,0,1);
    glTranslated(6,-5.8,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glRotated(90,0,0,1);
    glTranslated(10,6.2,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    // ANGKA 0

    // ANGKA 7
    glTranslated(0,-10,0);
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

    glTranslated(0,4,0);
    kotak();
    titik();
    // ANGKA 7

    // ANGKA 3
    glRotated(-55,0,0,1);
    glTranslated(1,-18,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glTranslated(0,-4,0);
    kotak();
    titik();

    glRotated(-90,0,0,1);
    glTranslated(6,-5.8,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glRotated(90,0,0,1);
    glTranslated(10,6.2,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glTranslated(-6,-7,0);
    kotak();
    titik();

    glTranslated(0,4,0);
    kotak();
    titik();

    glFlush ();
}

void inputan(unsigned char key, int x, int y){

    if(key=='r' || key == 'R'){
        posX += 0.2;
        cout << posX << endl;
        display();
    }
    if(key == 'l' || key == 'L'){
        posX -= 0.2;
        cout << posX << endl;
        display();
    }

    if(key == 'a' || key == 'A'){
        posY += 0.2;
        cout << posY << endl;
        display();
        }
    if(key == 'b' || key == 'B'){
        posY -= 0.2;
        cout << posY << endl;
        display();
    }
}

void myinit()
{
	glClearColor(1,1,1,0);  //untuk memberi warna pada background
	glColor3f(1.0, 0.0, 0.0); // color pada object

	glPointSize(5.0); // membulatkan point
	glEnable(GL_POINT_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-20.0, 80.0, -20.0, 40.0);  // kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Demo 1");
    glutDisplayFunc(display);
    glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
