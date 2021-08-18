#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
float x=0;
float y=0;
float z=0;
float muter=0;
bool diff = true, spec = true;
float theta = 0.0;


void warna(void)
{
    glColor3f(0.482, 0.471, 0.443);
}
void sikil(void)
{
    //kaki 1
    glPushMatrix();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(4.5,-0.5,-0.5);
    glVertex3f(4.5,-0.5,-1.5);
    glVertex3f(4.5,-7,-1.5);
    glVertex3f(4.5,-7,-0.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(4.5,-0.5,-0.5);
    glVertex3f(4.5,-7,-0.5);
    glVertex3f(3.5,-7,-0.5);
    glVertex3f(3.5,-0.5,-0.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(3.5,-7,-0.5);
    glVertex3f(3.5,-0.5,-0.5);
    glVertex3f(3.5,-0.5,-1.5);
    glVertex3f(3.5,-7,-1.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(3.5,-0.5,-1.5);
    glVertex3f(3.5,-7,-1.5);
    glVertex3f(4.5,-7,-1.5);
    glVertex3f(4.5,-0.5,-1.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.5,-7,-0.5);
    glVertex3f(3.5,-7,-1.5);
    glVertex3f(4.5,-7,-1.5);
    glVertex3f(4.5,-7,-0.5);
    glEnd();
    glPopMatrix();
}

void kakiSamping(void)
{
    //Sisi kanan
    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.5,-0.5,-1);
    glVertex3f(4.5,-1.5,-1);
    glVertex3f(4.5,-1.5,-4);
    glVertex3f(4.5,-0.5,-4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(4,-0.5,-1);
    glVertex3f(4,-1.5,-1);
    glVertex3f(4,-1.5,-4);
    glVertex3f(4,-0.5,-4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.5,-1.5,-1);
    glVertex3f(4.5,-1.5,-4);
    glVertex3f(4,-1.5,-4);
    glVertex3f(4,-1.5,-1);
    glEnd();
    glPopMatrix();
}

void kakiDepan(void)
{
    glPushMatrix();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.5,-0.5,-4.5);
    glVertex3f(3.5,-1.5,-4.5);
    glVertex3f(-3.5,-1.5,-4.5);
    glVertex3f(-3.5,-0.5,-4.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.5,-0.5,-4);
    glVertex3f(3.5,-1.5,-4);
    glVertex3f(-3.5,-1.5,-4);
    glVertex3f(-3.5,-0.5,-4);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.5,-1.5,-4);
    glVertex3f(-3.5,-1.5,-4);
    glVertex3f(-3.5,-1.5,-4.5);
    glVertex3f(3.5,-1.5,-4.5);
    glEnd();
    glPopMatrix();
}
void kursi(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    //atas
    glPushMatrix();
    glColor3f(0.482, 0.471, 0.443);
    glBegin(GL_POLYGON);
    glVertex3f(5,0,0);
    glVertex3f(-5,0,0);
    glVertex3f(-5,0,-5);
    glVertex3f(5,0,-5);
    glEnd();
    glPopMatrix();

    //bawah
    glPushMatrix();
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(5,-0.5,0);
    glVertex3f(-5,-0.5,0);
    glVertex3f(-5,-0.5,-5);
    glVertex3f(5,-0.5,-5);
    glEnd();
    glPopMatrix();

    //X+ atau kanan
    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(5,0,0);
    glVertex3f(5,-0.5,0);
    glVertex3f(5,-0.5,-5);
    glVertex3f(5,0,-5);
    glEnd();
    glPopMatrix();

    //-Z atau belakang
    glPushMatrix();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(5,0,0);
    glVertex3f(5,-0.5,0);
    glVertex3f(-5,-0.5,0);
    glVertex3f(-5,0,0);
    glEnd();
    glPopMatrix();

    //Z+ atau depan
    glPushMatrix();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(5,0,-5);
    glVertex3f(5,-0.5,-5);
    glVertex3f(-5,-0.5,-5);
    glVertex3f(-5,0,-5);
    glEnd();
    glPopMatrix();

    //-X Atau
    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-5,0,0);
    glVertex3f(-5,-0.5,0);
    glVertex3f(-5,-0.5,-5);
    glVertex3f(-5,0,-5);
    glEnd();
    glPopMatrix();


    //Kaki
    glPushMatrix();
    sikil();
    glTranslated(-8,0,0);
    sikil();
    glTranslated(8,0,0);
    glTranslated(0,0,-3);
    sikil();
    glTranslated(0,0,3);
    glTranslated(-8,0,-3);
    sikil();
    glTranslated(8,0,3);

    //samping
    kakiSamping();
    glTranslated(-8.5,0,0);
    kakiSamping();
    glTranslated(8.5,0,0);

    //kaki depan belakang
    kakiDepan();
    glTranslated(0,0,3.5);
    kakiDepan();
    glTranslated(0,0,-3.5);
    }

