#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

float x,y,i;

///BOTTOM LEFT NAGGORDOLA
GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat position5 = 0.0f;
GLfloat position6 = 0.0f;
GLfloat position7 = 0.0f;
GLfloat position8 = 0.0f;
GLfloat speed1 = 2.0f;

///HOT AIR BALLOON
GLfloat position9 = 0.0f;
GLfloat speed2 = 2.5f;

///BOTTOM RIGHT NAGORDOLA
GLfloat position10 = 0.0f;
GLfloat position11 = 0.0f;
GLfloat position12 = 0.0f;
GLfloat position13 = 0.0f;
GLfloat position14 = 0.0f;
GLfloat position15 = 0.0f;
GLfloat position16 = 0.0f;
GLfloat position17 = 0.0f;
GLfloat position18 = 0.0f;
GLfloat speed3 = 2.0f;

///CLOUDS
GLfloat position19 = 0.0f;
GLfloat position20 = 0.0f;
GLfloat position21 = 0.0f;
GLfloat position22 = 0.0f;
GLfloat speed4 = 1.0f;

///NAGORDOLA
GLfloat counter = 0.0f;

void update(int value)
{
///BOTTOM LEFT NAGORDOLA
if(position1 < 2.0)
    position1 = 132.0f;

position1 -= speed1;

if(position2 < -14.5)
    position2 = 115.5f;

position2 -= speed1;

if(position3 < -31.0)
    position3 = 99.0f;

position3 -= speed1;

if(position4 < -47.5)
    position4 = 82.5f;

position4 -= speed1;

if(position5 < -64.0)
    position5 = 66.0f;

position5 -= speed1;

if(position6 < -80.5)
    position6 = 49.5f;

position6 -= speed1;

if(position7 < -97.0)
    position7 = 33.0f;

position7 -= speed1;

if(position8 < -113)
    position8 = 16.0f;

position8 -= speed1;

///HOT AIR BALLOON
if(position9 > 7.5)
    position9 = 0.0f;

position9 += speed2;

///BOTTOM RIGHT NAGORDOLA
if(position10 < -18.0)
    position10 = 180.0f;

position10 -= speed3;

if(position11 < -38.0)
    position11 = 160.0f;

position11 -= speed3;

if(position12 < -60.0)
    position12 = 138.0f;

position12 -= speed3;

if(position13 < -80.0)
    position13 = 118.0f;

position13 -= speed3;

if(position14 < -101.0)
    position14 = 97.0f;

position14 -= speed3;

if(position15 < -116.0)
    position15 = 82.0f;

position15 -= speed3;

if(position16 < -136.0)
    position16 = 62.0f;

position16 -= speed3;

if(position17 < -156.0)
    position17 = 42.0f;

position17 -= speed3;

if(position18 < -173.0)
    position18 = 25.0f;

position18 -= speed3;

///CLOUDS
if(position19 > 300.0)
    position19 = -500.0f;

position19 += speed4;

if(position20 > 300.0)
    position20 = -500.0f;

position20 += speed4;

if(position21 > 640.0)
    position21 = -500.0f;

position21 += speed4;

if(position22 > 600)
    position22 = -600.0f;

position22 += speed4;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}

void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(50.0);

///SKY
glBegin(GL_QUADS);
glColor3ub (198, 230, 242);
glVertex2i(648, 0);
glVertex2i(648, 480);
glVertex2i(0, 480);
glVertex2i(0, 0);
glEnd();

///CLOUD 1
glPushMatrix();
glTranslatef(position19, 0, 0);
glTranslatef(400, 350, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 20*sin(i);
            y = 20*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position19, 0, 0);
glTranslatef(365, 335, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 11*sin(i);
            y = 11*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position19, 0, 0);
glTranslatef(440, 330, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 12*sin(i);
            y = 12*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position19, 0, 0);
glBegin(GL_QUADS);
glVertex2i(365, 325);
glVertex2i(365, 340);
glVertex2i(435, 340);
glVertex2i(435, 325);

glColor3ub(198, 230, 242);
glVertex2i(450, 315);
glVertex2i(450, 325);
glVertex2i(400, 325);
glVertex2i(440, 315);
glEnd();
glPopMatrix();

