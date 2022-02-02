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

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>

#include "RGBpixmap.cpp"
#endif


#include <math.h>
#include <stdlib.h>

#define PI 3.14159265359



RGBpixmap pix[9];

float degree=0, degree1=0, degree2=0, sz=.25,l=-2,r=+.00, f=-6,w=1,tp=0, tt=0,ttt=PI/2,o=0,i=0,xmove=-3,ymove=-3,c=0;
float j_s=100.0f,  h_s=100.0f;



static GLdouble camRadius = 5;
static GLdouble camTheta = 0;

static GLdouble camHeight = 0;


static GLdouble camRoll = 90;


static GLdouble camCenterX = 0;
static GLdouble camCenterY = 0;
static GLdouble camCenterZ = 0;
static GLdouble camX=0,camY=0,camZ=camRadius;


static int slices=16;
static int stacks=16;
static int width;
static int height;


const GLfloat light_ambient[]  = { 0.3f, 0.3f, 0.3f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat light_position[] = { -12.0f, 25.0f, 23.0f, 0.0f };
const GLfloat light_position1[] = { 0.0f, 3.0f, 0.0f, 1.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.0f, 0.0f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.0f, 0.0f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat high_shininess[] = { 80.0f };
float jack_shininess[] = {j_s};
float heli_shininess[]={h_s};

const GLfloat no_material_light[] = { 0.0f, 0.0f, 0.0f, 1.0f };


const GLfloat mat_ambient1[]    = { 0.0f, 0.0f, 0.8f, 1.0f };
const GLfloat mat_diffuse1[]    = { 0.0f, 0.0f, 0.8f, 1.0f };
const GLfloat mat_specular1[]   = { 1.0f, 1.0f, 1.0f, 1.0f };


const GLfloat mat_ambient2[]    = { 0.0f, 0.9f, 0.0f, 1.0f };
const GLfloat mat_diffuse2[]    = { 0.0f, 0.9f, 0.0f, 1.0f };
const GLfloat mat_specular2[]   = { 1.0f, 1.0f, 1.0f, 1.0f };

const GLfloat home1_am[]    = { 0.0f, 0.7f, 0.7f, 1.0f };
const GLfloat home1_diff[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat home1_spec[]   = { 0.7f, 0.7f, 0.7f, 1.0f };


const GLfloat home2_am[]    = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat home2_diff[]    = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat home2_spec[]   = { 1.0f, 1.0f, 1.0f, 1.0f };

float spot_direction[]={0.0,-1.0,0.0};
static float spot_angle=40.0;
static float spot_Exponent=0.0;




int Depth=3;



    void drawkoch(GLfloat x,GLfloat y, GLfloat len, GLint iter)
    {

	if (iter == -1) {
        return;
	}
	else {

		iter--;

		drawkoch(x,y, len/3.0, iter);
		drawkoch(x+len/3.0,y, len/3.0, iter);
		drawkoch(x+2.0*len/3.0,y, len/3.0, iter);

		drawkoch(x,y+len/3.0, len/3.0, iter);
	//	drawkoch(x+len/3.0,y/3.0, len/3.0, iter); //here, already drawn the large one
		drawkoch(x+2.0*len/3.0,y+len/3.0, len/3.0, iter);

        drawkoch(x,y+2.0*len/3.0, len/3.0, iter);
		drawkoch(x+len/3.0,y+2.0*len/3.0, len/3.0, iter);
		drawkoch(x+2.0*len/3.0,y+2.0*len/3.0, len/3.0, iter);

		glBegin(GL_QUADS);
            glVertex2f(x+len/3.0, y+2.0*len/3.0);
            glVertex2f(x+len/3.0, y+len/3.0);
            glVertex2f(x+2.0*len/3.0, y+len/3.0);
            glVertex2f(x+2.0*len/3.0, y+2.0*len/3.0);
		glEnd();


	}
}

void KochCurve(int depth) {
	//glClear(GL_COLOR_BUFFER_BIT);

	drawkoch(0,0,12, depth);

	glFlush();
}


/*void kochCur()

{
    glTranslated(4,5,6);
    glRotated(90,1,0,0);
    KochCurve(Depth);
}*/




/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}




static void cameraMagic()
{
    GLdouble angleInRadians = camTheta * PI / 180.0;

    GLdouble cosAngle = cos(angleInRadians);
    GLdouble sinAngle = sin(angleInRadians);
    //camZ = camRadius * cosAngle ;
    //camX = camRadius * sinAngle;
    //camY = camHeight;


    GLdouble upX = 1, upY = 0, upZ = 0;
    GLdouble tX, tY, tZ;

    GLdouble rollInRadians = camRoll * PI / 180.0;
    tX = cos(rollInRadians) * upX - sin(rollInRadians) * upY;
    tY = sin(rollInRadians) * upX + cos(rollInRadians) * upY;
    upX = tX, upY = tY;

    tX = cosAngle * upX + sinAngle * upZ;
    tZ = -sinAngle * upX + cosAngle * upZ;
    upX = tX, upZ = tZ;


    gluLookAt(camX, camY, camZ, camCenterX, camCenterY, camCenterZ, upX, upY, upZ);
}






#include "cyl_halfcyl.h"
#include "quad.h"
#include "wing.h"
#include "home.h"
#include "table.h"
#include "sphere.h"
#include "jack.h"
#include "jackk.h"
#include "helicopter.h"
#include "heli_t.h"
#include "display.h"
#include "a.h"



static void idle(void)
{
    glutPostRedisplay();
}




void Init()
{
	glEnable(GL_TEXTURE_2D);


    pix[0].makeCheckImage();
	pix[0].setTexture(1);

	pix[1].readBMPFile("C:\\Users\\Niaz\\Desktop\\Graphics_prac1\\brick.bmp");
	pix[1].setTexture(2);

	pix[2].readBMPFile("C:\\Users\\Niaz\\Desktop\\Graphics_prac1\\jack.bmp");
	pix[2].setTexture(3);

	pix[3].readBMPFile("C:\\Users\\Niaz\\Desktop\\Graphics_prac1\\table.bmp");
	pix[3].setTexture(4);

    pix[4].readBMPFile("C:\\Users\\Niaz\\Desktop\\Graphics_prac1\\m.bmp");
	pix[4].setTexture(5);



}





/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);


    glShadeModel(GL_SMOOTH);
    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);







    glEnable(GL_NORMALIZE);
    //glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);




    /*glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);*/

    Init();
    glutMainLoop();

    return EXIT_SUCCESS;
}
