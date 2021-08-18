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

#include <iostream>
using namespace std;
int posX = 0;
int posY = 0;

void kotak(int r, int g, int b, int sx, int sy, int sz)
{
    glTranslated(sx, sy, sz); // menentukan posisi
    glBegin(GL_POLYGON);
       glColor3f(r,g,b);
       glVertex3f(-12,3,0);
       glVertex3f(-11,4,0);
       glVertex3f(-10,3,0);
       glVertex3f(-10,-1,0);
       glVertex3f(-11,-2,0);
       glVertex3f(-12,-1,0);
    glEnd();

    glBegin(GL_LINE_STRIP);
       glColor3f(1,1,1);
       glVertex3f(-12,3,0);
       glVertex3f(-11,4,0);
       glVertex3f(-10,3,0);
       glVertex3f(-10,-1,0);
       glVertex3f(-11,-2,0);
       glVertex3f(-12,-1,0);
    glEnd();

    glBegin(GL_POINTS); // membuat point
       glColor3f(1,1,1);
       glVertex3f(-11,3,0);
    glEnd();

    glBegin(GL_POINTS); // membuat point
       glColor3f(1,1,1);
       glVertex3f(-11,-1,0);
    glEnd();

    if (sx != 0) // mengatur ulang posisi
    {
        sx = -sx;
    }
    if (sy != 0)
    {
        sy = -sy;
    }
    if (sz != 0)
    {
        sz = -sz;
    }
    glTranslated(sx, sy, sz);

}

void kotak2(int r, int g, int b, int sx, int sy, int sz)
{
    glTranslated(sx, sy, sz); // menetukan posisi
    glBegin(GL_POLYGON);
       glColor3f(r,g,b);
       glVertex3f(-12,-3,0);
       glVertex3f(-11,-2,0);
       glVertex3f(-12,-1,0);
       glVertex3f(-16,-1,0);
       glVertex3f(-17,-2,0);
       glVertex3f(-16,-3,0);
    glEnd();

    glBegin(GL_LINE_STRIP);
       glColor3f(1,1,1);
       glVertex3f(-12,-3,0);
       glVertex3f(-11,-2,0);
       glVertex3f(-12,-1,0);
       glVertex3f(-16,-1,0);
       glVertex3f(-17,-2,0);
       glVertex3f(-16,-3,0);
    glEnd();

    glBegin(GL_POINTS); // membuat point
       glColor3f(1,1,1);
       glVertex3f(-16,-2,0);
    glEnd();

    glBegin(GL_POINTS); // membuat point
       glColor3f(1,1,1);
       glVertex3f(-12,-2,0);
    glEnd();

    if (sx != 0) // mengatur ulang posisi
    {
        sx = -sx;
    }
    if (sy != 0)
    {
        sy = -sy;
    }
    if (sz != 0)
    {
        sz = -sz;
    }
    glTranslated(sx, sy, sz);

}

void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);

    // kunci
    /*
    kotak(1,0,0, 0+posX, 0+posY, 0); // kanan bawah
    kotak(1,0,0, -6+posX, 0+posY, 0); // kiri bawah
    kotak(1,0,0, -6+posX, 6+posY, 0); // kiri atas
    kotak(1,0,0, 0+posX, 6+posY, 0); // kanan atas
    kotak2(1,0,0, 0+posX, 0+posY,0); // tengah bawah
    kotak2(1,0,0, 0+posX, 6+posY,0); // tengah tengah
    kotak2(1,0,0, 0+posX, 12+posY,0); // tengah atas
    */

    // angka 1
    kotak(0, 1, 1, 3+posX, 0+posY, 0); // kiri bawah
    kotak(0, 1, 1, 3+posX, 6+posY, 0); // kiri atas

    //angka 4
    kotak2(1, 0, 1, 12+posX, 6+posY, 0); // tengah tengah
    kotak(1, 0, 1, 12+posX, 6+posY, 0); // kanan atas
    kotak(1, 0, 1, 6+posX, 6+posY, 0); // kiri atas
    kotak(1, 0, 1, 12+posX, 0+posY, 0); // kanan bawah

    //angka 3
    kotak(0, 0, 1, 20+posX, 6+posY, 0); // kanan atas
    kotak2(0, 0, 1, 20+posX, 0+posY, 0); // tengah bawah
    kotak2(0, 0, 1, 20+posX, 6+posY, 0); // tengah tengah
    kotak2(0, 0, 1, 20+posX, 12+posY, 0); // tengah atas
    kotak(0, 0, 1, 20+posX, 0+posY, 0); // kanan bawah

    glFlush ();
}

void inputan(unsigned char key, int x, int y){

    if(key=='d' || key == 'D'){
        posX += 1;
        cout << posX << endl;
        display();
    }
    if(key == 'a' || key == 'A'){
        posX -= 1;
        cout << posX << endl;
        display();
    }

    if(key == 'w' || key == 'W'){
        posY += 1;
        cout << posY << endl;
        display();
        }
    if(key == 's' || key == 'S'){
        posY -= 1;
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
	gluOrtho2D(-20.0, 20.0, -20.0, 20.0);  // kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[])
{
    glutInit( & argc, argv );
    glutInitWindowSize(600,600);
    glutInitWindowPosition(50,50);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Primitif");
    glutDisplayFunc(display);
    glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