///CLOUD 2
glPushMatrix();
glTranslatef(position20, 0, 0);
glTranslatef(270, 410, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position20, 0, 0);
glTranslatef(300, 440, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position20, 0, 0);
glTranslatef(340, 420, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position20, 0, 0);
glBegin(GL_QUADS);
glColor3ub (198, 230, 242);
glVertex2i(380, 380);
glVertex2i(380, 420);
glVertex2i(240, 420);
glVertex2i(240, 380);
glEnd();
glPopMatrix();

///CLOUD 3
glPushMatrix();
glTranslatef(position21, 0, 0);
glTranslatef(40, 350, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(210, 241, 252);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position21, 0, 0);
glTranslatef(70, 380, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position21, 0, 0);
glTranslatef(110, 360, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position21, 0, 0);
glTranslatef(0, 40, 0);
glBegin(GL_QUADS);
glColor3ub (198, 230, 242);
glVertex2i(150, 280);
glVertex2i(150, 320);
glVertex2i(0, 320);
glVertex2i(0, 280);
glEnd();
glPopMatrix();

///CLOUD 4
glPushMatrix();
glTranslatef(position22, 0, 0);
glTranslatef(500, 410, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(210, 241, 252);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 20*sin(i);
            y = 20*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position22, 0, 0);
glTranslatef(525, 430, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 20*sin(i);
            y = 20*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position22, 0, 0);
glTranslatef(535, 415, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 20*sin(i);
            y = 20*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position22, 0, 0);
glBegin(GL_QUADS);
glColor3ub (198, 230, 242);
glVertex2i(560, 380);
glVertex2i(560, 410);
glVertex2i(480, 410);
glVertex2i(480, 380);
glEnd();
glPopMatrix();