void kakipiano(void)
{
    glPushMatrix();
    glDisable(GL_CULL_FACE);
    warna();
    glBegin(GL_POLYGON);
    glVertex3f(6.85,1,1);
    glVertex3f(6.85,1,2.5);
    glVertex3f(6.60,-7,2.25);
    glVertex3f(6.60,-7,1.25);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glDisable(GL_CULL_FACE);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(6.85,1,1);
    glVertex3f(5.35,1,1);
    glVertex3f(5.60,-7,1.25);
    glVertex3f(6.60,-7,1.25);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glDisable(GL_CULL_FACE);
    warna();
    glBegin(GL_POLYGON);
    glVertex3f(5.35,1,1);
    glVertex3f(5.60,-7,1.25);
    glVertex3f(5.60,-7,2.25);
    glVertex3f(5.35,1,2.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glDisable(GL_CULL_FACE);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(5.60,-7,2.25);
    glVertex3f(5.35,1,2.5);
    glVertex3f(6.85,1,2.5);
    glVertex3f(6.60,-7,2.25);
    glEnd();
    glPopMatrix();


    //bagian bawah
    glPushMatrix();
    glDisable(GL_CULL_FACE);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(6.60,-7,1.25);
    glVertex3f(6.60,-7,2.25);
    glVertex3f(5.60,-7,2.25);
    glVertex3f(5.60,-7,1.25);
    glEnd();
    glPopMatrix();
}

// samping piano nomer 23
void sampingpiano()
{
    // 2
    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(7,2.75,0);
    glVertex3f(7,1,0);
    glVertex3f(7,1,7);
    glVertex3f(7,2.75,7);
    glEnd();
    glPopMatrix();

    // 3
    glPushMatrix();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(7,2.75,1.5);
    glVertex3f(7,3.5,2.5);
    glVertex3f(7,3.5,7);
    glVertex3f(7,2.75,7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(7,3.5,2.5);
    glVertex3f(7,5,2.5);
    glVertex3f(7,5,7);
    glVertex3f(7,3.5,7);
    glEnd();
    glPopMatrix();

    // copy 2
    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,2.75,0);
    glVertex3f(6.5,1,0);
    glVertex3f(6.5,1,7);
    glVertex3f(6.5,2.75,7);
    glEnd();
    glPopMatrix();

    // copy 3
    glPushMatrix();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,2.75,1.5);
    glVertex3f(6.5,3.5,2.5);
    glVertex3f(6.5,3.5,7);
    glVertex3f(6.5,2.75,7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,3.5,2.5);
    glVertex3f(6.5,5,2.5);
    glVertex3f(6.5,5,7);
    glVertex3f(6.5,3.5,7);
    glEnd();
    glPopMatrix();

    //depan
    glPushMatrix();
    warna();
    glBegin(GL_POLYGON);
    glVertex3f(7,1.5,0);
    glVertex3f(6.5,1.5,0);
    glVertex3f(6.5,2.75,0);
    glVertex3f(7,2.75,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,2.75,0);
    glVertex3f(7,2.75,0);
    glVertex3f(7,2.75,1.5);
    glVertex3f(6.5,2.75,1.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(7,2.75,1.5);
    glVertex3f(6.5,2.75,1.5);
    glVertex3f(6.5,3.5,2.5);
    glVertex3f(7,3.5,2.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,3.5,2.5);
    glVertex3f(7,3.5,2.5);
    glVertex3f(7,5,2.5);
    glVertex3f(6.5,5,2.5);
    glEnd();
    glPopMatrix();
}

void note(void)
{
    glPushMatrix();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,2.25,0.25);
    glVertex3f(5.5,2.25,0.25);
    glVertex3f(5.5,1.75,0.25);
    glVertex3f(6.5,1.75,0.25);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,2.25,0.25);
    glVertex3f(5.5,2.25,0.25);
    glVertex3f(5.5,2.25,1.25);
    glVertex3f(6.5,2.25,1.25);
    glEnd();
    glPopMatrix();


}
void piano(void)
{
    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(7,1,0);
    glVertex3f(7,1,7);
    glVertex3f(-7,1,7);
    glVertex3f(-7,1,0);
    glEnd();
    glPopMatrix();

    // 1
    glPushMatrix();
    warna();
    glBegin(GL_POLYGON);
    glVertex3f(7,1,0);
    glVertex3f(-7,1,0);
    glVertex3f(-7,1.5,0);
    glVertex3f(7,1.5,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(6.5,1.5,0);
    glVertex3f(-6.5,1.5,0);
    glVertex3f(-6.5,1.75,0);
    glVertex3f(6.5,1.75,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-6.5,1.75,0);
    glVertex3f(6.5,1.75,0);
    glVertex3f(6.5,1.75,7);
    glVertex3f(-6.5,1.75,7);
    glEnd();
    glPopMatrix();

    //belakang piano
    glPushMatrix();
    warna();
    glBegin(GL_POLYGON);
    glVertex3f(7,5,7);
    glVertex3f(7,1,7);
    glVertex3f(-7,1,7);
    glVertex3f(-7,5,7);
    glEnd();
    glPopMatrix();


    //atap piano
    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-7,5,2.5);
    glVertex3f(-7,5,7);
    glVertex3f(7,5,7);
    glVertex3f(7,5,2.5);
    glEnd();
    glPopMatrix();

    //kaki piano
    kakipiano();
    glTranslatef(-12.2,0,0);
    kakipiano();
    glTranslatef(12.2,0,0);
    glTranslatef(-6.1,0,4.5);
    kakipiano();
    glTranslatef(6.1,0,-4.5);

    //samping piano
    sampingpiano();
    glTranslated(-13.5,0,0);
    sampingpiano();
    glTranslated(13.5,0,0);

    //tombol note
    note();


}
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glLoadIdentity();
    glRotated(30,1,1,0);
    kursi();
    piano();


    //titik bantu
    glPushMatrix();
    glPointSize(15);
    glColor3f(0,0,0);
    glBegin(GL_POINTS);
    glVertex3f(10,0,0);
    glVertex3f(0,10,0);
    glVertex3f(0,0,10);
    glEnd();
    glPopMatrix();

    glLineWidth(7);
    glColor3f(0,1,0);
    glBegin(GL_LINES);
    glVertex3f(0,20,0);
    glVertex3f(0,-20,0);
    glEnd();


    glColor3f(0,0,1);
    glBegin(GL_LINES);
    glVertex3f(20,0,0);
    glVertex3f(-20,0,0);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_LINES);
    glVertex3f(0,0,20);
    glVertex3f(0,0,-20);
    glEnd();

    x=0;
    y=0;
    z=0;

    muter=0;
    glFlush();
}

