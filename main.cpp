
#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <iostream>
#include<MMSystem.h>


using namespace std;

float c1xp=0.0,c1yp=0.0,c1zp=0.0;
float b1xp=0.0;
float c2xp=0.0,c2yp=0.0,c2zp=0.0;
float p1xp=0.0,p1yp=0.0,p1zp=0.0;
float p1sxp=0.0,p1syp=0.0,p1szp=0.0;
float x=1.0;
float rxp=0.0,ryp=0.0,rzp=0.0;
float r=0.0;

float width=-940,width2=600,width3=2000;

int dnr=51,dng=102,dnb=153;
int ldr=255,ldg=255,ldb=255;
int sdr=255,sdg=165,sdb=0;
int cdr=230,cdg=234,cdb=237;
int gdr=100,gdg=171,gdb=55;
int m1r=254,m1g=252,m1b=215;
int m2r=51,m2g=102,m2b=153;
int m=0;
int brr=0,brg=0,brb=0;
char school[] = "School";
char hospital[] = "Hospital";
char hotel[] = "Hotel";
char n[] = "n = Day/Night";
char b[] = "m = Move & Speed";
char rain[] = "Right Click for Rain";
char e[] = "e = Exit.";


void myInit (void)
{
        glClearColor(1.0, 1.0, 1.0, 0.0);
        glColor3f(0.0f, 0.0f, 0.0f);
        glPointSize(4.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 902.0, 0.0, 684.0);
}

void print( float x, float y, char *st)
{
    int l,i;

    l=strlen( st ); //  text string character.
    glColor3f(0.0,0.0,153.0);

    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
    }
}

void Sky()
{
        glPushMatrix();
        glColor3ub(dnr,dng,dnb);
        glBegin(GL_QUADS);
        glVertex2i(0,684);
        glVertex2i(902,684);
        glVertex2i(902,0);
        glVertex2i(0,0);
        glEnd();
        glPopMatrix();

        glutPostRedisplay();
}

void homeWindow3(int x,int y)
{
    glPushMatrix();
    glColor3ub(140,148,148);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+14,y);
    glVertex2i(x+14,y+13);
    glVertex2i(x,y+13);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(x,y+17);
    glVertex2i(x+14,y+17);
    glVertex2i(x+14,y+30);
    glVertex2i(x,y+30);
    glEnd();
    glPopMatrix();
}

void Home()
{
    glPushMatrix();
    glColor3ub(0,25,51);
    glBegin(GL_TRIANGLES);
    glVertex2i(69,405);
    glVertex2i(20,385);
    glVertex2i(118,385);

    glEnd();
    glPopMatrix();




    glPushMatrix();
    glColor3ub(127,10,20);
    glBegin(GL_QUADS);
    glVertex2i(20,379);
    glVertex2i(118,379);
    glVertex2i(118,385);
    glVertex2i(20,385);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(235,214,184);
    glBegin(GL_QUADS);
    glVertex2i(28,370);
    glVertex2i(110,370);
    glVertex2i(110,379);
    glVertex2i(28,379);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(10,330);
    glVertex2i(130,330);
    glVertex2i(130,370);
    glVertex2i(10,370);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,309);
    glVertex2i(141,309);
    glVertex2i(141,331);
    glVertex2i(0,331);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(225,225,0);
    glBegin(GL_QUADS);
    glVertex2i(5,257);
    glVertex2i(137,257);
    glVertex2i(137,309);
    glVertex2i(5,309);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(52,257);
    glVertex2i(87,257);
    glVertex2i(87,287);
    glVertex2i(52,287);
    glEnd();
    glPopMatrix();


    //next Bottom up block
    int HomeStripe3=-1;
    for(int i=5;i>=0;i--)
    {
        HomeStripe3+=18;
        homeWindow3(HomeStripe3,335);
    }

    glutPostRedisplay();
}


//*********HOSPITAL PART***********