///GRASS FROM LEFTMOST CORNER
glPushMatrix();
glTranslatef(15, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(25, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(37, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 191, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 10*sin(i);
            y = 10*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(72, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 5*sin(i);
            y = 5*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(80, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 8*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(120, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 10*sin(i);
            y = 16*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(112, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 13*sin(i);
            y = 13*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(130, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(160, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 5*sin(i);
            y = 5*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (102, 180, 73);
glVertex2i(160, 100);
glVertex2i(165, 100);
glVertex2i(165, 103);
glVertex2i(160, 103);
glEnd();

glPushMatrix();
glTranslatef(180, 102, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 220, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 8*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(172, 103, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 8*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(205, 104, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 200, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 8*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(200, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(211, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

///TREES BEHIND THE TENTS
     ///FROM LEFTMOST CORNER
          ///TREE 1
glPushMatrix();
glTranslatef(20, 125, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 191, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 14*sin(i);
            y = 14*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 130, 0);
glVertex2i(20, 100);
glVertex2i(23, 100);
glVertex2i(23, 122);
glVertex2i(20, 122);
glEnd();

          ///TREE 2
glPushMatrix();
glTranslatef(70, 118, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 191, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 10*sin(i);
            y = 10*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 130, 0);
glVertex2i(70, 100);
glVertex2i(72, 100);
glVertex2i(72, 118);
glVertex2i(70, 118);
glEnd();

          ///TREE 5
glPushMatrix();
glTranslatef(200, 150, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(125, 215, 110);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 27*sin(i);
            y = 27*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 170, 0);
glVertex2i(200, 100);
glVertex2i(204, 100);
glVertex2i(204, 150);
glVertex2i(200, 150);
glEnd();

         ///TREE 6
glPushMatrix();
glTranslatef(215, 140, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 170, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 24*sin(i);
            y = 24*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 100, 0);
glVertex2i(215, 100);
glVertex2i(219, 100);
glVertex2i(219, 138);
glVertex2i(215, 138);
glEnd();

          ///TREE 7
glPushMatrix();
glTranslatef(436, 125, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 191, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 12*sin(i);
            y = 12*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 130, 0);
glVertex2i(436, 100);
glVertex2i(438, 100);
glVertex2i(438, 125);
glVertex2i(436, 125);
glEnd();

         ///TREEE 8
glPushMatrix();
glTranslatef(575, 145, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(125, 183, 110);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 30*sin(i);
            y = 30*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(575, 140, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 171, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 20*sin(i);
            y = 20*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 100, 0);
glVertex2i(575, 100);
glVertex2i(579, 100);
glVertex2i(579, 140);
glVertex2i(575, 140);
glEnd();

///FRONT GRASS
glPushMatrix();
glTranslatef(578, 104, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 200, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(570, 103, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 8*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(583, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///TREE 9
glPushMatrix();
glTranslatef(610, 125, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 12*sin(i);
            y = 12*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (170, 160, 0);
glVertex2i(610, 100);
glVertex2i(612, 100);
glVertex2i(612, 125);
glVertex2i(610, 125);
glEnd();

          ///TREE 10
glPushMatrix();
glTranslatef(625, 140, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 16*sin(i);
            y = 16*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (128, 130, 0);
glVertex2i(625, 100);
glVertex2i(629, 100);
glVertex2i(629, 140);
glVertex2i(625, 140);
glEnd();

glPushMatrix();
glTranslatef(614, 98, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 200, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 11*sin(i);
            y = 11*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(615, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 7*sin(i);
            y = 7*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(623, 103, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 10*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(637, 107, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 9*sin(i);
            y = 12*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

///HOT AIR BALLOON
glPushMatrix();
glTranslatef(0, position9, 0);
glBegin(GL_QUADS);
glColor3ub(255, 69, 0);
glVertex2i(585, 370);
glVertex2i(575, 370);
glColor3ub(255, 165, 0);
glVertex2i(571, 380);
glVertex2i(589, 380);

glColor3ub(139, 137, 137);
glVertex2i(609, 415);
glVertex2i(551, 415);
glVertex2i(570, 375);
glVertex2i(590, 375);

glColor3ub(255, 255, 255);
glVertex2i(595, 385);
glVertex2i(565, 385);
glVertex2i(570, 375);
glVertex2i(590, 375);

glColor3ub(130, 90, 44);
glVertex2i(591, 360);
glVertex2i(569, 360);
glVertex2i(569, 345);
glVertex2i(591, 345);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0, position9, 0);
glColor3ub(0, 0, 0);
glBegin(GL_LINES);
glVertex2i(570, 360);
glVertex2i(570, 375);

glVertex2i(590, 360);
glVertex2i(590, 375);

glVertex2i(585, 370);
glVertex2i(590, 375);

glVertex2i(575, 370);
glVertex2i(570, 375);

glVertex2i(575, 370);
glVertex2i(585, 370);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0, position9, 0);
glTranslatef(580, 420, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(139, 137, 137);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 30*sin(i);
			y = 30*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA OUTER CIRCLE 1 WHITE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 100*sin(i);
			y = 100*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA OUTER CIRCLE 2 BLUE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub (198, 230, 242);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 95*sin(i);
			y = 95*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA OUTER CIRCLE 3 WHITE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 78*sin(i);
			y = 78*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA OUTER CIRCLE 4 BLUE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub (198, 230, 242);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 75*sin(i);
			y = 75*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA OUTER CIRCLE 5 WHITE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 70*sin(i);
			y = 70*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA OUTER CIRCLE 6 BLUE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub (198, 230, 242);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 67*sin(i);
			y = 67*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA INNER CIRCLE 1 WHITE
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 40*sin(i);
			y = 40*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA POLES
glBegin(GL_QUADS);
glColor3ub (159, 119, 206);
glVertex2i(150, 100);
glVertex2i(195, 300);
glVertex2i(190, 300);
glVertex2i(145, 100);

glVertex2i(260, 100);
glVertex2i(205, 300);
glVertex2i(200, 300);
glVertex2i(255, 100);
glEnd();

          ///TREE 4
glPushMatrix();
glTranslatef(160, 125, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(125, 215, 110);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 17*sin(i);
            y = 17*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 170, 0);
glVertex2i(160, 100);
glVertex2i(162, 100);
glVertex2i(162, 125);
glVertex2i(160, 125);
glEnd();

          ///TREE 3
glPushMatrix();
glTranslatef(153, 118, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 191, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 12*sin(i);
            y = 12*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glBegin(GL_QUADS);
glColor3ub (158, 130, 0);
glVertex2i(153, 100);
glVertex2i(155, 100);
glVertex2i(155, 118);
glVertex2i(153, 118);
glEnd();

///NAGARDOLA
     ///TOP
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
          ///LINE
glBegin(GL_LINES);
glVertex2i(200, 290);
glVertex2i(200, 390);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(200, 390, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(234, 66, 114);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(200, 390, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///BOTTOM
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
          ///LINE
glBegin(GL_LINES);
glVertex2i(200, 290);
glVertex2i(200, 190);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(200, 190, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(234, 66, 114);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(200, 190, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///LEFT
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
          ///LINE
glBegin(GL_LINES);
glVertex2i(200, 290);
glVertex2i(100, 290);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(100, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(159, 119, 206);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(100, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///RIGHT
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
          ///LINE
glBegin(GL_LINES);
glVertex2i(200, 290);
glVertex2i(300, 290);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(300, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(159, 119, 206);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(300, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///NORTH-WEST
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
          ///LINE
glBegin(GL_LINES);
glVertex2i(200, 290);
glVertex2i(125, 355);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(125, 355, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(241, 164, 66);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(125, 355, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///SOUTH-EAST
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
glBegin(GL_LINES);
          ///LINE
glVertex2i(200, 290);
glVertex2i(275, 235);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(275, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(241, 164, 66);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(275, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///NORTH-EAST
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
          ///LINE
glBegin(GL_LINES);
glVertex2i(200, 290);
glVertex2i(275, 355);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(275, 355, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(95, 189, 74);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(275, 355, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///SOUTH-WEST
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glColor3ub(0, 0, 0);
glBegin(GL_LINES);
          ///LINE
glVertex2i(200, 290);
glVertex2i(125, 235);
glEnd();
glPopMatrix();
          ///CABIN
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(125, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(95, 189, 74);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 15*sin(i);
			y = 15*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();
          ///MIRROR
glPushMatrix();
glTranslatef(200, 290, 0);
glRotatef(counter, 0, 0, -1);
counter+=0.05;
glTranslatef(-200, -290, 0);
glTranslatef(125, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(135, 206, 235);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///NAGARDOLA INNER CIRCLE 2 PINK
glPushMatrix();
glTranslatef(200, 290, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(234, 66, 114);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 25*sin(i);
			y = 25*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///BOTTOM LEFT NAGARDOLA
glBegin(GL_QUADS);
glColor3ub(254, 187, 83);
glVertex2i(120, 100);
glVertex2i(120, 160);

glColor3ub(255, 146, 41);
glVertex2i(84, 160);
glVertex2i(84, 100);

glColor3ub(255, 146, 41);
glVertex2i(120, 160);
glVertex2i(156, 195);
glVertex2i(48, 195);
glVertex2i(84, 160);

glColor3ub(230, 108, 158);
glVertex2i(102, 195);
glVertex2i(102, 225);
glVertex2i(24, 225);
glVertex2i(36, 195);

glColor3ub(239, 86, 114);
glVertex2i(168, 195);
glVertex2i(180, 225);
glVertex2i(102, 225);
glVertex2i(102, 195);

glColor3ub(235, 98, 128);
glVertex2i(102, 195);
glVertex2i(102, 225);
glVertex2i(24, 225);
glVertex2i(36, 195);

glColor3ub(246, 120, 122);
glVertex2i(172, 205);
glVertex2i(176, 215);
glVertex2i(102, 215);
glVertex2i(102, 205);

glColor3ub(245, 134, 166);
glVertex2i(102, 205);
glVertex2i(102, 215);
glVertex2i(28, 215);
glVertex2i(32, 205);
glEnd();

///BOTTOM LEFT NAGARDOLA SEATS
     ///FROM LEFT TO RIGHT
          ///SEAT 1
glColor3ub(230, 82, 91);
glPushMatrix();
glTranslatef(position1, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(38, 195);
glVertex2i(36, 195);
glVertex2i(36, 165);
glVertex2i(38, 165);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position1, 0.0f, 0.0f);
glTranslatef(37, 165, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 2
glPushMatrix();
glTranslatef(position2, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(54.5, 195);
glVertex2i(52.5, 195);
glVertex2i(49.5, 155);
glVertex2i(51.5, 155);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position2, 0.0f, 0.0f);
glTranslatef(50.5, 155, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 3
glPushMatrix();
glTranslatef(position3, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(71, 195);
glVertex2i(69, 195);
glVertex2i(67, 150);
glVertex2i(69, 150);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position3, 0.0f, 0.0f);
glTranslatef(68, 150, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 4
glPushMatrix();
glTranslatef(position4, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(87.5, 195);
glVertex2i(85.5, 195);
glVertex2i(84.5, 158);
glVertex2i(86.5, 158);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position4, 0.0f, 0.0f);
glTranslatef(85.5, 158, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 5
glPushMatrix();
glTranslatef(position5, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(104, 195);
glVertex2i(102, 195);
glVertex2i(102, 150);
glVertex2i(104, 150);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position5, 0.0f, 0.0f);
glTranslatef(103, 150, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 6
glPushMatrix();
glTranslatef(position6, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(120.5, 195);
glVertex2i(118.5, 195);
glVertex2i(119.5, 165);
glVertex2i(121.5, 165);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position6, 0.0f, 0.0f);
glTranslatef(120.5, 165, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 7
glPushMatrix();
glTranslatef(position7, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(137, 195);
glVertex2i(135, 195);
glVertex2i(137, 160);
glVertex2i(139, 160);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position7, 0.0f, 0.0f);
glTranslatef(138, 160, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

          ///SEAT 8
glPushMatrix();
glTranslatef(position8, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2i(153, 195);
glVertex2i(151, 195);
glVertex2i(154, 155);
glVertex2i(156, 155);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position8, 0.0f, 0.0f);
glTranslatef(155, 155, 0);
glBegin(GL_TRIANGLE_FAN);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 6*sin(i);
            y = 6*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

///BOTTOM RIGHT NAGARDOLA
glBegin(GL_QUADS);
glColor3ub(254, 187, 83);
glVertex2i(545, 100);
glVertex2i(545, 265);
glVertex2i(520, 265);
glVertex2i(520, 100);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(166, 135, 215);
glVertex2i(533, 265);
glVertex2i(533, 371);
glVertex2i(433, 265);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(148, 123, 215);
glVertex2i(633, 265);
glVertex2i(533, 371);
glVertex2i(533, 265);
glEnd();

glBegin(GL_QUADS);
glColor3ub(152, 177, 234);
glVertex2i(533, 280);
glVertex2i(533, 302);
glVertex2i(468, 302);
glVertex2i(447, 280);
glEnd();

glBegin(GL_QUADS);
glColor3ub(139, 163, 233);
glVertex2i(533, 280);
glVertex2i(533, 302);
glVertex2i(598, 302);
glVertex2i(619, 280);
glEnd();

///BOTTOM RIGHT NAGARDOLA SEATS
     ///1
glPushMatrix();
glTranslatef(position10, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(443, 235);
glVertex2i(455, 265);
glVertex2i(453, 265);
glVertex2i(441, 235);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position10, 0, 0);
glTranslatef(440, 230, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position10, 0, 0);
glTranslatef(443, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///2
glPushMatrix();
glTranslatef(position11, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(465, 245);
glVertex2i(475, 265);
glVertex2i(473, 265);
glVertex2i(463, 245);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position11, 0, 0);
glTranslatef(462, 240, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position11, 0, 0);
glTranslatef(465, 245, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

      ///3
glPushMatrix();
glTranslatef(position12, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(485, 235);
glVertex2i(497, 265);
glVertex2i(495, 265);
glVertex2i(483, 235);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position12, 0, 0);
glTranslatef(482, 230, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position12, 0, 0);
glTranslatef(485, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///4
glPushMatrix();
glTranslatef(position13, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(510, 245);
glVertex2i(517, 265);
glVertex2i(515, 265);
glVertex2i(508, 245);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position13, 0, 0);
glTranslatef(507, 240, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position13, 0, 0);
glTranslatef(510, 245, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///5
glPushMatrix();
glTranslatef(position14, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(545, 235);
glVertex2i(538, 265);
glVertex2i(536, 265);
glVertex2i(543, 235);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position14, 0, 0);
glTranslatef(542, 230, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position14, 0, 0);
glTranslatef(545, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///6
glPushMatrix();
glTranslatef(position15, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(560, 245);
glVertex2i(553, 265);
glVertex2i(551, 265);
glVertex2i(558, 245);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position15, 0, 0);
glTranslatef(562, 240, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position15, 0, 0);
glTranslatef(565, 245, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///7
glPushMatrix();
glTranslatef(position16, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(585, 235);
glVertex2i(573, 265);
glVertex2i(571, 265);
glVertex2i(583, 235);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position16, 0, 0);
glTranslatef(583, 230, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position16, 0, 0);
glTranslatef(585, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///8
glPushMatrix();
glTranslatef(position17, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(602, 245);
glVertex2i(593, 265);
glVertex2i(591, 265);
glVertex2i(600, 245);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position17, 0, 0);
glTranslatef(601, 240, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position17, 0, 0);
glTranslatef(604, 245, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

     ///9
glPushMatrix();
glTranslatef(position18, 0, 0);
glColor3ub(166, 135, 215);
glBegin(GL_QUADS);
glVertex2i(624, 235);
glVertex2i(610, 265);
glVertex2i(608, 265);
glVertex2i(622, 235);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position18, 0, 0);
glTranslatef(621, 230, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 7*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position18, 0, 0);
glTranslatef(624, 235, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(199, 21, 133);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 7*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

///MIDDLE TENT
glPushMatrix();
glBegin(GL_QUADS);
glColor3ub(243, 58, 106);
glVertex2i(312.5, 170);
glVertex2i(312.5, 100);
glVertex2i(320, 100);
glVertex2i(320, 170);

glVertex2i(282.5, 170);
glVertex2i(282.5, 100);
glVertex2i(297.5, 100);
glVertex2i(297.5, 170);

glVertex2i(252.5, 170);
glVertex2i(252.5, 100);
glVertex2i(267.5, 100);
glVertex2i(267.5, 170);

glVertex2i(222.5, 170);
glVertex2i(222.5, 100);
glVertex2i(237.5, 100);
glVertex2i(237.5, 170);

glColor3ub(227, 11, 92);
glVertex2i(320, 170);
glVertex2i(320, 100);
glVertex2i(327.5, 100);
glVertex2i(327.5, 170);

glVertex2i(342.5, 170);
glVertex2i(342.5, 100);
glVertex2i(357.5, 100);
glVertex2i(357.5, 170);

glVertex2i(372.5, 170);
glVertex2i(372.5, 100);
glVertex2i(387.5, 100);
glVertex2i(387.5, 170);

glVertex2i(402.5, 170);
glVertex2i(402.5, 100);
glVertex2i(417.5, 100);
glVertex2i(417.5, 170);

glColor3ub(254,251,234);
glVertex2i(297.5, 170);
glVertex2i(297.5, 100);
glVertex2i(312.5, 100);
glVertex2i(312.5, 170);

glVertex2i(267.5, 170);
glVertex2i(267.5, 100);
glVertex2i(282.5, 100);
glVertex2i(282.5, 170);

glVertex2i(237.5, 170);
glVertex2i(237.5, 100);
glVertex2i(252.5, 100);
glVertex2i(252.5, 170);

glColor3ub(254,236,200);
glVertex2i(327.5, 170);
glVertex2i(327.5, 100);
glVertex2i(342.5, 100);
glVertex2i(342.5, 170);

glVertex2i(357.5, 170);
glVertex2i(357.5, 100);
glVertex2i(372.5, 100);
glVertex2i(372.5, 170);

glVertex2i(387.5, 170);
glVertex2i(387.5, 100);
glVertex2i(402.5, 100);
glVertex2i(402.5, 170);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(165, 42, 42);
glVertex2i(290, 100);
glVertex2i(320, 100);
glVertex2i(320, 150);

glColor3ub(139, 0, 0);
glVertex2i(320, 150);
glVertex2i(320, 100);
glVertex2i(350, 100);
glEnd();
glPopMatrix();

     ///FLAG
glPushMatrix();
glBegin(GL_QUADS);
glColor3ub(139, 69, 19);
glVertex2i(319, 245);
glVertex2i(319, 210);
glVertex2i(321, 210);
glVertex2i(321, 245);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(243, 135, 47);
glVertex2i(321, 240);
glVertex2i(321, 220);
glVertex2i(355, 230);
glEnd();
glPopMatrix();

     ///ROOF
glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(243, 58, 106);
glVertex2i(310, 170);
glVertex2i(320, 170);
glVertex2i(320, 215);

glVertex2i(270, 170);
glVertex2i(290, 170);
glVertex2i(320, 215);

glVertex2i(230, 170);
glVertex2i(250, 170);
glVertex2i(320, 215);

glColor3ub(224, 17, 95);
glVertex2i(310, 170);
glVertex2i(320, 170);
glVertex2i(320, 155);

glVertex2i(270, 170);
glVertex2i(290, 170);
glVertex2i(280, 155);

glVertex2i(230, 170);
glVertex2i(250, 170);
glVertex2i(240, 155);

glColor3ub(227, 11, 92);
glVertex2i(320, 170);
glVertex2i(330, 170);
glVertex2i(320, 215);

glVertex2i(350, 170);
glVertex2i(370, 170);
glVertex2i(320, 215);

glVertex2i(390, 170);
glVertex2i(410, 170);
glVertex2i(320, 215);

glColor3ub(194, 30, 86);
glVertex2i(320, 170);
glVertex2i(330, 170);
glVertex2i(320, 155);

glVertex2i(350, 170);
glVertex2i(370, 170);
glVertex2i(360, 155);

glVertex2i(390, 170);
glVertex2i(410, 170);
glVertex2i(400, 155);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(254,251,234);
glVertex2i(290, 170);
glVertex2i(310, 170);
glVertex2i(320, 215);

glVertex2i(250, 170);
glVertex2i(270, 170);
glVertex2i(320, 215);

glVertex2i(215, 170);
glVertex2i(230, 170);
glVertex2i(320, 215);

glColor3ub(253,245,230);
glVertex2i(290, 170);
glVertex2i(310, 170);
glVertex2i(300, 155);

glVertex2i(250, 170);
glVertex2i(270, 170);
glVertex2i(260, 155);

glVertex2i(215, 170);
glVertex2i(230, 170);
glVertex2i(222.5, 155);

glColor3ub(254,236,200);
glVertex2i(330, 170);
glVertex2i(350, 170);
glVertex2i(320, 215);

glVertex2i(370, 170);
glVertex2i(390, 170);
glVertex2i(320, 215);

glVertex2i(410, 170);
glVertex2i(425, 170);
glVertex2i(320, 215);

glColor3ub(255,228,181);
glVertex2i(330, 170);
glVertex2i(350, 170);
glVertex2i(340, 155);

glVertex2i(370, 170);
glVertex2i(390, 170);
glVertex2i(380, 155);

glVertex2i(410, 170);
glVertex2i(425, 170);
glVertex2i(417.5, 155);
glEnd();
glPopMatrix();

///AIMING ARENA
glPushMatrix();
glBegin(GL_QUADS);
glColor3ub(205,127,50);
glVertex2i(565, 160);
glVertex2i(465, 160);
glVertex2i(465, 100);
glVertex2i(565, 100);

glColor3ub(123,63,0);
glVertex2i(560, 160);
glVertex2i(470, 160);
glVertex2i(470, 115);
glVertex2i(560, 115);

glColor3ub(184,115,51);
glVertex2i(540, 110);
glVertex2i(490, 110);
glVertex2i(490, 105);
glVertex2i(540, 105);

glColor3ub(34,139,34);
glVertex2i(520.5, 185);
glVertex2i(509.5, 185);
glVertex2i(508.5, 160);
glVertex2i(521.5, 160);

glVertex2i(498.5, 185);
glVertex2i(487.5, 185);
glVertex2i(482.5, 160);
glVertex2i(495.5, 160);

glVertex2i(476.5, 185);
glVertex2i(465.5, 185);
glVertex2i(456.5, 160);
glVertex2i(469.5, 160);

glVertex2i(542.5, 185);
glVertex2i(531.5, 185);
glVertex2i(534.5, 160);
glVertex2i(547.5, 160);

glVertex2i(564.5, 185);
glVertex2i(553.5, 185);
glVertex2i(560.5, 160);
glVertex2i(573.5, 160);

glColor3ub(236,255,220);
glVertex2i(509.5, 185);
glVertex2i(498.5, 185);
glVertex2i(495.5, 160);
glVertex2i(508.5, 160);

glVertex2i(487.5, 185);
glVertex2i(476.5, 185);
glVertex2i(469.5, 160);
glVertex2i(482.5, 160);

glVertex2i(531.5, 185);
glVertex2i(520.5, 185);
glVertex2i(521.5, 160);
glVertex2i(534.5, 160);

glVertex2i(553.5, 185);
glVertex2i(542.5, 185);
glVertex2i(547.5, 160);
glVertex2i(560.5, 160);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(540, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(540, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,0,0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 10*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(540, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 8*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(540, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 6*sin(i);
			y = 6*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(540, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 4*sin(i);
			y = 4*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(540, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 2*sin(i);
			y = 2*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 10*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 8*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 6*sin(i);
			y = 6*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 4*sin(i);
			y = 4*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 2*sin(i);
			y = 2*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(490, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 12*sin(i);
			y = 12*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(490, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 10*sin(i);
			y = 10*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(490, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 8*sin(i);
			y = 8*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(490, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 6*sin(i);
			y = 6*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(490, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 4*sin(i);
			y = 4*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(490, 135, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 0, 0);
		for(i=0; i<=2*3.14; i+=0.0001)
		{
		    x = 2*sin(i);
			y = 2*cos(i);
			glVertex2i(x,y);
		}
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(0,128,0);
glVertex2i(508.5, 160);
glVertex2i(515, 150);
glVertex2i(521.5, 160);

glVertex2i(482.5, 160);
glVertex2i(489, 150);
glVertex2i(495.5, 160);

glVertex2i(456.5, 160);
glVertex2i(463, 150);
glVertex2i(469.5, 160);

glVertex2i(547.5, 160);
glVertex2i(541, 150);
glVertex2i(534.5, 160);

glVertex2i(573.5, 160);
glVertex2i(567, 150);
glVertex2i(560.5, 160);

glColor3ub(236,245,220);
glVertex2i(495.5, 160);
glVertex2i(502, 150);
glVertex2i(508.5, 160);

glVertex2i(469.5, 160);
glVertex2i(476, 150);
glVertex2i(482.5, 160);

glVertex2i(534.5, 160);
glVertex2i(528, 150);
glVertex2i(521.5, 160);

glVertex2i(560.5, 160);
glVertex2i(554, 150);
glVertex2i(547.5, 160);
glEnd();
glPopMatrix();

///GRASS
glPushMatrix();
glTranslatef(300, 104, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 200, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 9*sin(i);
            y = 9*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(292, 103, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 10*sin(i);
            y = 10*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(305, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 9*sin(i);
            y = 9*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(515, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 8*sin(i);
            y = 8*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(525, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 210, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 9*sin(i);
            y = 9*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(415, 104, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 200, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 10*sin(i);
            y = 10*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(410, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 9*sin(i);
            y = 9*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(421, 100, 0);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(102, 180, 73);
        for(i=0; i<=2*3.14; i+=0.0001)
        {
            x = 9*sin(i);
            y = 9*cos(i);
            glVertex2i(x,y);
        }
glEnd();
glPopMatrix();

///GROUND
glBegin(GL_QUADS);
glColor3ub (102, 191, 73);
glVertex2i(648, 0);
glVertex2i(648, 100);
glVertex2i(0, 100);
glVertex2i(0, 0);
glEnd();

glutSwapBuffers();
glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(500, 200);
glutCreateWindow("Welcome to the Fair!!");
glutDisplayFunc(myDisplay);
glutTimerFunc(1000, update, 0);
myInit();
glutMainLoop();
}
