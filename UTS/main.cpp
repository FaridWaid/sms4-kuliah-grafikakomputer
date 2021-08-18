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
#include <math.h>

using namespace std;
float posX = 0.0;
float posY = 0.0;
bool changeColor = false;


int addRGB()
{
    int color = rand() % 256;
    return color;
}

void lingkaran(float radius, float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(1.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    for(float t =0.0; t<=6.28; t+=0.01){
        glVertex2f(cos(t)*radius,sin(t)*radius);
    }
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void bg_lancip(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
       glVertex3f(-7.6509305635783, -0.9360338222362, 0.0);
       glVertex3f(-4.0, 1.0,0.0);
       glVertex3f(-4.0, -19.0 ,0.0);
       glVertex3f(-7.0, -19.0 ,0.0);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void bg_kotak(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
       glVertex2f(-4.473058288496, -1.2);
       glVertex2f(-2.2378357719362, -2.0);
       glVertex2f(-1.8, -14.0);
       glVertex2f(-4.0, -14.0);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void gedung(float t, float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(0.0, 0.0, 1.0);
    }
       glVertex2f(-15.7, -4.6+t);
       glVertex2f(-14.3, -3.7+t);
       glVertex2f(-14.3, -9.4);
       glVertex2f(-15.7, -10.3);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void kaca1(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
       glVertex2f(0.8493737410424, 2.3974347575952);
       glVertex2f(3.0, 1.2209164353018);
       glVertex2f(3.0, -5.4950423211232);
       glVertex2f(0.8983953378046, -3.9753728214942);
    glEnd();

    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(0.0, 0.0, 0.0);
    }
        glVertex2f(1.4263469885067, 1.455323377666);
        glVertex2f(1.8654481826454, 1.2641018898959);
        glVertex2f(1.8937772919447, 0.7895893091331);
        glVertex2f(1.4192647111819, 0.9666462422535);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2408088808608, 1.143703175374);
        glVertex2f(2.7011569069739, 0.9666462422535);
        glVertex2f(2.7224037389484, 0.5700387120637);
        glVertex2f(2.2478911581856, 0.7046019812353);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.4334292658315, 0.4071463335929);
        glVertex2f(1.879612737295, 0.2371716777973);
        glVertex2f(1.9008595692695, -0.2090117936663);
        glVertex2f(1.412182433857, -0.0461194151955);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2713761983497, 0.1152968751544);
        glVertex2f(2.7063032647028, -0.0692176378439);
        glVertex2f(2.7150896700836, -0.4602126772927);
        glVertex2f(2.2625897929688, -0.3240233938892);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.4469444905894, -0.6269073973512);
        glVertex2f(1.902778701881, -0.7998100292204);
        glVertex2f(1.8949194913415, -1.2320666088934);
        glVertex2f(1.4155076484314, -1.0748823981032);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.3114576499356, -0.9412758189316);
        glVertex2f(2.7044181769111, -1.0906008191823);
        glVertex2f(2.7437142296086, -1.4835613461578);
        glVertex2f(2.287880018317, -1.3106587142885);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.5, -1.5);
        glVertex2f(1.9184971229601, -1.7036192412641);
        glVertex2f(1.887060280802, -2.1358758209371);
        glVertex2f(1.5, -2);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2957392288565, -1.8215073993567);
        glVertex2f(2.7122773874506, -1.9786916101469);
        glVertex2f(2.7279958085296, -2.3795113476619);
        glVertex2f(2.2800208077775, -2.2380455579508);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void kaca2(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
       glVertex2f(0.8493737410424, 2.3974347575952);
       glVertex2f(3.3004535791537, 1.2209164353018);
       glVertex2f(3.3024103856292, -5.4950423211232);
       glVertex2f(0.8983953378046, -3.9753728214942);
    glEnd();

    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(0.0, 0.0, 0.0);
    }
        glVertex2f(1.4263469885067, 1.455323377666);
        glVertex2f(1.8654481826454, 1.2641018898959);
        glVertex2f(1.8937772919447, 0.7895893091331);
        glVertex2f(1.4192647111819, 0.9666462422535);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2408088808608, 1.143703175374);
        glVertex2f(2.7011569069739, 0.9666462422535);
        glVertex2f(2.7224037389484, 0.5700387120637);
        glVertex2f(2.2478911581856, 0.7046019812353);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.4334292658315, 0.4071463335929);
        glVertex2f(1.879612737295, 0.2371716777973);
        glVertex2f(1.9008595692695, -0.2090117936663);
        glVertex2f(1.412182433857, -0.0461194151955);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2713761983497, 0.1152968751544);
        glVertex2f(2.7063032647028, -0.0692176378439);
        glVertex2f(2.7150896700836, -0.4602126772927);
        glVertex2f(2.2625897929688, -0.3240233938892);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.4469444905894, -0.6269073973512);
        glVertex2f(1.902778701881, -0.7998100292204);
        glVertex2f(1.8949194913415, -1.2320666088934);
        glVertex2f(1.4155076484314, -1.0748823981032);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.3114576499356, -0.9412758189316);
        glVertex2f(2.7044181769111, -1.0906008191823);
        glVertex2f(2.7437142296086, -1.4835613461578);
        glVertex2f(2.287880018317, -1.3106587142885);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.5, -1.5);
        glVertex2f(1.9184971229601, -1.7036192412641);
        glVertex2f(1.887060280802, -2.1358758209371);
        glVertex2f(1.5, -2);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2957392288565, -1.8215073993567);
        glVertex2f(2.7122773874506, -1.9786916101469);
        glVertex2f(2.7279958085296, -2.3795113476619);
        glVertex2f(2.2800208077775, -2.2380455579508);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.5, -2.5);
        glVertex2f(1.8853331677884, -2.6910747271902);
        glVertex2f(1.8853331677884, -3.1442960622122);
        glVertex2f(1.5, -3);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2902108937414, -2.8179767009963);
        glVertex2f(2.7071745219616, -2.9750934304706);
        glVertex2f(2.7132174730952, -3.3618423030227);
        glVertex2f(2.2781249914741, -3.2288973780829);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.486498392969, -3.5914744461005);
        glVertex2f(1.9095049723229, -3.7546341267084);
        glVertex2f(1.8974190700556, -4.1715977549287);
        glVertex2f(1.5, -4);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.3083397471422, -3.8694501982473);
        glVertex2f(2.7132174730952, -4.0265669277216);
        glVertex2f(2.7373892776297, -4.3951869468728);
        glVertex2f(2.3083397471422, -4.2682849730667);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void kaca3(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
       glVertex2f(0.8493737410424, 2.3974347575952);
       glVertex2f(3.0, 1.2209164353018);
       glVertex2f(3.0, -5.4950423211232);
       glVertex2f(0.8983953378046, -3.9753728214942);
    glEnd();

    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(0.0, 0.0, 0.0);
    }
        glVertex2f(1.4263469885067, 1.455323377666);
        glVertex2f(1.8654481826454, 1.2641018898959);
        glVertex2f(1.8937772919447, 0.7895893091331);
        glVertex2f(1.4192647111819, 0.9666462422535);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2408088808608, 1.143703175374);
        glVertex2f(2.7011569069739, 0.9666462422535);
        glVertex2f(2.7224037389484, 0.5700387120637);
        glVertex2f(2.2478911581856, 0.7046019812353);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.4334292658315, 0.4071463335929);
        glVertex2f(1.879612737295, 0.2371716777973);
        glVertex2f(1.9008595692695, -0.2090117936663);
        glVertex2f(1.412182433857, -0.0461194151955);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2713761983497, 0.1152968751544);
        glVertex2f(2.7063032647028, -0.0692176378439);
        glVertex2f(2.7150896700836, -0.4602126772927);
        glVertex2f(2.2625897929688, -0.3240233938892);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.4469444905894, -0.6269073973512);
        glVertex2f(1.902778701881, -0.7998100292204);
        glVertex2f(1.8949194913415, -1.2320666088934);
        glVertex2f(1.4155076484314, -1.0748823981032);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.3114576499356, -0.9412758189316);
        glVertex2f(2.7044181769111, -1.0906008191823);
        glVertex2f(2.7437142296086, -1.4835613461578);
        glVertex2f(2.287880018317, -1.3106587142885);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.5, -1.5);
        glVertex2f(1.9184971229601, -1.7036192412641);
        glVertex2f(1.887060280802, -2.1358758209371);
        glVertex2f(1.5, -2);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2957392288565, -1.8215073993567);
        glVertex2f(2.7122773874506, -1.9786916101469);
        glVertex2f(2.7279958085296, -2.3795113476619);
        glVertex2f(2.2800208077775, -2.2380455579508);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1.5, -2.5);
        glVertex2f(1.8853331677884, -2.6910747271902);
        glVertex2f(1.8853331677884, -3.1442960622122);
        glVertex2f(1.5, -3);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2.2902108937414, -2.8179767009963);
        glVertex2f(2.7071745219616, -2.9750934304706);
        glVertex2f(2.7132174730952, -3.3618423030227);
        glVertex2f(2.2781249914741, -3.2288973780829);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void rumah(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    if (changeColor){
        glColor3ub(addRGB(), addRGB(), addRGB());
    } else {
        glColor3f(0.0, 0.0, 1.0);
    }
       glVertex3f(0.4, -4.5, 0.0);
       glVertex3f(7.7, -8.4, 0.0);
       glVertex3f(7.7, -11.4, 0.0);
       glVertex3f(-6.9, -11.4, 0.0);
       glVertex3f(-6.9, -8.4, 0.0);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void atap(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
       glVertex3f(-1.0, -7.0, 0.0);
       glVertex3f(0.0, -7.0, 0.0);
       glVertex3f(0.0, -8.0, 0.0);
       glVertex3f(-1.0, -8.0, 0.0);
    glEnd();
    if (x != 0 || y != 0 || z != 0) //mengembalikan ke posisi awal
    {
        x = -x;
        y = -y;
        z = -z;
    }
    glTranslated(x, y, z);
}

void tutup(float x, float y, float z)
{
    glTranslated(x, y, z); //menetukan posisi
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
       glVertex3f(-7.0, 1.0, 0.0);
       glVertex3f(-6.0, 2.0, 0.0);
       glVertex3f(-3.0, -0.7, 0.0);
       glVertex3f(-2.0, -2.0, 0.0);
    glEnd();
    glFlush();
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
    lingkaran(8.0, 0.0+posX, 0.0+posY, 0.0);
    bg_lancip(0.0+posX,0.0+posY,0.0);
    bg_lancip(3.0+posX,3.0+posY,0.0);
    bg_lancip(6.0+posX,6.0+posY,0.0);
    bg_lancip(9.0+posX,3.0+posY ,0.0);
    bg_kotak(9.2+posX, 3.0+posY, 0.0);
    kaca2(2.8+posX, -0.5+posY, 0.0);// kaca kiri 4
    gedung(1.5, 18.0+posX, 4.8+posY, 0.0); // biru kiri 4
    kaca2(-0.0+posX, 0.8+posY, 0.0);// kaca kiri 3
    gedung(3.0, 15.2+posX, 6.0+posY, 0.0); // biru kiri 3
    kaca3(-3.0+posX, 0.6+posY, 0.0); // kaca kiri 2
    gedung(1.0, 12.5+posX, 5.0+posY, 0.0); // biru kiri 2
    kaca1(-5.8+posX, -1.9+posY, 0.0); // kaca kiri 1
    gedung(0, 9.5+posX, 3.4+posY, 0.0); // biru kiri 1
    tutup(8.3+posX, -5.85+posY, 0.0);
    rumah(-0.3+posX, 0.2+posY, 0.0);
    atap(-0.2+posX, -0.0+posY, 0.0);
    atap(1.3+posX, -0.0+posY, 0.0);
    atap(1.3+posX, -1.5+posY, 0.0);
    atap(-0.2+posX, -1.5+posY, 0.0);
    changeColor = false;
    glFlush ();
}

void inputan(unsigned char key, int x, int y){

    if(key=='d' || key == 'D'){
        posX += 0.5;
        cout << posX << endl;
        display();
    }
    if(key == 'a' || key == 'A'){
        posX -= 0.5;
        cout << posX << endl;
        display();
    }

    if(key == 'w' || key == 'W'){
        posY += 0.5;
        cout << posY << endl;
        display();
    }
    if(key == 's' || key == 'S'){
        posY -= 0.5;
        cout << posY << endl;
        display();
    }
    if(key == 'i' || key == 'I'){
        posX += 2.0;
        posY += 2.0;
        cout << posY << endl;
        display();
    }
    if(key == 'j' || key == 'J'){
        posX -= 2.0;
        posY -= 2.0;
        cout << posY << endl;
        display();
    }
    if(key == 'k' || key == 'K'){
        posX -= 2.0;
        posY += 2.0;
        cout << posY << endl;
        display();
    }
    if(key == 'l' || key == 'L'){
        posX += 2.0;
        posY -= 2.0;
        cout << posY << endl;
        display();
    }
    if(key == 'c' || key == 'C'){
        changeColor = true;
        display();
    }
    if(key == 'v' || key == 'V'){
        changeColor = false;
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
	gluOrtho2D(-20.0, 20.0, -20.0, 20.0);  //kordinat pada area menggambar
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[])
{
    glutInit( & argc, argv );
    glutInitWindowSize(400,400);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("190411100073 || Achmad Farid Alfa Waid || UTS");
    glutDisplayFunc(display);
    glutKeyboardFunc(inputan);
    myinit();
    glutMainLoop();
    return 0;
}