void Hospital()
{
    glPushMatrix();
    glColor3ub(0,204,204);
    glBegin(GL_QUADS);
    glVertex2i(167,257);
    glVertex2i(181,257);
    glVertex2i(181,400);
    glVertex2i(167,400);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,204,204);
    glBegin(GL_QUADS);
    glVertex2i(435,257);
    glVertex2i(435,400);
    glVertex2i(420,400);
    glVertex2i(420,257);
    glEnd();
    glPopMatrix();

    glPushMatrix();// working place
    glColor3ub(225,0,0);
    glBegin(GL_QUADS);
    glVertex2i(181,381);
    glVertex2i(420,381);
    glVertex2i(420,400);
    glVertex2i(181,400);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,51,102);
    glBegin(GL_QUADS);
    glVertex2i(181,258);
    glVertex2i(420,258);
    glVertex2i(420,381);
    glVertex2i(181,381);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,204,204);//new
    glBegin(GL_QUADS);
    glVertex2i(151,390);
    glVertex2i(181,390);
    glVertex2i(181,401);
    glVertex2i(151,401);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,204,204);
    glBegin(GL_QUADS);
    glVertex2i(420,390);
    glVertex2i(449,390);
    glVertex2i(449,401);
    glVertex2i(420,401);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3ub(0,51,102);
    glBegin(GL_QUADS);
    glVertex2i(151,415);
    glVertex2i(151,400);
    glVertex2i(449,400);
    glVertex2i(449,415);
    glEnd();
    glPopMatrix();


    glPushMatrix(); //middle long stripe
    glColor3ub(225,204,229);
    glBegin(GL_QUADS);
    glVertex2i(263,257);
    glVertex2i(339,257);
    glVertex2i(339,400);
    glVertex2i(263,400);
    glEnd();
    glPopMatrix();

    glPushMatrix();  //Door
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(286,257);
    glVertex2i(318,257);
    glVertex2i(318,298);
    glVertex2i(286,298);
    glEnd();
    glPopMatrix();

    glPushMatrix();  //Door
    glColor3ub(255,255,202);
    glBegin(GL_QUADS);
    glVertex2i(286,298);
    glVertex2i(286,257);
    glVertex2i(302,265);
    glVertex2i(302,289);
    glEnd();
    glPopMatrix();





    glPushMatrix();  //Plus...
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(298,328);
    glVertex2i(302,328);
    glVertex2i(302,350);
    glVertex2i(298,350);
    glEnd();
    glPopMatrix();

    glPushMatrix();  //PLus....
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(286,341);
    glVertex2i(286,337);
    glVertex2i(313,337);
    glVertex2i(313,341);
    glEnd();
    glPopMatrix();







    glutPostRedisplay();// callback display
}


void HotelAboveWindow1(int x,int y)
{
    glPushMatrix();
    glColor3ub(204,0,0);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+17,y);
    glVertex2i(x+17,y+21);
    glVertex2i(x,y+21);
    glEnd();
    glPopMatrix();
}


