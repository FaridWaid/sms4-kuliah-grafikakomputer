#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <Math.h>
#include <cstdio>


GLdouble pos[]= {0.0, 0.0, -30.0};
GLdouble viewdir[]= {0.0, 0.0, 0.0};
static GLfloat Rotx = 0.0f;
static GLfloat Roty = 0.0f;
static GLfloat PosX = 0.0f;
static GLfloat PosY = 0.0f;
bool changeColor = false;
GLfloat star = 0.0f;
int refresh = 10;

//ganti warna
int addRGB()
{
    int color = rand() % 256;
    return color;
}

//object bintang
void bintang(float x, float y, float z) {
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_TRIANGLES);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(154, 207, 240);
    }
        //ngarep
        glVertex3f(-4.5, -0.4, 0.0f);
        glVertex3f(-2.5, -2.3, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(154, 207, 240);
        glVertex3f(-4.5, -0.4, 0.0f);
        glVertex3f(-2.5, -2.3, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(-4.5, -0.4, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-1.8, -0.02, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(215, 223, 229);
        glVertex3f(-4.5, -0.4, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-1.8, -0.02, 0.0f);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(-3, -5, 0.0f);
        glVertex3f(-0.6, -3.7, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(154, 207, 240);
        glVertex3f(-3, -5, 0.0f);
        glVertex3f(-0.6, -3.7, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(-3, -5, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-2.5, -2.3, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(215, 223, 229);
        glVertex3f(-3, -5, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-2.5, -2.3, 0.0f);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(1.7, -4.9, 0.0f);
        glVertex3f(-0.6, -3.7, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(154, 207, 240);
        glVertex3f(1.7, -4.9, 0.0f);
        glVertex3f(-0.6, -3.7, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(1.7, -4.9, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(1.3, -2.3, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(215, 223, 229);
        glVertex3f(1.7, -4.9, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(1.3, -2.3, 0.0f);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(3.2, -0.4, 0.0f);
        glVertex3f(1.3, -2.3, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(154, 207, 240);
        glVertex3f(3.2, -0.4, 0.0f);
        glVertex3f(1.3, -2.3, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(3.2, -0.4, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(0.6, 0.04, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(215, 223, 229);
        glVertex3f(3.2, -0.4, 0.0f);
        glVertex3f(0.6, 0.04, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(-0.6, 2.4, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(0.6, 0.04, 0.0f);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(154, 207, 240);
        glVertex3f(-0.6, 2.4, 0.0f);
        glVertex3f(0.6, 0.04, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-0.5, -1.6, -1.0f);

        //ngarep
        glColor3ub(154, 207, 240);
        glVertex3f(-0.6, 2.4, 0.0f);
        glColor3ub(215, 223, 229);
        glVertex3f(-1.8, -0.02, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-0.5, -1.6, 1.0f);

        //mburi
        glColor3ub(215, 223, 229);
        glVertex3f(-0.6, 2.4, 0.0f);
        glColor3ub(154, 207, 240);
        glVertex3f(-1.8, -0.02, 0.0f);
        glVertex3f(-0.5, -1.6, -1.0f);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);

}

//object halaman
void halaman (float x, float y, float z) {
    glTranslated(x, y, z); //menetukan posisi
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(119, 49, 7);
    }
    //alas
    glBegin(GL_POLYGON);
        glVertex3f(7.0, -4.0, 3);
        glVertex3f(-7.0, -4.0, 3);
        glVertex3f(-7.0, -4.0, -15);
        glVertex3f(7.0, -4.0, -15);
    glEnd();
    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(119, 49, 7);
    }
        glVertex3f(7.0, -3.0, 3.0);
        glVertex3f(7.0, -3.0, -15.0);
        glVertex3f(7.0, -4.0, -15.0);
        glVertex3f(7.0, -4.0, 3.0);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(-7.0, -3.0, 3.0);
        glVertex3f(-7.0, -3.0, -15.0);
        glVertex3f(-7.0, -4.0, -15.0);
        glVertex3f(-7.0, -4.0, 3.0);
    glEnd();
    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(119, 49, 7);
    }
        glVertex3f(7.0, -3.0, 3);
        glVertex3f(-7.0, -3.0, 3);
        glVertex3f(-7.0, -4.0, 3);
        glVertex3f(7.0, -4.0, 3);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex3f(7.0, -3.0, -15);
        glVertex3f(-7.0, -3.0, -15);
        glVertex3f(-7.0, -4.0, -15);
        glVertex3f(7.0, -4.0, -15);
    glEnd();
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(61, 238, 73);
    }
    glBegin(GL_POLYGON);
        glVertex3f(7.0, -3.0, 3);
        glVertex3f(-7.0, -3.0, 3);
        glVertex3f(-7.0, -3.0, -15);
        glVertex3f(7.0, -3.0, -15);
    glEnd();

    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);

}

//object pohon
void pohon(float x, float y, float z){
    glTranslated(x, y, z); //menetukan posisi
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(104,70,14);
    }
    //batang
    GLUquadricObj *pObj;
    pObj = gluNewQuadric();
    gluQuadricNormals(pObj, GLU_SMOOTH);

    glPushMatrix();
    glRotatef(270,1,0,0);
    gluCylinder(pObj, 4, 0.7, 30, 25, 50);
    glPopMatrix();

    /*
    glPushMatrix();
    glColor3ub(104,70,14);
    glTranslatef(0,27,0);
    glRotatef(330,1,0,0);
    gluCylinder(pObj, 0.6, 0.1, 15, 25, 25);
    glPopMatrix();

    */
    //daun
    glPushMatrix();
    glColor3ub(18,118,13);
    glScaled(8, 8, 8);
    glTranslatef(0,4,0);
    glutSolidDodecahedron();
    glPopMatrix();

    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

//object rumah
void rumah(float x, float y, float z) {
    glTranslated(x, y, z); //menetukan posisi
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(81, 172, 242);
    }
    //belakang
    glBegin(GL_POLYGON);
    glVertex3f(-7.0, -3.0, 3.0);
    glVertex3f(7.0, -3.0, 3.0);
    glVertex3f(7.0, 3.0, 3.0);
    glVertex3f(-7.0, 3.0, 3.0);
    glEnd();

    //depan
    glBegin(GL_POLYGON); //depan sisi kanan
    glVertex3f(-1.0, 3.0, -3.0);
    glVertex3f(-7.0, 3.0, -3.0);
    glVertex3f(-7.0, -3.0, -3.0);
    glVertex3f(-1.0, -3.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //depan tengah
    glVertex3f(-2.0, 3.0, -7.0);
    glVertex3f(-7.0, 3.0, -7.0);
    glVertex3f(-7.0, -3.0, -7.0);
    glVertex3f(-2.0, -3.0, -7.0);
    glEnd();glBegin(GL_POLYGON); //depan tengah
    glVertex3f(-1.0, 3.0, -3.0);
    glVertex3f(-1.0, 0.0, -3.0);
    glVertex3f(3.0, 0.0, -3.0);
    glVertex3f(3.0, 3.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //depan kiri
    glVertex3f(3.0, 3.0, -3.0);
    glVertex3f(3.0, -3.0, -3.0);
    glVertex3f(3.5, -3.0, -3.0);
    glVertex3f(3.5, 3.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //depan kiri
    glVertex3f(3.5, -3.0, -3.0);
    glVertex3f(3.5, 0.0, -3.0);
    glVertex3f(5.5, 0.0, -3.0);
    glVertex3f(5.5, -3.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //depan kiri
    glVertex3f(3.5, 2.0, -3.0);
    glVertex3f(3.5, 3.0, -3.0);
    glVertex3f(5.5, 3.0, -3.0);
    glVertex3f(5.5, 2.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //depan kanan depan
    glVertex3f(5.5, 3.0, -3.0);
    glVertex3f(5.5, -3.0, -3.0);
    glVertex3f(7.0, -3.0, -3.0);
    glVertex3f(7.0, 3.0, -3.0);
    glEnd();

    //pintu jendela
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(250, 135, 0);
    }
    glBegin(GL_POLYGON); //pintu kiri
    glVertex3f(3.0, 0.0, -3.0);
    glVertex3f(1.1, 0.0, -3.0);
    glVertex3f(1.1, -3.0, -3.0);
    glVertex3f(3.0, -3.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //pintu kanan
    glVertex3f(-1.0, 0.0, -3.0);
    glVertex3f(0.9, 0.0, -3.0);
    glVertex3f(0.9, -3.0, -3.0);
    glVertex3f(-1.0, -3.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //jendela kiri
    glVertex3f(5.5, 2.0, -3.0);
    glVertex3f(5.5, 0.0, -3.0);
    glVertex3f(3.5, 0.0, -3.0);
    glVertex3f(3.5, 2.0, -3.0);
    glEnd();
    glBegin(GL_POLYGON); //jendela kanan depan
    glVertex3f(-5.5, 2.0, -7.1);
    glVertex3f(-3.5, 2.0, -7.1);
    glVertex3f(-3.5, 0.0, -7.1);
    glVertex3f(-5.5, 0.0, -7.1);
    glEnd();
    glBegin(GL_POLYGON); //jendela samping
    glVertex3f(-1.9, 2.0, -4.0);
    glVertex3f(-1.9, 2.0, -6.0);
    glVertex3f(-1.9, 0.0, -6.0);
    glVertex3f(-1.9, 0.0, -4.0);
    glEnd();

    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(0, 0, 0);
    }
    glLineWidth(4);
    glBegin(GL_LINES); //garis
    glVertex3f(1.0, 0.0, -3.0); //pada pintu
    glVertex3f(1.0, -3.0, -3.0);
    glVertex3f(4.5, 2.0, -3.1); //pada jendela kiri
    glVertex3f(4.5, 0.0, -3.1);
    glVertex3f(3.5, 1.0, -3.1);
    glVertex3f(5.5, 1.0, -3.1);
    glVertex3f(-4.5, 2.0, -7.15); //jendela depan
    glVertex3f(-4.5, 0.0, -7.15);
    glVertex3f(-3.5, 1.0, -7.15);
    glVertex3f(-5.5, 1.0, -7.15);
    glEnd();
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex3f(1.5, -2.0, -3.1); //ganggang pintu
    glVertex3f(0.5, -2.0, -3.1);
    glEnd();

    //atap
    glColor3f(0.8,0.6,0.4);
    glBegin(GL_POLYGON); //atap bawah
    glVertex3f(-7.0, 3.0, 3.0);
    glVertex3f(7.0, 3.0, 3.0);
    glVertex3f(7.0, 3.0, -7.0);
    glVertex3f(-7.0, 3.0, -7.0);
    glEnd();
    glColor3f(0.4,0.2,0.0);
    glBegin(GL_TRIANGLE_FAN); //atap kiri
    glVertex3f(7.0, 3.0, 3.0);
    glVertex3f(7.0, 7.0, -2.0);
    glVertex3f(7.0, 3.0, -7.0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN); //atap kanan
    glVertex3f(-7.0, 3.0, 3.0);
    glVertex3f(-7.0, 7.0, -2.0);
    glVertex3f(-7.0, 3.0, -7.0);
    glEnd();
    glBegin(GL_POLYGON); //atap samping
    glVertex3f(-7.0, 7.0, -2.0);
    glVertex3f(-7.0, 3.0, 3.0);
    glVertex3f(7.0, 3.0, 3.0);
    glVertex3f(7.0, 7.0, -2.0);
    glEnd();
    glBegin(GL_POLYGON); //atap samping
    glVertex3f(7.0, 7.0, -2.0);
    glVertex3f(7.0, 3.0, -7.0);
    glVertex3f(-7.0, 3.0, -7.0);
    glVertex3f(-7.0, 7.0, -2.0);
    glEnd();

    //samping
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(163, 202, 186);
    }
    glBegin(GL_POLYGON); //dinding samping
    glVertex3f(-2.0, 3.0, -3.0);
    glVertex3f(-2.0, 3.0, -7.0);
    glVertex3f(-2.0, -3.0, -7.0);
    glVertex3f(-2.0, -3.0, -3.0);
    glEnd();
     if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(81, 172, 242);
    }
    glBegin(GL_POLYGON); //dinding kanan
    glVertex3f(-7.0, 3.0, 3.0);
    glVertex3f(-7.0, 3.0, -7.0);
    glVertex3f(-7.0, -3.0, -7.0);
    glVertex3f(-7.0, -3.0, 3.0);
    glEnd();
    glBegin(GL_POLYGON); //dinding kiri
    glVertex3f(7.0, 3.0, -3.0);
    glVertex3f(7.0, 3.0, 3.0);
    glVertex3f(7.0, -3.0, 3.0);
    glVertex3f(7.0, -3.0, -3.0);
    glEnd();

    //bawah
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(0.0,1.0,0.0);
    }
    glBegin(GL_POLYGON); //bawah rumah depan
    glVertex3f(-2.0, -3.0, -3.0);
    glVertex3f(-7.0, -3.0, -3.0);
    glVertex3f(-7.0, -3.0, -7.0);
    glVertex3f(-2.0, -3.0, -7.0);
    glEnd();
    glBegin(GL_POLYGON); //bawah rumah
    glVertex3f(7.0, -3.0, 3.0);
    glVertex3f(-7.0, -3.0, 3.0);
    glVertex3f(-7.0, -3.0, -3.0);
    glVertex3f(7.0, -3.0, -3.0);
    glEnd();

    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);

}

//object bulan
void bulan(float x, float y, float z){
    glTranslated(x, y, z); //menetukan posisi
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3ub(158, 156, 160);
    }
    glutSolidSphere(5.0,100,16);
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(pos[0], pos[1], pos[2], viewdir[0], viewdir[1],viewdir[2], 0.0, 1.0, 0.0);
    glPushMatrix();
        glRotatef(Rotx, 1.0f, 0.0f, 0.0f);
        glRotatef(Roty, 0.0f, 1.0f, 0.0f);

        //rumah dan halaman
        halaman(0.0+PosX,0.0+PosY,0.0);
        rumah(0.0+PosX,0.0+PosY,0.0);

        //pohon
        glPushMatrix();
            glScalef(0.2, 0.2, 0.2);
            pohon(25.0+(5*PosX),-15.0+(5*PosY),-60.0);
        glPopMatrix();

        //bintang dan bulan
        glPushMatrix();
            glRotatef(star, 0.0f, 1.0f, 0.0f);
            bintang(-10.0+PosX,15.0+PosY,0.0);
            bintang(12.0+PosX,15.0+PosY,0.0);
            bulan(0+PosX,15+PosY,0);
            glutSwapBuffers();
            star -= 0.20f;
        glPopMatrix();

    glPopMatrix();
    glFlush();
}

//fungsi timer gerak
void timer(int value) {
   glutTimerFunc(refresh, timer, 0);
   glutPostRedisplay();
}

//fungsi inputan mouse
void inputanMouse(int button, int state, int x, int y){
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if(state==GLUT_DOWN)
            refresh = 10;
            glutTimerFunc(0, timer, 0);
            glutPostRedisplay();
        break;
    case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)
            refresh = 10000;
            glutTimerFunc(0, timer, 0);
            glutPostRedisplay();
        break;
    default:
    break;
    }
}

//fungsi rotate object
void SpecialKeys(int key, int x, int y){
    if(key == GLUT_KEY_UP)
        Rotx-= 5.0f;

    if(key == GLUT_KEY_DOWN)
        Rotx += 5.0f;

    if(key == GLUT_KEY_LEFT)
        Roty -= 5.0f;

    if(key == GLUT_KEY_RIGHT)
        Roty += 5.0f;

    if(key > 356.0f)
        Rotx = 0.0f;

    if(key < -1.0f)
        Rotx = 355.0f;

    if(key > 356.0f)
        Roty = 0.0f;

    if(key < -1.0f)
        Roty = 355.0f;

    // Refresh the Window
    glutPostRedisplay();
    }

// fungsi reshape tampilan
void reshape (int w, int h){

    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-20.0,40.0,-40.0,20.0,20.0,-20.0);
    gluPerspective(100.0, (GLfloat) w/(GLfloat) h, 0.1, 200.0);
    //glOrtho(-5,5,-5,5,-5,5);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

//fungsi inputan pindah object  dan ganti warna
void inputan(unsigned char key, int x, int y){
    if(key=='d' || key == 'D'){
        PosX += 0.5;
        display();
    }
    if(key == 'a' || key == 'A'){
        PosX -= 0.5;
        display();
    }

    if(key == 'w' || key == 'W'){
        PosY += 0.5;
        display();
    }
    if(key == 's' || key == 'S'){
        PosY -= 0.5;
        display();
    }
    if(key == 'c' || key == 'C'){
        changeColor = true;
        display();
    }
    if(key == 'b' || key == 'B'){
        changeColor = false;
        display();
    }
    if (key=='v') {
        pos[2] += 2.0;
        display();
    }
    if (key=='g') {
        pos[2] -= 2.0;
        display();
    }
    if (key=='p') {
        refresh = 10;
        glutTimerFunc(0, timer, 0);
    }
    if (key=='P') {
        refresh = 10000;
        glutTimerFunc(0, timer, 0);
        glutPostRedisplay();
    }
    glutPostRedisplay();
}

//fungsi inisialisasi dan lightning
void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluPerspective(100.0f, 1.0, 0.1f, 100.0f);//pengaturan skala
    glOrtho(-20.0,20.0,-20.0,20.0,20.0,-20.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,1.0);
    //glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glLoadIdentity();
    //gluPerspective(100.0, (GLfloat) w/(GLfloat) h, 0.1, 100.0);
    //glOrtho(-5,5,-5,5,-5,5);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glEnable(GL_DEPTH_TEST);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat ambientLight[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    GLfloat diffuseLight[] = { 0.8f, 0.8f, 0.8, 1.0f };
    GLfloat specularLight[] = { 0.5f, 0.5f, 0.5f, 1.0f };
    //GLfloat position[] = { 0.0f, 20.0f, 5.0f, 10.0f };
    GLfloat light_position[] = { 5.0, 5.0, 1.0, 0.0 };

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);


    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);


}


int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Project UAS - Pemandangan Rumah Di Malam Hari");
    myinit();
    glutMouseFunc(inputanMouse);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutSpecialFunc(SpecialKeys);
    glutKeyboardFunc(inputan);
    glutMainLoop();
    return 0;
}


