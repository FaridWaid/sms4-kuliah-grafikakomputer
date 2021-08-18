#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <iostream>
using namespace std;
float theta = 0.0, viewmatax = 0.0, viewmatay = 0.0, viewmataz = -100.0, viewx = 0.0, viewy = 0.0, viewz = 0.0,
yangle = 0.0, zangle = 0.0;
void body()
{
    glBegin(GL_QUADS); //kap depan mobil
            glVertex3f(0.2,0.4,0.2); //depan
            glVertex3f(0.2,0.2,0.2);
            glVertex3f(0.2,0.2,1);
            glVertex3f(0.2,0.4,1);

            // kiri
            glVertex3f(0.2,0.4,1);
            glVertex3f(0.2,0.2,1);
            glVertex3f(0.8,0.2,1);
            glVertex3f(0.8,0.45,1);

            //kanan
            glVertex3f(0.2,0.4,0.2);
            glVertex3f(0.2,0.2,0.2);
            glVertex3f(0.8,0.2,0.2);
            glVertex3f(0.8,0.45,0.2);

            //bawah
            glVertex3f(0.8,0.2,1);
            glVertex3f(0.2,0.2,1);
            glVertex3f(0.2,0.2,0.2);
            glVertex3f(0.8,0.2,0.2);

            //belakang
            glVertex3f(0.8,0.45,1);
            glVertex3f(0.8,0.2,1);
            glVertex3f(0.8,0.2,0.2);
            glVertex3f(0.8,0.45,0.2);
        glEnd();

        glBegin(GL_QUADS);//body tengah

            //atas
            glVertex3f(0.8,0.45,0.2);
            glVertex3f(0.8,0.45,1);
            glVertex3f(1.5,0.45,1);
            glVertex3f(1.5,0.45,0.2);

            //kiri
            glVertex3f(1.5,0.45,0.2);
            glVertex3f(1.5,0.2,0.2);
            glVertex3f(0.8,0.2,0.2);
            glVertex3f(0.8,0.45,0.2);

            //kanan
            glVertex3f(0.8,0.45,1);
            glVertex3f(0.8,0.2,1);
            glVertex3f(1.5,0.2,1);
            glVertex3f(1.5,0.45,1);

            //belakang
            glVertex3f(1.5,0.45,1);
            glVertex3f(1.5,0.2,1);
            glVertex3f(1.5,0.2,0.2);
            glVertex3f(1.5,0.45,0.2);

            //bawah
            glVertex3f(0.8,0.2,1);
            glVertex3f(0.8,0.2,0.2);
            glVertex3f(1.5,0.2,0.2);
            glVertex3f(1.5,0.2,1);
        glEnd();

        glBegin(GL_QUADS);//bak pick up

            //bak tegak depan
            glVertex3f(1.55, 0.45, 1);
            glVertex3f(1.55, 0.2, 1);
            glVertex3f(1.55, 0.2, 0.2);
            glVertex3f(1.55, 0.45, 0.2);

            //bak tegak kiri
            glVertex3f(1.55, 0.45, 0.95);
            glVertex3f(1.55, 0.2, 0.85);
            glVertex3f(2.40, 0.2, 0.85);
            glVertex3f(2.40, 0.45, 0.95);

            //bak tegak kanan
            glVertex3f(1.55, 0.45, 0.25);
            glVertex3f(1.55, 0.2, 0.35);
            glVertex3f(2.40, 0.2, 0.35);
            glVertex3f(2.40, 0.45, 0.25);

            //bak tegak belakang
            glVertex3f(2.35, 0.45, 0.2);
            glVertex3f(2.35, 0.2, 0.2);
            glVertex3f(2.35, 0.2, 1);
            glVertex3f(2.35, 0.45, 1);

            //bak penutup kiri
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(1.5, 0.2, 1);
            glVertex3f(2.4, 0.2, 1);
            glVertex3f(2.4, 0.45, 1);

            //bak penutup kanan
            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(2.4, 0.45, 0.2);
            glVertex3f(2.4, 0.2, 0.2);
            glVertex3f(1.5, 0.2, 0.2);

            //bak penutup bawah
            glVertex3f(1.5, 0.2, 1);
            glVertex3f(1.5, 0.2, 0.2);
            glVertex3f(2.4, 0.2, 0.2);
            glVertex3f(2.4, 0.2, 1);
        glEnd();
}
void dashboard()
{
    glBegin(GL_QUADS); //bagian dashboard
            //dashboard depan
            glColor3b(40,40,40); //kiri
            glVertex3f(0.2, 0.26, 0.2);
            glVertex3f(0.1, 0.26, 0.2);
            glVertex3f(0.1, 0.2, 0.2);
            glVertex3f(0.2, 0.2, 0.2);

            glVertex3f(0.2, 0.2, 1); //kanan
            glVertex3f(0.2, 0.26, 1);
            glVertex3f(0.1, 0.26, 1);
            glVertex3f(0.1, 0.2, 1);

            glVertex3f(0.1, 0.2, 1); //depan
            glVertex3f(0.1, 0.26, 1);
            glVertex3f(0.1, 0.26, 0.2);
            glVertex3f(0.1, 0.2, 0.2);

            glVertex3f(0.2, 0.26, 0.2); //atas
            glVertex3f(0.1, 0.26, 0.2);
            glVertex3f(0.1, 0.26, 1);
            glVertex3f(0.2, 0.26, 1);

            glVertex3f(0.2, 0.2, 0.2); //bawah
            glVertex3f(0.1, 0.2, 0.2);
            glVertex3f(0.1, 0.2, 1);
            glVertex3f(0.2, 0.2, 1);

            //dashboard belakang
            glVertex3f(2.4, 0.26, 1); //kiri
            glVertex3f(2.5, 0.26, 1);
            glVertex3f(2.5, 0.2, 1);
            glVertex3f(2.4, 0.2, 1);

            glVertex3f(2.4, 0.26, 0.2); //kanan
            glVertex3f(2.5, 0.26, 0.2);
            glVertex3f(2.5, 0.2, 0.2);
            glVertex3f(2.4, 0.2, 0.2);

            glVertex3f(2.5, 0.26, 1); //depan
            glVertex3f(2.5, 0.2, 1);
            glVertex3f(2.5, 0.2, 0.2);
            glVertex3f(2.5, 0.26, 0.2);

            glVertex3f(2.4, 0.26, 1); //atas
            glVertex3f(2.5, 0.26, 1);
            glVertex3f(2.5, 0.26, 0.2);
            glVertex3f(2.4, 0.26, 0.2);

            glVertex3f(2.5, 0.2, 1); //bawah
            glVertex3f(2.4, 0.2, 1);
            glVertex3f(2.4, 0.2, 0.2);
            glVertex3f(2.5, 0.2, 0.2);

        //garis bawah mobil
            //kanan
            glVertex3f(2.4, 0.26, 0.21);
            glVertex3f(2.4, 0.2, 0.21);
            glVertex3f(0.2, 0.2, 0.21);
            glVertex3f(0.2, 0.26, 0.21);

            //kiri
            glVertex3f(2.4, 0.26, 1.01);
            glVertex3f(2.4, 0.2, 1.01);
            glVertex3f(0.2, 0.2, 1.01);
            glVertex3f(0.2, 0.26, 1.01);
        glEnd();
}
void atas()
{
    glBegin(GL_QUADS);
            //atas sendiri
            glVertex3f(1, 0.65, 0.9);
            glVertex3f(1.42, 0.65, 0.9);
            glVertex3f(1.42, 0.65, 0.3);
            glVertex3f(1, 0.65, 0.3);

            //pembentuk bak pick up
            //bak kiri
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(1.5, 0.45, 0.95);
            glVertex3f(2.4, 0.45, 0.95);
            glVertex3f(2.4,0.45, 1);

            //bak depan
            glVertex3f(1.55, 0.45, 1);
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(1.55, 0.45, 0.2);

            //bak kanan
            glVertex3f(1.5, 0.45, 0.25);
            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(2.4, 0.45, 0.2);
            glVertex3f(2.4, 0.45, 0.25);

            //bak belakang
            glVertex3f(2.35, 0.45, 0.2);
            glVertex3f(2.35, 0.45, 1);
            glVertex3f(2.4, 0.45, 1);
            glVertex3f(2.4, 0.45, 0.2);

            glVertex3f(0.2,0.4,1); //atas kap mobil
            glVertex3f(0.8,0.45,1);
            glVertex3f(0.8,0.45,0.2);
            glVertex3f(0.2,0.4,0.2);
    glEnd();
}
void kaca()
{
    glBegin(GL_QUADS);
            //kaca depan
            glVertex3f(0.97, 0.62, 0.88);
            glVertex3f(0.83, 0.48, 0.96);
            glVertex3f(0.83, 0.48, 0.25);
            glVertex3f(0.97, 0.62, 0.32);

            //kaca kiri depan
            glVertex3f(0.86, 0.48, 0.99);
            glVertex3f(1, 0.62, 0.91);
            glVertex3f(1.29, 0.62, 0.91);
            glVertex3f(1.29, 0.48, 0.98);

            //kaca kiri belakang
            glVertex3f(1.35, 0.48, 0.98);
            glVertex3f(1.35, 0.62, 0.92);
            glVertex3f(1.4, 0.62, 0.91);
            glVertex3f(1.46, 0.48, 0.98);

            //kaca kanan depan
            glVertex3f(1, 0.62, 0.29);
            glVertex3f(1.29, 0.62, 0.29);
            glVertex3f(1.29, 0.48, 0.22);
            glVertex3f(0.86, 0.48, 0.21);

            //kaca kanan belakang
            glVertex3f(1.35, 0.62, 0.28);
            glVertex3f(1.4, 0.62, 0.29);
            glVertex3f(1.46, 0.48, 0.22);
            glVertex3f(1.35, 0.48, 0.22);

            //kaca belakang
            glVertex3f(1.43, 0.62, 0.88);
            glVertex3f(1.49, 0.48, 0.95);
            glVertex3f(1.49, 0.48, 0.25);
            glVertex3f(1.43, 0.62, 0.31);
    glEnd();
}
void penutupkaca()
{
    glBegin(GL_QUADS);
            //penutup kaca belakang bawah
            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(1.49, 0.48, 0.25);
            glVertex3f(1.49, 0.48, 0.95);
            glVertex3f(1.5, 0.45, 1);

            //penutup kaca belakang kanan
            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(1.49, 0.48, 0.25);
            glVertex3f(1.43, 0.62, 0.31);
            glVertex3f(1.42, 0.65, 0.3);

            //penutup kaca belakang kiri
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(1.49, 0.48, 0.95);
            glVertex3f(1.43, 0.62, 0.88);
            glVertex3f(1.42, 0.65, 0.9);

            //penutup kaca belakang atas
            glVertex3f(1.42, 0.65, 0.9);
            glVertex3f(1.43, 0.62, 0.88);
            glVertex3f(1.43, 0.62, 0.31);
            glVertex3f(1.42, 0.65, 0.3);

            //penutup kaca kiri bawah
            glVertex3f(0.86, 0.48, 0.99);
            glVertex3f(0.8, 0.45, 1);
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(1.46, 0.48, 0.98);

            //penutup kaca kiri depan
            glVertex3f(0.8, 0.45, 1);
            glVertex3f(0.86, 0.48, 0.99);
            glVertex3f(1, 0.62, 0.91);
            glVertex3f(1, 0.65, 0.9);

            //penutup kaca kiri belakang
            glVertex3f(1.46, 0.48, 0.98);
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(1.42, 0.65, 0.9);
            glVertex3f(1.4, 0.62, 0.91);

            //penutup kaca kiri tengah
            glVertex3f(1.29, 0.65, 0.9);
            glVertex3f(1.29, 0.45, 1);
            glVertex3f(1.35, 0.45, 1);
            glVertex3f(1.35, 0.65, 0.9);

            //penutup kaca kiri atas
            glVertex3f(1, 0.65, 0.9);
            glVertex3f(1, 0.62, 0.91);
            glVertex3f(1.4, 0.62, 0.91);
            glVertex3f(1.42, 0.65, 0.9);

            //penutup kaca kanan bawah
            glVertex3f(0.8, 0.45, 0.2);
            glVertex3f(0.86, 0.48, 0.21);
            glVertex3f(1.46, 0.48, 0.22);
            glVertex3f(1.5, 0.45, 0.2);

            //penutup kaca kanan depan
            glVertex3f(0.8, 0.45, 0.2);
            glVertex3f(0.86, 0.48, 0.21);
            glVertex3f(1, 0.62, 0.29);
            glVertex3f(1, 0.65, 0.3);

            //penutup kaca kanan belakang
            glVertex3f(1.42, 0.65, 0.3);
            glVertex3f(1.4, 0.62, 0.29);
            glVertex3f(1.46, 0.48, 0.22);
            glVertex3f(1.5, 0.45, 0.2);

            //penutup kaca kanan tengah
            glVertex3f(1.35, 0.65, 0.3);
            glVertex3f(1.29, 0.65, 0.3);
            glVertex3f(1.29, 0.45, 0.2);
            glVertex3f(1.35, 0.45, 0.2);

            //penutup kaca kanan atas
            glVertex3f(1, 0.65, 0.3);
            glVertex3f(1, 0.62, 0.29);
            glVertex3f(1.4, 0.62, 0.29);
            glVertex3f(1.42, 0.65, 0.3);

            //penutup kaca depan bawah
            glVertex3f(0.8, 0.45, 0.2);
            glVertex3f(0.83, 0.48, 0.25);
            glVertex3f(0.83, 0.48, 0.96);
            glVertex3f(0.8, 0.45, 1);

            //penutup kaca depan kiri
            glVertex3f(0.8, 0.45, 0.2);
            glVertex3f(0.83, 0.48, 0.25);
            glVertex3f(0.97, 0.62, 0.32);
            glVertex3f(1, 0.65, 0.3);

            //penutup kaca depan kanan
            glVertex3f(0.8, 0.45, 1);
            glVertex3f(0.83, 0.48, 0.96);
            glVertex3f(0.97, 0.62, 0.88);
            glVertex3f(1, 0.65, 0.9);

            //penutup kaca depan atas
            glVertex3f(1, 0.65, 0.3);
            glVertex3f(0.97, 0.62, 0.32);
            glVertex3f(0.97, 0.62, 0.88);
            glVertex3f(1, 0.65, 0.9);
    glEnd();
}
void garisbody()
{
    glBegin(GL_QUADS);
            //bak
            glVertex3f(1.55, 0.45, 0.95);
            glVertex3f(2.35, 0.45, 0.95);
            glVertex3f(2.35, 0.45, 0.25);
            glVertex3f(1.55, 0.45, 0.25);

            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(1.5, 0.45, 1);
            glVertex3f(2.4, 0.45, 1);
            glVertex3f(2.4, 0.45, 0.2);

            glVertex3f(2.4, 0.45, 0.2);
            glVertex3f(2.4, 0.45, 1);
            glVertex3f(2.4, 0.2, 1);
            glVertex3f(2.4, 0.2, 0.2);

            //atas
            glVertex3f(1.5, 0.45, 0.2);
            glVertex3f(1.42, 0.65, 0.3);
            glVertex3f(1.42, 0.65, 0.9);
            glVertex3f(1.5, 0.45, 1);

            glVertex3f(1, 0.65, 0.9);
            glVertex3f(1.42, 0.65, 0.9);
            glVertex3f(1.42, 0.65, 0.3);
            glVertex3f(1, 0.65, 0.3);

            glVertex3f(1, 0.65, 0.3);
            glVertex3f(0.8, 0.45, 0.2);
            glVertex3f(0.8, 0.45, 1);
            glVertex3f(1, 0.65, 0.9);

            glVertex3f(0.8, 0.45, 0.2);
            glVertex3f(0.2, 0.4, 0.2);
            glVertex3f(0.2, 0.4, 1);
            glVertex3f(0.8, 0.45, 1);

            glVertex3f(2.4, 0.2, 1);
            glVertex3f(0.2, 0.2, 1);
            glVertex3f(0.2, 0.2, 0.2);
            glVertex3f(2.4, 0.2, 0.2);

            glVertex3f(0.2, 0.4, 1);
            glVertex3f(0.2, 0.2, 1);
            glVertex3f(0.2, 0.2, 0.2);
            glVertex3f(0.2, 0.4, 0.2);

            //kaca depan
            glVertex3f(0.97, 0.62, 0.88);
            glVertex3f(0.83, 0.48, 0.96);
            glVertex3f(0.83, 0.48, 0.25);
            glVertex3f(0.97, 0.62, 0.32);

            //kaca kiri depan
            glVertex3f(0.86, 0.48, 0.99);
            glVertex3f(1, 0.62, 0.91);
            glVertex3f(1.29, 0.62, 0.91);
            glVertex3f(1.29, 0.48, 0.98);

            //kaca kiri belakang
            glVertex3f(1.35, 0.48, 0.98);
            glVertex3f(1.35, 0.62, 0.92);
            glVertex3f(1.4, 0.62, 0.91);
            glVertex3f(1.46, 0.48, 0.98);

            //kaca kanan depan
            glVertex3f(1, 0.62, 0.29);
            glVertex3f(1.29, 0.62, 0.29);
            glVertex3f(1.29, 0.48, 0.22);
            glVertex3f(0.86, 0.48, 0.21);

            //kaca kanan belakang
            glVertex3f(1.35, 0.62, 0.28);
            glVertex3f(1.4, 0.62, 0.29);
            glVertex3f(1.46, 0.48, 0.22);
            glVertex3f(1.35, 0.48, 0.22);

            //kaca belakang
            glVertex3f(1.43, 0.62, 0.88);
            glVertex3f(1.49, 0.48, 0.95);
            glVertex3f(1.49, 0.48, 0.25);
            glVertex3f(1.43, 0.62, 0.31);
    glEnd();
}
void jalan()
{
    glBegin(GL_QUADS);
            glVertex3f(-2.8, 0.04, 2);//lapisan atas
            glVertex3f(-2.8, 0.04, -1.2);
            glVertex3f(2.8, 0.04, -1.2);
            glVertex3f(2.8, 0.04, 2);

            glVertex3f(2.8, -0.06, 2);//lapisan bawah
            glVertex3f(-2.8, -0.06, 2);
            glVertex3f(-2.8, -0.06, -1.2);
            glVertex3f(2.8, -0.06, -1.2);

            glVertex3f(-2.8, 0.04, 2);//depan
            glVertex3f(-2.8, -0.06, 2);
            glVertex3f(-2.8, -0.06, -1.2);
            glVertex3f(-2.8, 0.04, -1.2);

            glVertex3f(-2.8, 0.04, -1.2);//kanan
            glVertex3f(-2.8, -0.06, -1.2);
            glVertex3f(2.8, 0.04, -1.2);
            glVertex3f(2.8, 0.04, -1.2);

            glVertex3f(2.8, 0.04, -1.2);//belakang
            glVertex3f(2.8, -0.06, -1.2);
            glVertex3f(2.8, -0.06, 2);
            glVertex3f(2.8, 0.04, 2);

            glVertex3f(2.8, 0.04, 2);//kiri
            glVertex3f(2.8, -0.06, 2);
            glVertex3f(-2.8, -0.06, 2);
            glVertex3f(-2.8, 0.04, 2);
    glEnd();
}
void putihjalan()
{
    glBegin(GL_QUADS);
            //pertama
            glVertex3f(2.5, 0.045, 0.6);//atas
            glVertex3f(2.5, 0.045, 0.2);
            glVertex3f(1, 0.045, 0.2);
            glVertex3f(1, 0.045, 0.6);

            glVertex3f(2.5, -0.06, 0.6);//bawah
            glVertex3f(2.5, -0.06, 0.2);
            glVertex3f(1, -0.06, 0.2);
            glVertex3f(1, -0.06, 0.6);

            glVertex3f(2.5, 0.045, 0.6);//belakang
            glVertex3f(2.5, -0.06, 0.6);
            glVertex3f(2.5, -0.06, 0.2);
            glVertex3f(2.5, 0.045, 0.2);

            glVertex3f(2.5, -0.06, 0.6);//kiri
            glVertex3f(2.5, 0.045, 0.6);
            glVertex3f(1, 0.045, 0.6);
            glVertex3f(1, -0.06, 0.6);

            glVertex3f(1, 0.045, 0.2);//kanan
            glVertex3f(1, -0.06, 0.2);
            glVertex3f(2.5, -0.06, 0.2);
            glVertex3f(2.5, 0.045, 0.2);

            glVertex3f(1, 0.045, 0.6);//depan
            glVertex3f(1, -0.06, 0.6);
            glVertex3f(1, -0.06, 0.2);
            glVertex3f(1, 0.045, 0.2);

            //kedua
            glVertex3f(0.5, 0.045, 0.6);//atas
            glVertex3f(0.5, 0.045, 0.2);
            glVertex3f(-1, 0.045, 0.2);
            glVertex3f(-1, 0.045, 0.6);

            glVertex3f(0.5, -0.06, 0.6);//bawah
            glVertex3f(0.5, -0.06, 0.2);
            glVertex3f(-1, -0.06, 0.2);
            glVertex3f(-1, -0.06, 0.6);

            glVertex3f(0.5, 0.045, 0.6);//belakang
            glVertex3f(0.5, -0.06, 0.6);
            glVertex3f(0.5, -0.06, 0.2);
            glVertex3f(0.5, 0.045, 0.2);

            glVertex3f(0.5, 0.045, 0.6);//kiri
            glVertex3f(0.5, -0.06, 0.6);
            glVertex3f(-1, -0.06, 0.6);
            glVertex3f(-1, 0.045, 0.6);

            glVertex3f(0.5, 0.045, 0.2);//kanan
            glVertex3f(0.5, -0.06, 0.2);
            glVertex3f(-1, -0.06, 0.2);
            glVertex3f(-1, 0.045, 0.2);

            glVertex3f(-1, 0.045, 0.6);//depan
            glVertex3f(-1, -0.06, 0.6);
            glVertex3f(-1, -0.06, 0.2);
            glVertex3f(-1, 0.045, 0.2);

            //ketiga
            glVertex3f(-1.5, 0.045, 0.6);//atas
            glVertex3f(-1.5, 0.045, 0.2);
            glVertex3f(-2.8, 0.045, 0.2);
            glVertex3f(-2.8, 0.045, 0.6);

            glVertex3f(-1.5, -0.06, 0.6);//bawah
            glVertex3f(-1.5, -0.06, 0.2);
            glVertex3f(-2.8, -0.06, 0.2);
            glVertex3f(-2.8, -0.06, 0.6);

            glVertex3f(-1.5, 0.045, 0.6);//belakang
            glVertex3f(-1.5, -0.06, 0.6);
            glVertex3f(-1.5, -0.06, 0.2);
            glVertex3f(-1.5, 0.045, 0.2);

            glVertex3f(-1.5, 0.045, 0.6);//kiri
            glVertex3f(-1.5, -0.06, 0.6);
            glVertex3f(-2.8, -0.06, 0.6);
            glVertex3f(-2.8, 0.045, 0.6);

            glVertex3f(-1.5, 0.045, 0.2);//kanan
            glVertex3f(-1.5, -0.06, 0.2);
            glVertex3f(-2.8, -0.06, 0.2);
            glVertex3f(-2.8, 0.045, 0.2);

//            glVertex3f(-2.8, 0.045, 0.6);//depan
//            glVertex3f(-2.8, -0.06, 0.6);
//            glVertex3f(-2.8, -0.06, 0.2);
//            glVertex3f(-2.8, 0.045, 0.2);
    glEnd();
}
void jalansamping()
{
    glBegin(GL_QUADS);
            //kiri
            glVertex3f(2.8, 0.14, 2);//atas
            glVertex3f(-2.8, 0.14, 2);
            glVertex3f(-2.8, 0.14, 3.6);
            glVertex3f(2.8, 0.14, 3.6);

            glVertex3f(2.8, -0.06, 2);//bawah
            glVertex3f(-2.8, -0.06, 2);
            glVertex3f(-2.8, -0.06, 3.6);
            glVertex3f(2.8, -0.06, 3.6);

            glVertex3f(2.8, 0.14, 3.6);//belakang
            glVertex3f(2.8, -0.06, 3.6);
            glVertex3f(2.8, -0.06, 2);
            glVertex3f(2.8, 0.14, 2);

            glVertex3f(2.8, 0.14, 2);//kanan
            glVertex3f(2.8, -0.06, 2);
            glVertex3f(-2.8, -0.06, 2);
            glVertex3f(-2.8, 0.14, 2);

            glVertex3f(-2.8, 0.14, 2);//depan
            glVertex3f(-2.8, -0.06, 2);
            glVertex3f(-2.8, -0.06, 3.6);
            glVertex3f(-2.8, 0.14, 3.6);

            glVertex3f(-2.8, 0.14, 3.6);//kiri
            glVertex3f(-2.8, -0.06, 3.6);
            glVertex3f(2.8, -0.06, 3.6);
            glVertex3f(2.8, 0.14, 3.6);

            //kanan
            glVertex3f(2.8, 0.14, -1.2);//atas
            glVertex3f(2.8, 0.14, -2.8);
            glVertex3f(-2.8, 0.14, -2.8);
            glVertex3f(-2.8, 0.14, -1.2);

            glVertex3f(2.8, -0.06, -1.2);//bawah
            glVertex3f(2.8, -0.06, -2.8);
            glVertex3f(-2.8, -0.06, -2.8);
            glVertex3f(-2.8, -0.06, -1.2);

            glVertex3f(2.8, -0.06, -1.2);//kiri
            glVertex3f(2.8, 0.14, -1.2);
            glVertex3f(-2.8, 0.14, -1.2);
            glVertex3f(-2.8, -0.06, -1.2);

            glVertex3f(2.8, -0.06, -1.2);//belakang
            glVertex3f(2.8, 0.14, -1.2);
            glVertex3f(2.8, 0.14, -2.8);
            glVertex3f(2.8, -0.06, -2.8);

            glVertex3f(2.8, 0.14, -2.8);//kanan
            glVertex3f(2.8, -0.06, -2.8);
            glVertex3f(-2.8, -0.06, -2.8);
            glVertex3f(-2.8, 0.14, -2.8);

            glVertex3f(-2.8, -0.06, -1.2);//depan
            glVertex3f(-2.8, 0.14, -1.2);
            glVertex3f(-2.8, 0.14, -2.8);
            glVertex3f(-2.8, -0.06, -2.8);
    glEnd();
}
void pagar()
{
    glBegin(GL_QUADS);

        //kanan
            //pertama
            glVertex3f(-2.8, 0.84, -2.4);//atas
            glVertex3f(-2.3, 0.84, -2.4);
            glVertex3f(-2.3, 0.84, -2.8);
            glVertex3f(-2.8, 0.84, -2.8);

            glVertex3f(-2.8, 0.14, -2.4);//depan
            glVertex3f(-2.8, 0.84, -2.4);
            glVertex3f(-2.3, 0.84, -2.4);
            glVertex3f(-2.3, 0.14, -2.4);

            glVertex3f(-2.3, 0.84, -2.4);//kiri
            glVertex3f(-2.3, 0.84, -2.8);
            glVertex3f(-2.3, 0.14, -2.8);
            glVertex3f(-2.3, 0.14, -2.4);

            glVertex3f(-2.8, 0.84, -2.4);//kanan
            glVertex3f(-2.8, 0.84, -2.8);
            glVertex3f(-2.8, 0.14, -2.8);
            glVertex3f(-2.8, 0.14, -2.4);

            glVertex3f(-2.8, 0.84, -2.8);//belakang
            glVertex3f(-2.3, 0.84, -2.8);
            glVertex3f(-2.3, 0.14, -2.8);
            glVertex3f(-2.8, 0.14, -2.8);

            //kedua
            glVertex3f(2.8, 0.84, -2.4);//atas
            glVertex3f(2.3, 0.84, -2.4);
            glVertex3f(2.3, 0.84, -2.8);
            glVertex3f(2.8, 0.84, -2.8);

            glVertex3f(2.8, 0.14, -2.4);//depan
            glVertex3f(2.8, 0.84, -2.4);
            glVertex3f(2.3, 0.84, -2.4);
            glVertex3f(2.3, 0.14, -2.4);

            glVertex3f(2.3, 0.84, -2.4);//kiri
            glVertex3f(2.3, 0.84, -2.8);
            glVertex3f(2.3, 0.14, -2.8);
            glVertex3f(2.3, 0.14, -2.4);

            glVertex3f(2.8, 0.84, -2.4);//kanan
            glVertex3f(2.8, 0.84, -2.8);
            glVertex3f(2.8, 0.14, -2.8);
            glVertex3f(2.8, 0.14, -2.4);

            glVertex3f(2.8, 0.84, -2.8);//belakang
            glVertex3f(2.3, 0.84, -2.8);
            glVertex3f(2.3, 0.14, -2.8);
            glVertex3f(2.8, 0.14, -2.8);

        //kiri
            //pertama
            glVertex3f(-2.8, 0.84, 3.2);//atas
            glVertex3f(-2.3, 0.84, 3.2);
            glVertex3f(-2.3, 0.84, 3.6);
            glVertex3f(-2.8, 0.84, 3.6);

            glVertex3f(-2.8, 0.14, 3.2);//depan
            glVertex3f(-2.8, 0.84, 3.2);
            glVertex3f(-2.3, 0.84, 3.2);
            glVertex3f(-2.3, 0.14, 3.2);

            glVertex3f(-2.3, 0.84, 3.2);//kiri
            glVertex3f(-2.3, 0.84, 3.6);
            glVertex3f(-2.3, 0.14, 3.6);
            glVertex3f(-2.3, 0.14, 3.2);

            glVertex3f(-2.8, 0.84, 3.2);//kanan
            glVertex3f(-2.8, 0.84, 3.6);
            glVertex3f(-2.8, 0.14, 3.6);
            glVertex3f(-2.8, 0.14, 3.2);

            glVertex3f(-2.8, 0.84, 3.6);//belakang
            glVertex3f(-2.3, 0.84, 3.6);
            glVertex3f(-2.3, 0.14, 3.6);
            glVertex3f(-2.8, 0.14, 3.6);

            //kedua
            glVertex3f(2.8, 0.84, 3.2);//atas
            glVertex3f(2.3, 0.84, 3.2);
            glVertex3f(2.3, 0.84, 3.6);
            glVertex3f(2.8, 0.84, 3.6);

            glVertex3f(2.8, 0.14, 3.2);//depan
            glVertex3f(2.8, 0.84, 3.2);
            glVertex3f(2.3, 0.84, 3.2);
            glVertex3f(2.3, 0.14, 3.2);

            glVertex3f(2.3, 0.84, 3.2);//kiri
            glVertex3f(2.3, 0.84, 3.6);
            glVertex3f(2.3, 0.14, 3.6);
            glVertex3f(2.3, 0.14, 3.2);

            glVertex3f(2.8, 0.84, 3.2);//kanan
            glVertex3f(2.8, 0.84, 3.6);
            glVertex3f(2.8, 0.14, 3.6);
            glVertex3f(2.8, 0.14, 3.2);

            glVertex3f(2.8, 0.84, 3.6);//belakang
            glVertex3f(2.3, 0.84, 3.6);
            glVertex3f(2.3, 0.14, 3.6);
            glVertex3f(2.8, 0.14, 3.6);
    glEnd();
}
void lampu()
{
    glBegin(GL_QUADS);
            glVertex3f(0.19, 0.4, 0.2);//kiri
            glVertex3f(0.19, 0.33, 0.2);
            glVertex3f(0.19, 0.33, 0.42);
            glVertex3f(0.19, 0.4, 0.4);

            glVertex3f(0.19, 0.4, 1);
            glVertex3f(0.19, 0.33, 1);
            glVertex3f(0.19, 0.33, 0.78);
            glVertex3f(0.19, 0.4, 0.8);
    glEnd();
}
void sampinglampu()
{
    glBegin(GL_QUADS);
            glVertex3f(0.19, 0.4, 0.4);
            glVertex3f(0.19, 0.26, 0.45);
            glVertex3f(0.19, 0.26, 0.75);
            glVertex3f(0.19, 0.4, 0.8);
    glEnd();
//    glBegin(GL_LINE);
//            glVertex3f(0.19, 0.36, 0.41);
//            glVertex3f(0.19, 0.36, 0.79);
//    glEnd();
}
void tiangbak()
{
    glBegin(GL_QUADS);
        //kiri
            glVertex3f(1.55, 0.75, 0.95);//atas
            glVertex3f(1.59, 0.75, 0.95);
            glVertex3f(1.59, 0.75, 0.92);
            glVertex3f(1.55, 0.75, 0.92);

            glVertex3f(1.55, 0.2, 0.95);//bawah
            glVertex3f(1.59, 0.2, 0.95);
            glVertex3f(1.59, 0.2, 0.92);
            glVertex3f(1.55, 0.2, 0.92);

            glVertex3f(1.55, 0.75, 0.95);//depan
            glVertex3f(1.55, 0.75, 0.92);
            glVertex3f(1.55, 0.2, 0.92);
            glVertex3f(1.55, 0.2, 0.95);

            glVertex3f(1.55, 0.2, 0.95);//kiri
            glVertex3f(1.59, 0.2, 0.95);
            glVertex3f(1.59, 0.75, 0.95);
            glVertex3f(1.55, 0.75, 0.95);

            glVertex3f(1.55, 0.2, 0.92);//kanan
            glVertex3f(1.59, 0.2, 0.92);
            glVertex3f(1.59, 0.75, 0.92);
            glVertex3f(1.55, 0.75, 0.92);

            glVertex3f(1.59, 0.2, 0.95);//belakang
            glVertex3f(1.59, 0.2, 0.92);
            glVertex3f(1.59, 0.75, 0.92);
            glVertex3f(1.59, 0.75, 0.95);

        //kanan
            glVertex3f(1.55, 0.75, 0.28);//atas
            glVertex3f(1.59, 0.75, 0.28);
            glVertex3f(1.59, 0.75, 0.25);
            glVertex3f(1.55, 0.75, 0.25);

            glVertex3f(1.55, 0.2, 0.28);//bawah
            glVertex3f(1.59, 0.2, 0.28);
            glVertex3f(1.59, 0.2, 0.25);
            glVertex3f(1.55, 0.2, 0.28);

            glVertex3f(1.55, 0.2, 0.28);//depan
            glVertex3f(1.55, 0.75, 0.28);
            glVertex3f(1.55, 0.75, 0.25);
            glVertex3f(1.55, 0.2, 0.25);

            glVertex3f(1.55, 0.2, 0.28);//kiri
            glVertex3f(1.59, 0.2, 0.28);
            glVertex3f(1.59, 0.75, 0.28);
            glVertex3f(1.55, 0.75, 0.28);

            glVertex3f(1.55, 0.2, 0.25);//kanan
            glVertex3f(1.59, 0.2, 0.25);
            glVertex3f(1.59, 0.75, 0.25);
            glVertex3f(1.55, 0.75, 0.25);

            glVertex3f(1.59, 0.2, 0.28);//belakang
            glVertex3f(1.59, 0.2, 0.25);
            glVertex3f(1.59, 0.75, 0.25);
            glVertex3f(1.59, 0.75, 0.28);

        //gak keduanya
            glVertex3f(1.55, 0.66, 0.92);
            glVertex3f(0.95, 0.66, 0.92);
            glVertex3f(0.95, 0.66, 0.28);
            glVertex3f(1.55, 0.66, 0.28);

        //belakang
            glVertex3f(1.55, 0.705, 0.28);//depan
            glVertex3f(1.55, 0.66, 0.28);
            glVertex3f(1.55, 0.66, 0.92);
            glVertex3f(1.55, 0.705, 0.92);

            glVertex3f(1.55, 0.705, 0.28);//kanan
            glVertex3f(1.55, 0.66, 0.28);
            glVertex3f(1.59, 0.66, 0.28);
            glVertex3f(1.59, 0.705, 0.28);

            glVertex3f(1.55, 0.66, 0.92);//kiri
            glVertex3f(1.55, 0.705, 0.92);
            glVertex3f(1.59, 0.705, 0.92);
            glVertex3f(1.59, 0.66, 0.92);

            glVertex3f(1.59, 0.705, 0.92);//belakang
            glVertex3f(1.59, 0.66, 0.92);
            glVertex3f(1.59, 0.66, 0.28);
            glVertex3f(1.59, 0.705, 0.28);

            glVertex3f(1.55, 0.705, 0.92);//atas
            glVertex3f(1.59, 0.705, 0.92);
            glVertex3f(1.59, 0.705, 0.28);
            glVertex3f(1.55, 0.705, 0.28);

        //depan
            glVertex3f(0.95, 0.705, 0.28);//depan
            glVertex3f(0.95, 0.66, 0.28);
            glVertex3f(0.95, 0.66, 0.92);
            glVertex3f(0.95, 0.705, 0.92);

            glVertex3f(0.95, 0.705, 0.28);//kanan
            glVertex3f(0.95, 0.66, 0.28);
            glVertex3f(0.99, 0.66, 0.28);
            glVertex3f(0.99, 0.705, 0.28);

            glVertex3f(0.95, 0.66, 0.92);//kiri
            glVertex3f(0.95, 0.705, 0.92);
            glVertex3f(0.99, 0.705, 0.92);
            glVertex3f(0.99, 0.66, 0.92);

            glVertex3f(0.99, 0.705, 0.92);//belakang
            glVertex3f(0.99, 0.66, 0.92);
            glVertex3f(0.99, 0.66, 0.28);
            glVertex3f(0.99, 0.705, 0.28);

            glVertex3f(0.95, 0.705, 0.92);//atas
            glVertex3f(0.99, 0.705, 0.92);
            glVertex3f(0.99, 0.705, 0.28);
            glVertex3f(0.95, 0.705, 0.28);
    glEnd();
}
void tiangbaktengah()
{
    glBegin(GL_QUADS);
            glVertex3f(1.55, 0.66, 0.92);//depan
            glVertex3f(1.55, 0.66, 0.28);
            glVertex3f(1.55, 0.45, 0.25);
            glVertex3f(1.55, 0.45, 0.92);

            glVertex3f(1.59, 0.66, 0.92);//belakang
            glVertex3f(1.59, 0.66, 0.28);
            glVertex3f(1.59, 0.45, 0.28);
            glVertex3f(1.59, 0.45, 0.92);

            glVertex3f(1.55, 0.66, 0.28);//kanan
            glVertex3f(1.59, 0.66, 0.28);
            glVertex3f(1.59, 0.45, 0.28);
            glVertex3f(1.55, 0.45, 0.28);

            glVertex3f(1.55, 0.66, 0.92);//kiri
            glVertex3f(1.59, 0.66, 0.92);
            glVertex3f(1.59, 0.45, 0.92);
            glVertex3f(1.55, 0.45, 0.92);

            glVertex3f(1.55, 0.66, 0.92);//atas
            glVertex3f(1.59, 0.66, 0.92);
            glVertex3f(1.59, 0.66, 0.28);
            glVertex3f(1.55, 0.66, 0.28);

            glVertex3f(1.55, 0.45, 0.28);//bawah
            glVertex3f(1.59, 0.45, 0.28);
            glVertex3f(1.59, 0.45, 0.92);
            glVertex3f(1.55, 0.45, 0.92);

            //penyangga kanan
            glVertex3f(0.95, 0.66, 0.28);//depan
            glVertex3f(0.95, 0.66, 0.25);
            glVertex3f(0.95, 0.75, 0.25);
            glVertex3f(0.95, 0.75, 0.28);

            glVertex3f(1.55, 0.75, 0.25);//kanan
            glVertex3f(0.95, 0.75, 0.25);
            glVertex3f(0.95, 0.66, 0.25);
            glVertex3f(1.55, 0.66, 0.25);

            glVertex3f(0.95, 0.66, 0.28);//kiri
            glVertex3f(0.95, 0.75, 0.28);
            glVertex3f(1.55, 0.75, 0.28);
            glVertex3f(1.55, 0.66, 0.28);

            glVertex3f(1.55, 0.75, 0.28);//atas
            glVertex3f(1.55, 0.75, 0.25);
            glVertex3f(0.95, 0.75, 0.25);
            glVertex3f(0.95, 0.75, 0.28);

            glVertex3f(0.95, 0.66, 0.25);//bawah
            glVertex3f(0.95, 0.66, 0.28);
            glVertex3f(1.55, 0.66, 0.28);
            glVertex3f(1.55, 0.66, 0.25);

            //penyangga kiri
            glVertex3f(0.95, 0.66, 0.92);//depan
            glVertex3f(0.95, 0.66, 0.95);
            glVertex3f(0.95, 0.75, 0.95);
            glVertex3f(0.95, 0.75, 0.92);

            glVertex3f(1.55, 0.75, 0.95);//kanan
            glVertex3f(0.95, 0.75, 0.95);
            glVertex3f(0.95, 0.66, 0.95);
            glVertex3f(1.55, 0.66, 0.95);

            glVertex3f(0.95, 0.66, 0.92);//kiri
            glVertex3f(0.95, 0.75, 0.92);
            glVertex3f(1.55, 0.75, 0.92);
            glVertex3f(1.55, 0.66, 0.92);

            glVertex3f(1.55, 0.75, 0.92);//atas
            glVertex3f(1.55, 0.75, 0.95);
            glVertex3f(0.95, 0.75, 0.95);
            glVertex3f(0.95, 0.75, 0.92);

            glVertex3f(0.95, 0.66, 0.95);//bawah
            glVertex3f(0.95, 0.66, 0.92);
            glVertex3f(1.55, 0.66, 0.92);
            glVertex3f(1.55, 0.66, 0.95);
    glEnd();
}
void bakbawah()
{
    glBegin(GL_QUADS);
            glVertex3f(2.35, 0.21, 0.95);
            glVertex3f(2.35, 0.21, 0.25);
            glVertex3f(1.55, 0.21, 0.25);
            glVertex3f(1.55, 0.21, 0.95);
    glEnd();
}
void modif()
{
    glBegin(GL_QUADS);
        //depan
            glVertex3f(0.1, 0.2, 0.2);//atas
            glVertex3f(0, 0.14, 0.2);
            glVertex3f(0, 0.14, 1);
            glVertex3f(0.1, 0.2, 1);

            glVertex3f(0, 0.14, 1);//bawah
            glVertex3f(0, 0.14, 0.2);
            glVertex3f(0.43, 0.14, 1);
            glVertex3f(0.43, 0.14, 0.2);

            glVertex3f(0.43, 0.2, 1);//kiri
            glVertex3f(0.43, 0.14, 1);
            glVertex3f(0, 0.14, 1);
            glVertex3f(0.1, 0.2, 1);

            glVertex3f(0.1, 0.2, 0.2);//kanan
            glVertex3f(0, 0.14, 0.2);
            glVertex3f(0.43, 0.14, 0.2);
            glVertex3f(0.43, 0.2, 0.2);

            glVertex3f(0.43, 0.14, 0.2);//belakang
            glVertex3f(0.43, 0.2, 0.2);
            glVertex3f(0.43, 0.2, 1);
            glVertex3f(0.43, 0.14, 1);
        //tengah
            glVertex3f(0.8, 0.14, 1);//bawah
            glVertex3f(0.8, 0.14, 0.2);
            glVertex3f(1.75, 0.2, 0.2);
            glVertex3f(1.75, 0.2, 1);

            glVertex3f(0.8, 0.2, 1);//kanan
            glVertex3f(0.8, 0.14, 1);
            glVertex3f(1.75, 0.2, 1);
            glVertex3f(1.5, 0.2, 1);

            glVertex3f(0.8, 0.2, 0.2);//kiri
            glVertex3f(0.8, 0.14, 0.2);
            glVertex3f(1.75, 0.2, 0.2);
            glVertex3f(1.5, 0.2, 0.2);

            glVertex3f(0.8, 0.2, 1);
            glVertex3f(0.8, 0.14, 1);
            glVertex3f(0.8, 0.14, 0.2);
            glVertex3f(0.8, 0.2, 0.2);
        //belakang

            glVertex3f(2.5, 0.2, 1);//atas
            glVertex3f(2.55, 0.1, 1);
            glVertex3f(2.55, 0.1, 0.2);
            glVertex3f(2.5, 0.2, 0.2);

            glVertex3f(2.55, 0.1, 1);//bawah
            glVertex3f(1.95, 0.1, 1);
            glVertex3f(1.95, 0.1, 0.2);
            glVertex3f(2.55, 0.1, 0.2);

            glVertex3f(2.5, 0.2, 1);//kiri
            glVertex3f(2.55, 0.1, 1);
            glVertex3f(1.95, 0.1, 1);
            glVertex3f(1.95, 0.2, 1);

            glVertex3f(2.5, 0.2, 0.2);//kanan
            glVertex3f(2.55, 0.1, 0.2);
            glVertex3f(1.95, 0.1, 0.2);
            glVertex3f(1.95, 0.2, 0.2);

            glVertex3f(1.95, 0.2, 0.2);
            glVertex3f(1.95, 0.1, 0.2);
            glVertex3f(1.95, 0.1, 1);
            glVertex3f(1.95, 0.2, 1);
    glEnd();
}
void garispagar()
{
    glBegin(GL_QUADS);
            glVertex3f(2.3, 0.74, -2.5);//atas
            glVertex3f(2.3, 0.74, -2.7);
            glVertex3f(-2.3, 0.74, -2.7);
            glVertex3f(-2.3, 0.74, -2.5);

            glVertex3f(2.3, 0.64, -2.7);//bawah
            glVertex3f(2.3, 0.64, -2.5);
            glVertex3f(-2.3, 0.64, -2.5);
            glVertex3f(-2.3, 0.64, -2.7);

            glVertex3f(2.3, 0.64, -2.5);//depan
            glVertex3f(2.3, 0.74, -2.5);
            glVertex3f(-2.3, 0.74, -2.5);
            glVertex3f(-2.3, 0.64, -2.5);

            glVertex3f(2.3, 0.74, -2.7);//belakang
            glVertex3f(2.3, 0.64, -2.7);
            glVertex3f(-2.3, 0.64, -2.7);
            glVertex3f(-2.3, 0.74, -2.7);
    glEnd();
}
void Tree(){
   glPushMatrix();
       glTranslatef(4.75, 0.25, 3);
       glColor3f(0.13, 0.54, 0.13);
       glutSolidCone(1.5, 2, 10, 2);
   glPopMatrix();

   glPushMatrix();
       glTranslatef(4.75, 0.25,  3.9);
       glColor3f(0.13, 0.54, 0.13);
       glutSolidCone(1.5, 2, 10, 2);
   glPopMatrix();

   glPushMatrix();
       glTranslatef(4.75, 0.25, 4.75);
       glColor3f(0.13, 0.54, 0.13);
       glutSolidCone(1.5, 2, 10, 2);
   glPopMatrix();

   glPushMatrix();
       glTranslatef(4.7, 0.2, 1.5);
       glRotatef(90, 1, 0, 0);
       glColor3f(0.82, 0.41, 0.11);
       glScaled(1, 3, 1);
       glutSolidCube(1);
   glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
//    glScalef(2.5,1.0,1.0); //buat plus dan minum ukuran
//    glRotated(-10,-2,1,1);
//    glRotatef(theta, 0,1,0);
    //glColor3ub(142, 143, 125); warna buat atas dan cendela
    //glColor3ub(209, 209, 184);warna dasar

    gluLookAt(viewx, viewy, viewz, viewmatax, viewmatay, viewmataz, 0.0, 1.0, 0.0);
    glColor3f(1,0,0);pagar();
    glColor3f(0,1,0);garispagar();
    glPushMatrix();
        glTranslated(0,-0.15,0);
        garispagar();
        glTranslated(0,-0.15,0);
        garispagar();
        glTranslated(0,-0.15,0);
        garispagar();
    glPopMatrix();
    glPushMatrix();
        glTranslated(0,0,6);
        garispagar();
        glTranslated(0,-0.15,0);
        garispagar();
        glTranslated(0,-0.15,0);
        garispagar();
        glTranslated(0,-0.15,0);
        garispagar();
    glPopMatrix();

    glPushMatrix();
        glColor3ub(10, 10, 10);jalan();
        glColor3ub(246, 232, 183);jalansamping();
        glColor3ub(255,255,255);putihjalan();


//        glRotatef(xangle,1.0,0.0,0.0);

        //buat di mainin translate scale
        glRotatef(yangle,0.0,1.0,0.0);
        glRotatef(zangle,0.0,0.0,1.0);
        glPolygonMode( GL_FRONT_AND_BACK, GL_LINE ); //garis tepinya
        glLineWidth(1);
        glColor3f(0,0,0);
        garisbody();
        dashboard();

        glPolygonMode( GL_FRONT_AND_BACK, GL_FILL ); //filllagi warnanya

        glColor3ub(133, 65, 2);body();
        glColor3ub(35, 35, 35);dashboard();
        glColor3ub(35, 35, 35);modif();
        glColor3ub(133, 65, 2);atas();
        glColor3ub(7, 7, 7);kaca();
        glColor3ub(133, 65, 2);penutupkaca();
        glColor3ub(255, 255, 255);lampu();
        glColor3ub(40, 40, 40);sampinglampu();
        glColor3ub(136, 49, 6);tiangbak();
        glColor3ub(	251, 194, 166);tiangbaktengah();
        glColor3ub(28, 28, 28);bakbawah();

        //ban
        glTranslated(0.6,0.2,1.02);glColor3ub(0,0,0);glutSolidTorus(0.08,0.08,8,8);//ban kiri depan
        glTranslated(1.2,0,0);glColor3ub(0,0,0);glutSolidTorus(0.08,0.08,8,8);//ban kiri belakang
        glTranslated(0,0,-0.8);glutSolidTorus(0.08,0.08,8,8);//ban kanan belakang
        glTranslated(-1.2,0,0);glutSolidTorus(0.08,0.08,8,8);//ban kanan depan
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,0,5);
        glScaled(0.5,0.2,0.5);
        glRotated(-90,1,0,0);Tree();
    glPopMatrix();
    glFlush();
}
 void myIdle(){
    theta +=0.01;
    display();
 }