void drawCircle(GLfloat x, GLfloat y, GLfloat radius)
{
    int i;
    int triangleAmount = 50; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * 3.1416;

    //glColor3ub(23,60,43);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2d(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2d(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
        glEnd();
}
void Hotel()
{
    glPushMatrix();  //down part
    glColor3ub(0,102,102);
    glBegin(GL_QUADS);
    glVertex2i(449,257);
    glVertex2i(644,257);
    glVertex2i(644,289);
    glVertex2i(449,289);
    glEnd();
    glPopMatrix();

    glPushMatrix();   //left side part
    glColor3ub(0,102,102);
    glBegin(GL_QUADS);
    glVertex2i(473,289);
    glVertex2i(500,289);
    glVertex2i(500,413);
    glVertex2i(473,413);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(21,63,53);
    glBegin(GL_QUADS);
    glVertex2i(500,289);
    glVertex2i(617,289);
    glVertex2i(617,408);
    glVertex2i(500,408);
    glEnd();
    glPopMatrix();

    glPushMatrix();  // above name plate
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(526,408);
    glVertex2i(600,408);
    glVertex2i(600,423);
    glVertex2i(526,423);
    glEnd();
    glPopMatrix();

    glColor3ub(0,102,102);  // side circle
    drawCircle(475.0f,310.0f,18.0f);
    drawCircle(475.0f,348.0f,18.0f);
    drawCircle(475.0f,383.0f,18.0f);

    int HotelAboveStripe1=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe1+=24;
        HotelAboveWindow1(HotelAboveStripe1,377);
    }

    int HotelAboveStripe2=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe2+=24;
        HotelAboveWindow1(HotelAboveStripe2,350);
    }

    int HotelAboveStripe3=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe3+=24;
        HotelAboveWindow1(HotelAboveStripe3,323);
    }

    int HotelAboveStripe4=498;
    for(int i=3;i>=0;i--)
    {
        HotelAboveStripe4+=24;
        HotelAboveWindow1(HotelAboveStripe4,295);
    }
}

void Door()
{
    glColor3ub(8,32,19);
    drawCircle(547.0f,282.0f,22.0f);

    glPushMatrix();     // door
    glColor3ub(119,81,70);
    glBegin(GL_QUADS);
    glVertex2i(524,258);
    glVertex2i(570,258);
    glVertex2i(570,281);
    glVertex2i(524,281);
    glEnd();
    glPopMatrix();

    glPushMatrix();     // door middle
    glColor3ub(70,113,106);
    glBegin(GL_QUADS);
    glVertex2i(528,280);
    glVertex2i(546,280);
    glVertex2i(546,257);
    glVertex2i(528,257);
    glEnd();
    glPopMatrix();

    glPushMatrix();     // door middle
    glColor3ub(70,113,106);
    glBegin(GL_QUADS);
    glVertex2i(548,257);
    glVertex2i(565,257);
    glVertex2i(565,280);
    glVertex2i(548,280);
    glEnd();
    glPopMatrix();

}

//**********School part***********

void SchoolWindow1(int x,int y)
{
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+20,y);
    glVertex2i(x+20,y+17);
    glVertex2i(x,y+17);
    glEnd();
    glPopMatrix();
}

