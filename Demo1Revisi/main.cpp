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

void kotak(int x, int y, int z)
{
    glTranslated(x, y, z); //menentukan posisi
    glBegin(GL_POLYGON);
       glColor3f(0.309804,0.184314,0.309804);
       glVertex2f(-12,3);
       glVertex2f(-11,4);
       glVertex2f(-10,3);
       glVertex2f(-10,-1);
       glColor3f(0.196078,0.6,0.8);
       glVertex2f(-11,-2);
       glVertex2f(-12,-1);
    glEnd();

    glBegin(GL_POINTS); //membuat point
       glColor3f(1,0,0);
       glVertex2f(-11,3);
    glEnd();

    glBegin(GL_POINTS); //membuat point
       glColor3f(1,0,0);
       glVertex2f(-11,-1);
    glEnd();

    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);

}

void kotak2(int x, int y, int z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
       glColor3f(0.309804,0.184314,0.309804);
       glVertex2f(-12,-3);
       glVertex2f(-11,-2);
       glVertex2f(-12,-1);
       glVertex2f(-16,-1);
       glColor3f(0.196078,0.6,0.8);
       glVertex2f(-17,-2);
       glVertex2f(-16,-3);
    glEnd();

    glBegin(GL_POINTS); //membuat point
       glColor3f(1,0,0);
       glVertex2f(-16,-2);
    glEnd();

    glBegin(GL_POINTS); //membuat point
       glColor3f(1,0,0);
       glVertex2f(-12,-2);
    glEnd();

    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);

}

void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);

    //angka 0
    kotak(3+posX, 0+posY, 0);
    kotak(3+posX, 6+posY, 0);
    kotak(3+posX, 12+posY, 0);
    kotak2(9+posX, 0+posY, 0);
    kotak2(15+posX, 0+posY, 0);
    kotak(15+posX, 0+posY, 0);
    kotak(15+posX, 6+posY, 0);
    kotak(15+posX, 12+posY, 0);
    kotak2(9+posX, 18+posY, 0);
    kotak2(15+posX, 18+posY, 0);

    //angka 7
    kotak2(23+posX, 18+posY, 0);
    kotak2(29+posX, 18+posY, 0);
    kotak2(35+posX, 18+posY, 0);
    kotak(35+posX, 12+posY, 0);
    kotak(35+posX, 6+posY, 0);
    kotak(35+posX, 0+posY, 0);

    //angka 3
    kotak2(43+posX, 18+posY, 0);
    kotak2(49+posX, 18+posY, 0);
    kotak2(55+posX, 18+posY, 0);
    kotak(55+posX, 12+posY, 0);
    kotak(55+posX, 6+posY, 0);
    kotak(55+posX, 0+posY, 0);
    kotak2(43+posX, 0+posY, 0);
    kotak2(49+posX, 0+posY, 0);
    kotak2(55+posX, 0+posY, 0);
    kotak2(48+posX, 9+posY, 0);
    kotak2(54+posX, 9+posY, 0);

    glFlush ();
}

void inputan(unsigned char key, int x, int y){

    if(key=='r' || key == 'R'){
        posX += 2;
        cout << posX << endl;
        display();
    }
    if(key == 'l' || key == 'L'){
        posX -= 2;
        cout << posX << endl;
        display();
    }

    if(key == 't' || key == 'T'){
        posY += 2;
        cout << posY << endl;
        display();
        }
    if(key == 'b' || key == 'B'){
        posY -= 2;
        cout << posY << endl;
        display();
    }
}

void myinit()
{
	glClearColor(1,1,1,0);  //untuk memberi warna pada background
	glColor3f(1.0, 0.0, 0.0); //color pada object

	glPointSize(5.0); //membulatkan point
	glEnable(GL_POINT_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0, 60.0, -20.0, 20.0);  //kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[])
{
    glutInit( & argc, argv );
    glutInitWindowSize(1000,400);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Demo 1");
    glutDisplayFunc(display);
    glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