void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho (-2.5, 2.5, -0.5*(GLfloat)h/(GLfloat)w, 1.0*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
    else
        glOrtho (-2.5*(GLfloat)w/(GLfloat)h, 2.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glutPostRedisplay();
 }
void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
//    glOrtho(-1.0,3.0,-1.0,1.0,3.0,-3.0);
    //geser kamera ke kanan atau kiri menggunakan z, atas bawah sumbu y, atur kejauhan sumbu x
//    gluLookAt(0.8, 0.5, -2, 1, 0.5, 1, 0, 1, 0);
//    gluLookAt(0.3, 0, 0, 1.5, 0.5, 1, 0, 1, 0); //tampak belakang
//    gluLookAt(1, 0, 0.5, -2, 0.5, 0.5, 0, 1, 0); //tampak depan
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0,0.0,0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

//    GLfloat light_position_diff[] = { 0.8, 0.4, 0.5, 0.0 };
//    GLfloat diffuse_light[] = { 0.0, 0.0, 1.0, 1.0 };
//    GLfloat light_position_spec[] = { 0.8, 0.4, 0.5, 0.0 };
//    GLfloat specular_light[] = { 0.0, 1.0, 0.0, 1.0 };
//    GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
//
//    glLightfv(GL_LIGHT0, GL_POSITION, light_position_diff);
//    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
//    glLightfv(GL_LIGHT1, GL_POSITION, light_position_spec);
//    glLightfv(GL_LIGHT1, GL_SPECULAR, specular_light);
//    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
//
//    glEnable(GL_LIGHTING);
//    glEnable(GL_DEPTH_TEST);
//    glShadeModel (GL_SMOOTH);
//    glEnable(GL_LIGHT0);
//    glEnable(GL_LIGHT1);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    GLfloat ambientLight[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    GLfloat diffuseLight[] = { 0.8f, 0.8f, 0.8, 1.0f };
    GLfloat specularLight[] = { 0.5f, 0.5f, 0.5f, 1.0f };
    GLfloat position[] = { 0.8f, 0.4f, 0.5f, 1.0f };

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
    glLightfv(GL_LIGHT0, GL_POSITION, position);

    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
}
void inputanbiasa(unsigned char key,int x,int y)
{
    if (key == 'r'){
        yangle = yangle +2;
        display();
    }
    if (key == 'R'){
        zangle = zangle +2;
        display();
    }
    if (key == 'x'){
        viewmatax = viewmatax +2;
        display();
    }
    if (key == 'X'){
        viewmatax = viewmatax -2;
        display();
    }
    if (key == 'y'){
        viewmatay = viewmatay -2;
        display();
    }
    if (key == 'Y'){
        viewmatay = viewmatay +2;
        display();
    }
    if (key == 'z'){
        viewmataz = viewmataz +100;
        display();
    }
    if (key == 'Z'){
        viewmataz = viewmataz -100;
        display();
    }
}
void inputanarrow(int key,int x,int y)
{
    if (key == GLUT_KEY_UP){
        viewy = viewy +0.1;
        display();
    }
    if (key == GLUT_KEY_DOWN){
        viewy = viewy -0.1;
        display();
    }
    if (key == GLUT_KEY_LEFT){
        viewx = viewx -0.1;
        display();
    }
    if (key == GLUT_KEY_RIGHT){
        viewx = viewx +0.1;
        display();
    }
    if (key == GLUT_KEY_HOME){
        theta = 0.0, viewmatax = 0.0, viewmatay = 0.0, viewmataz = -100.0, viewx = 0.0, viewy = 0.0, viewz = 0.0,
        yangle = 0.0, zangle = 0.0;
        display();
    }
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,520);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Kotak");
    glutReshapeFunc(reshape);
    glutIdleFunc(myIdle);
    glutDisplayFunc(display);
    glutKeyboardFunc(inputanbiasa);
    glutSpecialFunc(inputanarrow);
    myinit();
    glutMainLoop();
    return 0;
}
