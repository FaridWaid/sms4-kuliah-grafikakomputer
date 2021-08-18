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
#include <Math.h>

void display(void)
{
    /* bersihkan layar dari titik pixel yang masih ada */
    glClear (GL_COLOR_BUFFER_BIT);


    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2i(20,0);
        glVertex2i(-20,0);
        glVertex2i(0,20);
        glVertex2i(0,-20);
        glEnd();
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_LINE_STRIP);
        float A=5;float B=2;float C=3;float D=1.2;
        for(float t =-10.0; t<=10.0; t+=00.1)
        {
            //glVertex2f(t,2*t+1);
            //glVertex3f (0.5-t*t, t, 0.0);
            //glVertex3f(t, (t-3)*(t-2)*(t-1)*(t)*(t+1)*(t+2)*(t+3),0.0);
            glVertex2f(t,A*sin(B*t + C) + D);
        }
    glEnd();

    glFlush ();

}
void myinit()
{
	glClearColor(1,1,1,0);  //untuk memberi warna pada background
	 // membulatkan point
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
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Kurva Trigonometri");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