void School()
{
    glPushMatrix();
    glColor3ub(255,204,153);// editing part
    glBegin(GL_QUADS);
    glVertex2i(643,257);
    glVertex2i(884,257);
    glVertex2i(884,405);
    glVertex2i(643,405);
    glEnd();
    glPopMatrix();



    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(640,405);
    glVertex2i(887,405);
    glVertex2i(887,412);
    glVertex2i(640,412);
    glEnd();
    glPopMatrix();



    glPushMatrix();
    glColor3ub(73,3,5);
    glBegin(GL_QUADS);
    glVertex2i(640,412);
    glVertex2i(887,412);
    glVertex2i(837,462);
    glVertex2i(690,462);

    glEnd();
    glPopMatrix();




    glPushMatrix();
    glColor3ub(0,0,102);
   glBegin(GL_QUADS);
    glVertex2i(648,265);
    glVertex2i(719,265);
    glVertex2i(719,275);
    glVertex2i(648,275);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,0,102);
    glBegin(GL_QUADS);
    glVertex2i(808,265);
    glVertex2i(879,265);
    glVertex2i(879,275);
    glVertex2i(808,275);
    glEnd();
    glPopMatrix();

    glPushMatrix();

     int SchoolStripe1=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe1+=25;
        SchoolWindow1(SchoolStripe1,330);
    }

     int SchoolStripe2=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe2+=25;
        SchoolWindow1(SchoolStripe2,305);
    }

    int SchoolStripe3=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe3+=25;
        SchoolWindow1(SchoolStripe3,280);
    }

    int SchoolStripe4=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe4+=25;
        SchoolWindow1(SchoolStripe4,330);
    }

    int SchoolStripe5=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe5+=25;
        SchoolWindow1(SchoolStripe5,305);
    }

    int SchoolStripe6=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe6+=25;
        SchoolWindow1(SchoolStripe6,280);
    }
    int SchoolStripe7=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe7+=25;
        SchoolWindow1(SchoolStripe7,355);
    }


    int SchoolStripe8=623;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe8+=25;
        SchoolWindow1(SchoolStripe8,380);
    }

      int SchoolStripe9=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe9+=25;
        SchoolWindow1(SchoolStripe9,355);
    }

      int SchoolStripe10=783;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe10+=25;
        SchoolWindow1(SchoolStripe10,380);
    }

    int SchoolStripe11=704;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe11+=25;
        SchoolWindow1(SchoolStripe11,355);
    }

    int SchoolStripe12=704;
    for(int i=2;i>=0;i--)
    {
        SchoolStripe12+=25;
        SchoolWindow1(SchoolStripe12,380);
    }

}
void SchoolDoor()
{
    glPushMatrix();
    glColor3ub(72,2,4);
    glBegin(GL_QUADS);
    glVertex2i(728,257);
    glVertex2i(797,257);
    glVertex2i(797,321);
    glVertex2i(728,321);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(75,3,4);
    glBegin(GL_TRIANGLES);
    glVertex2i(722,321);
    glVertex2i(803,321);
    glVertex2i(763,347);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(100,150,100);
    glBegin(GL_QUADS);
    glVertex2i(733,304);
    glVertex2i(792,304);
    glVertex2i(792,321);
    glVertex2i(733,321);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(89,107,121);
    glBegin(GL_QUADS);
    glVertex2i(743,257);
    glVertex2i(782,257);
    glVertex2i(782,295);
    glVertex2i(743,295);
    glEnd();
    glPopMatrix();
}

void HouseFrontTree()
{
     for(float i=0; i<5*130;i+=245)
     {
        glPushMatrix();
        glColor3ub(204,102,0);
        glBegin(GL_QUADS);
        glVertex2i(140+i,256);
        glVertex2i(148+i,256);
        glVertex2i(148+i,285);
        glVertex2i(140+i,285);
        glEnd();
        glPopMatrix();

        glColor3ub(37,90,27);
        drawCircle(144.0f+i,288.0f,10.0f);
        drawCircle(150.0f+i,281.0f,9.0f);
        drawCircle(157.0f+i,286.0f,7.0f);
        drawCircle(146.0f+i,232.0f,12.0f);
        drawCircle(134.0f+i,291.0f,12.0f);
        drawCircle(138.0f+i,300.0f,13.0f);
        drawCircle(144.0f+i,299.0f,7.0f);
        drawCircle(150.0f+i,299.0f,10.0f);
     }
}

void Moon()
{
    glPushMatrix();
    glColor3ub(m1r,m1g,m1b);
    drawCircle(730.0f,620.0f,40.0f);
    glColor3ub(m2r,m2g,m2b);
    drawCircle(740.0f,640.0f,40.0f);
    glPopMatrix();
}

void Sun()
{
    glColor3ub(sdr,sdg,sdb);
    drawCircle(824.0f,615.0f,40.0f);
    glutPostRedisplay();
}

float cdxp1=0.0;
//float cdxp2=0.0;
float cdxp3=0.0;

