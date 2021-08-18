#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void myinit()
{
    glClearColor(1,1,1,0);  //untuk memberi warna pada background
    glColor3f(1.0, 0.0, 0.0); // color pada object
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-15.0, 15.0, -15.0, 15.0);  // kordinat pada area menggambar
    glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
        //untuk membentuk garis sumbu x
        glVertex3f(-15.0,0.0,0.0);
        glVertex3f(15.0,0.0,0.0);

        //untuk membentuk garis sumbu y
        glVertex3f(0.0,-15.0,0.0);
        glVertex3f(0.0,15.0,0.0);

        glVertex3f(-8.0,10.0,0.0);
        glVertex3f(-8.0,2.0,0.0);
        glVertex3f(-8.0,10.0,0.0);
        glVertex3f(-2.0,10.0,0.0);
        glVertex3f(-8.0,8.0,0.0);
        glVertex3f(-2.0,8.0,0.0);
    glEnd();

    glFlush ();
}


int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Fredy Dwi Alfian | 190411100179");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
