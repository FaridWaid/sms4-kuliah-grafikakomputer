/*
 *  cube.c
 */
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static int rotationAngleX = 0;
static int rotationAngleY = 0;
static int rotationAngleZ = 0;

float g_fDistance = -4.5f;
float g_fSpinX = 0.0f;
float g_fSpinY = 0.0f;
float g_fSpinZ = 0.0f;
float zoomFactor = 1.0f;


static void draw3DRectangle(double dMinX_kls, double dMaxX_kls, double dMinY_kls, double dMaxY_kls, double dMinZ_kls, double dMaxZ_kls)
{ // werkt goed!!

  double MinX = fabs(dMinX_kls);
  double MaxX = fabs(dMaxX_kls);
  double MinY = fabs(dMinY_kls);
  double MaxY = fabs(dMaxY_kls);
  double MinZ = fabs(dMinZ_kls);
  double MaxZ = fabs(dMaxZ_kls);

  double sizeX = fabs( fabs(dMaxX_kls)-fabs(dMinX_kls) );
  double sizeY = fabs( fabs(dMaxY_kls)-fabs(dMinY_kls) );
  double sizeZ = fabs( fabs(dMaxZ_kls)-fabs(dMinZ_kls) );

  GLdouble V0[] = { 0.0, 0.0, 0.0};
  GLdouble V1[] = { sizeX, 0.0, 0.0};
  GLdouble V2[] = { sizeX, sizeY, 0.0};
  GLdouble V3[] = { 0.0, sizeY, 0.0};
  GLdouble V4[] = { 0.0, 0.0, sizeZ};
  GLdouble V5[] = { sizeX, 0.0, sizeZ};
  GLdouble V6[] = { sizeX, sizeY, sizeZ};
  GLdouble V7[] = { 0.0, sizeY, sizeZ};

  glPushMatrix();
  glTranslatef(dMinX_kls, dMinY_kls, dMinZ_kls);

  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

  glBegin(GL_QUADS);
	glVertex3dv(V0); glVertex3dv(V1); glVertex3dv(V2); glVertex3dv(V3);        // Surface 1
	glVertex3dv(V1); glVertex3dv(V5); glVertex3dv(V6); glVertex3dv(V2);        // Surface 2
	glVertex3dv(V5); glVertex3dv(V4); glVertex3dv(V7); glVertex3dv(V6);        // Surface 3
	glVertex3dv(V4); glVertex3dv(V0); glVertex3dv(V3); glVertex3dv(V7);        // Surface 4
	glVertex3dv(V3); glVertex3dv(V2); glVertex3dv(V6); glVertex3dv(V7);        // Surface 5
	glVertex3dv(V0); glVertex3dv(V4); glVertex3dv(V5); glVertex3dv(V1);        // Surface 6
  glEnd();

  glPopMatrix();

}

void drawaxes(void)
{
    glColor3ub(255, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(0.75, 0.25, 0.0);
    glVertex3f(0.75, -0.25, 0.0);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(0.75, 0.0, 0.25);
    glVertex3f(0.75, 0.0, -0.25);
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, 0.75, 0.25);
    glVertex3f(0.0, 0.75, -0.25);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glVertex3f(-0.25, 0.75, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(0.25, 0.0, 0.75);
    glVertex3f(-0.25, 0.0, 0.75);
    glVertex3f(0.0, 0.0, 1.0);
    glVertex3f(0.0, 0.25, 0.75);
    glVertex3f(0.0, -0.25, 0.75);
    glVertex3f(0.0, 0.0, 1.0);
    glEnd();

    glColor3ub(255, 255, 0);
    glRasterPos3f(1.1, 0.0, 0.0);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'x');
    glRasterPos3f(0.0, 1.1, 0.0);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'y');
    glRasterPos3f(0.0, 0.0, 1.1);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'z');
}


void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    //gluLookAt(3.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	//gluLookAt(3.0, 2.0, 8.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	//gluLookAt(0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	//gluLookAt(0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0);
    glColor3f(0.0, 1.0, 0.0);

	// rotate complete axis system
	glRotatef(-90, 1.0, 0.0, 0.0); // rotate around x axis
    glRotatef(90, 0.0, 0.0, 1.0); // rotate around z axis

	// cabinets
	glColor3f(0.5, 0.5, 0.5); // grey
    draw3DRectangle(0.684, 1.528, 0.75, 2, 0.0, 2.980);
	draw3DRectangle(0.684, 1.528, -2, -0.75, 0.0, 2.980);
    draw3DRectangle(1.883, 2.727, -2, -0.75, 0.0, 2.980);
    draw3DRectangle(1.883, 2.727, 0.75, 2, 0.0, 2.980);

	drawaxes();

    glutSwapBuffers();
}

void Init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
}

void Resize(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluPerspective(60.0, width/height, 0.1, 10.0);

	glOrtho(-4, 4, -0.5, 4, 0.1, 1000.0);
	glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("3D Object in OpenGL");
    Init();
    glutDisplayFunc(Display);
    glutReshapeFunc(Resize);
    glutMainLoop();
    return 0;
}