void Cloud()
{
    glPushMatrix();
    glTranslatef(c1xp+cdxp1,0,0);
    glColor3ub(cdr,cdg,cdb);
    drawCircle(594.0f,580.0f,20.0f);
    drawCircle(572.0f,600.0f,28.0f);
    drawCircle(539.0f,600.0f,35.0f);
    drawCircle(513.0f,580.0f,20.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(c1xp+cdxp3,0,0);
    drawCircle(200.0f,600.0f,25.0f);
    drawCircle(170.0f,615.0f,28.0f);
    drawCircle(139.0f,610.0f,35.0f);
    drawCircle(111.0f,595.0f,25.0f);
    glPopMatrix();

    glutPostRedisplay();
}


void Road()
{
    glPushMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(0,148);
    glVertex2i(902,148);
    glVertex2i(902,47);
    glVertex2i(0,47);
    glEnd();
    glPopMatrix();

    for(int i=0;i<120*8;i+=120)
    {
        glPushMatrix();
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2i(0+i,95);
        glVertex2i(35+i,95);
        glVertex2i(35+i,100);
        glVertex2i(0+i,100);
        glEnd();
        glPopMatrix();
    }
}

void RoadGrash()
{
    glPushMatrix();
    //glColor3ub(gdr,gdg,gdb);
    glColor3ub(0,100,0);
    glBegin(GL_QUADS);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(902.0,0.0,0.0);
    glVertex3f(902.0,47.0,0.0);
    glVertex3f(0.0,47.0,0.0);
    glEnd();
    glPopMatrix();
}

void LampPost()
{
    for(int i=0;i<10*115;i+=115)
    {
        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(34+i,158);
        glVertex2i(51+i,158);
        glVertex2i(51+i,160);
        glVertex2i(34+i,160);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(37+i,160);
        glVertex2i(48+i,160);
        glVertex2i(48+i,162);
        glVertex2i(37+i,162);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(40+i,162);
        glVertex2i(45+i,162);
        glVertex2i(45+i,206);
        glVertex2i(40+i,206);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(0,0,0);
        glBegin(GL_QUADS);
        glVertex2i(38+i,206);
        glVertex2i(48+i,206);
        glVertex2i(48+i,209);
        glVertex2i(38+i,209);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glColor3ub(ldr,ldg,ldb);
        drawCircle(43+i,218,9);
        glPopMatrix();

        if(ldr==255 && ldg==244 && ldb==78)
        {
            glPushMatrix();
            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(70+i,225);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(60+i,245);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(40+i,245);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(20+i,240);
            glEnd();

            glColor3ub(255,244,78);
            glBegin(GL_LINES);
            glVertex2i(43+i,218);
            glVertex2i(10+i,225);
            glEnd();

        }
    }
}


void BetweenRoadAndBuldings()
{
    glPushMatrix();
    //glColor3ub(gdr,gdg,gdb);

    glColor3ub(0,100,0);
    glBegin(GL_QUADS);
    glVertex3f(0.0,157.0,0.0);
    glVertex3f(902.0,157.0,0.0);
    glVertex3f(902.0,258.0,0.0);
    glVertex3f(0.0,258.0,0.0);
    glEnd();
    glPopMatrix();
}


void Car1()
{
    glPushMatrix();
    glColor3ub(102,51,0);
    glTranslatef(c1xp,c1yp,c1zp);
    glBegin(GL_QUADS);
    glVertex2i(310-500,110);
    glVertex2i(414-500,110);
    glVertex2i(414-500,170);
    glVertex2i(310-500,170);
    glEnd();
    //glPopMatrix();

    //glPushMatrix();

    glColor3ub(204,204,255);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(414-500,162);
    glVertex2i(445-500,162);
    glVertex2i(473-500,134);
    glVertex2i(473-500,112);
    glVertex2i(414-500,112);
    glEnd();

    //glPopMatrix();

    //glPushMatrix();

    glColor3ub(104,51,0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(417-500,158);
    glVertex2i(444-500,158);
    glVertex2i(463-500,139);
    glVertex2i(463-500,134);
    glVertex2i(417-500,134);
    glEnd();

    //glPopMatrix();

    //glPushMatrix();
    glColor3ub(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(464-500,128);
    glVertex2i(472-500,128);
    glVertex2i(472-500,113);
    glVertex2i(464-500,113);
    glEnd();

    //glPushMatrix();
    glColor3ub(48,48,46);
    drawCircle(342-500,116,15);
    glColor3ub(255,255,255);
    drawCircle(342-500,116,10);
    glColor3ub(0,0,0);
    drawCircle(342-500,116,8);


    //glPushMatrix();
    glColor3ub(48,48,46);
    drawCircle(434-500,116,15);
    glColor3ub(255,255,255);
    drawCircle(434-500,116,10);
    glColor3ub(0,0,0);
    drawCircle(434-500,116,8);

    glPopMatrix();
}

void Car2()
{
    glPushMatrix();
    glTranslatef(c2xp,c2yp,c2zp);
    glColor3ub(153,0,0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(459+500,154-70);
    glVertex2i(466+500,160-70);
    glVertex2i(491+500,160-70);
    glVertex2i(510+500,179-70);
    glVertex2i(568+500,179-70);
    glVertex2i(579+500,162-70);
    glVertex2i(579+500,141-70);
    glVertex2i(459+500,141-70);
    glEnd();
    //glPopMatrix();

    glColor3ub(32,32,32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(503+500,169-70);
    glVertex2i(512+500,177-70);
    glVertex2i(525+500,177-70);
    glVertex2i(521+500,163-70);
    glVertex2i(503+500,163-70);
    glEnd();

    glColor3ub(32,32,32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(526+500,163-70);
    glVertex2i(530+500,177-70);
    glVertex2i(547+500,177-70);
    glVertex2i(547+500,163-70);
    glEnd();



    glColor3ub(51,53,50);
    drawCircle(474+500,142-70,10);
    glColor3ub(255,0,0);
    drawCircle(474+500,142-70,8);
    glColor3ub(0,0,0);
    drawCircle(474+500,142-70,7);


    glColor3ub(51,53,50);
    drawCircle(551+500,142-70,10);
    glColor3ub(255,0,0);
    drawCircle(551+500,142-70,8);
    glColor3ub(0,0,0);
    drawCircle(551+500,142-70,7);

    glPopMatrix();
}

void Rain()
{
    glPushMatrix();
    glTranslatef(c1xp,(-1)*p1yp,0);  //for movment
    cout << "Rain speed: "  << c1xp*1 << endl;
    glColor3ub(103,155,176);
    for(int j=0;j<20*160;j+=20)
    {
        for(int i=0;i<20*160;i+=20)
        {
            glBegin(GL_LINES);
            glVertex2f(0+i+j,0+i);
            glVertex2f(-5.5+i+j,10+i);
            glEnd();

            glBegin(GL_LINES);
            glVertex2f(0+i-j,0+i);
            glVertex2f(-5.5+i-j,10+i);
            glEnd();
        }
    }
    glPopMatrix();
}


void soundrain()
{
    PlaySound("rainsound.wav", NULL, SND_ASYNC|SND_FILENAME);


}




void Plane1()
{
    glPushMatrix();
    glTranslatef(c1xp,0.0,0.0);
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2i(7-200,307+350);
    glVertex2i(76-200,318+350);
    glVertex2i(95-200,312+350);
    glVertex2i(22-200,290+350);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(13-200,305+350);
    glVertex2i(0-200,338+350);
    glVertex2i(4-200,339+350);
    glVertex2i(25-200,313+350);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(32-200,277+350);
    glVertex2i(49-200,301+350);
    glVertex2i(64-200,306+350);
    glVertex2i(37-200,279+350);
    glEnd();

    int j=0;
    for(int i=0;i<5*10;i+=10)
    {
        glColor3ub(249,190-j,0);
        drawCircle(73-i-200,312.5-j+350,2);
        j+=2;
    }

    glPopMatrix();
}



void Bird()
{
    glPushMatrix();
    glTranslatef(b1xp+c1xp,0.0,0.0);
    glColor3ub(brr,brg,brb);
    glBegin(GL_LINES);
    glVertex2i(300,600);
    glVertex2i(280,580);
    glVertex2i(290,600);
    glVertex2i(295,585);

    glVertex2i(290,600);
    glVertex2i(285,595);

    glVertex2i(295,585);
    glVertex2i(290,580);


    glEnd();

    glPopMatrix();
}




void CarTranslate(int value)
{
    width+=1.0;
    width2-=1.0;


    if(width<10093)
    {
        cdxp1+=0.09;

        cdxp3+=0.0001; //CloudsT variable

        c1xp+=0.1;
        if(width>10091)
        {
            width=-940;
            c1xp=0.0;
            b1xp=0.0;
        }
        if(width==1295)
        {
            cdxp1=0.0;
        }
        cout << "Width: " << width << endl;
    }
    if(width2>-1614)
    {
        c2xp-=0.5;
        p1xp-=0.001;
        p1yp+=0.6;
        if(width2==-1613)
        {
            width2=600;
            c2xp=0;

            p1xp=0;
            p1yp=0;
            p1sxp=0;
            p1syp=0;
            x=1.0;
            glutPostRedisplay();
        }
        if(width2<1200)
        {
            p1sxp+=0.001;
            p1syp+=0.001;
            glutPostRedisplay();
        }
        cout << "Width2: " << p1xp << endl;
    }

    glutTimerFunc(0,CarTranslate,25);
}

void keyboard(unsigned char key, int x, int y)
{
    if(key=='m')
    {
        CarTranslate(0);
        glutPostRedisplay();
    }
    if(key=='e')
    {
        exit(1);
    }

    if(key=='n')
    {
        if(dnr==51 && dng==102 && dnb==153)
        {
            dnr=19;
            dng=38;
            dnb=57;

            ldr=255;
            ldg=244;
            ldb=78;

            sdr=19;
            sdg=38;
            sdb=57;

            cdr=19;
            cdg=38;
            cdb=57;

            gdr=29;
            gdg=96;
            gdb=17;

            m1r=246;
            m1g=171;
            m1b=26;

            m2r=19;
            m2g=38;
            m2b=57;

            brr=19;
            brg=38;
            brb=57;

        }else if(dnr==19 && dng==38 && dnb==57)
        {
            dnr=51;
            dng=102;
            dnb=153;

            ldr=255;
            ldg=255;
            ldb=255;

            sdr=246;
            sdg=171;
            sdb=26;

            cdr=230;
            cdg=234;
            cdb=237;

            gdr=100;
            gdg=171;
            gdb=55;

            m1r=51;
            m1g=102;
            m1b=153;

            m2r=224;
            m2g=235;
            m2b=235;

            brr=19;
            brg=38;
            brb=57;

        }
    }
}

void Raining()
{
    if(r==0)
    {
        r=1;
    }else
    {
        r=0;
    }
}

void mouse(int button,int state,int x,int y)
{
    switch(button)
    {
    case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)
         Raining();
          soundrain();
          break;
    default:
         break;


    }
}
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    Sky();
    Home();
    Hospital();

    Hotel();
    Door();

    School();
    SchoolDoor();
    HouseFrontTree();
    Sun();
    Cloud();

    BetweenRoadAndBuldings();
    Road();

    LampPost();

    RoadGrash();
    Car1();
    Car2();


    print(732,306,school);
    print(540,410,hotel);
    print(267,300,hospital);

    print(30,530,b);
    print(30,500,n);
    print(30,470,rain);
    print(30,440,e);

    if(ldr==255 && ldg==244 && ldb==78)
    {
        Moon();
    }
    if(r==1)
    {
        Rain();
    }
    Plane1();
    Bird();
    glFlush ();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (902,684);
    glutInitWindowPosition (250, 30);
    glutCreateWindow ("American City View");
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    myInit ();
    glutMainLoop();
}