void keyboard(int key, int x, int y)
{
    if(key == GLUT_KEY_UP){
        x = 0;
        y = 0;
        z = 1;}

    if(key == GLUT_KEY_DOWN){
        x = 0;
        y = 0;
        z = -1;}

    if(key == GLUT_KEY_RIGHT){
        x = 1;
        y = 1;
        z = 0;}

    if(key == GLUT_KEY_LEFT){
        x = 1;
        y = 0;
        z = 0;}

    glutPostRedisplay();
}

void inputan(unsigned char key, int x, int y){
    if(key == 'z'){
        muter += -10;
        x = 0;
        y = 0;
        z = 1;
        //display();
    }
    if(key == 'Z'){
        muter += 10;
        x = 0;
        y = 0;
        z = 1;
        //display();
    }
    if(key == 'x'){
        //muter += -10;
        x = 1;
        y = 1;
        z = 1;
    }
    if(key == 'X'){
        muter += -10;
    }
glutPostRedisplay();
}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, 10.0, -10);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);

    /*/ Light values and coordinates
    GLfloat  ambientLight[] = { 0.3f, 0.3f, 0.3f, 1.0f };
    GLfloat  diffuseLight[] = { 0.7f, 0.7f, 0.7f, 1.0f };
    GLfloat  specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    GLfloat  specref[] = { 1.0f, 1.0f, 1.0f, 1.0f };

    glEnable(GL_DEPTH_TEST); // Hidden surface removal
    glFrontFace(GL_CCW);  // Counter clock-wise polygons face out
    glEnable(GL_CULL_FACE);  // Do not calculate inside of jet

    // Enable lighting
    glEnable(GL_LIGHTING);

    // Setup and enable light 0
    glLightfv(GL_LIGHT0,GL_AMBIENT,ambientLight);
    glLightfv(GL_LIGHT0,GL_DIFFUSE,diffuseLight);
    glLightfv(GL_LIGHT0,GL_SPECULAR, specular);
    glEnable(GL_LIGHT0);

    // Enable color tracking
    glEnable(GL_COLOR_MATERIAL);

    // Set Material properties to follow glColor values
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);

    // All materials hereafter have full specular reflectivity
    // with a high shine
    glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
    glMateriali(GL_FRONT, GL_SHININESS, 128);

    // white background
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f );

    glEnable(GL_NORMALIZE);*/
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("frame");
    init();
    glutDisplayFunc(display);
    //glutSpecialFunc(keyboard);
    glutKeyboardFunc(inputan);
    glutMainLoop();
    return 0;
}
