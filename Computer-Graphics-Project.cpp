#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
            
void sun(double cx, double cy, double r, int n)
{ 
    double x, y; 
    const double PI = 3.1415926535; 
    glBegin(GL_POLYGON );
    double i=0; 
    for( i ; i<=2*PI; i=i+2*PI/n) 
    { 
        x = cx + r * cos(i); 
        y = cy + r * sin(i); 
        glVertex2f(x, y);   
    }
  glEnd(); 
}           
void door_point(double cx, double cy, double r, int n)  
{ 
    double x, y; 
    const double PI = 3.1415926535; 
    glBegin(GL_LINES );
    double i=0; 
    for( i ; i<=2*PI; i=i+2*PI/n) 
    { 
        x = cx + r * cos(i); 
        y = cy + r * sin(i); 
        glVertex2f(x, y);   
    } 
  glEnd(); 
}
            
void buildHouse()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //start house
    glColor3ub(255, 178, 102); 
    glBegin(GL_QUADS);
    glVertex2i(200,0); glVertex2i(-200, 0);
    glVertex2i(-200, -400); glVertex2i(200, -400);
    glEnd(); //end house
                	
    //ÇáãÏÎäå
    glColor3ub(102, 51, 0); 
    glBegin(GL_QUADS);
    glVertex2i(200,0); glVertex2i(200, 200);
    glVertex2i(100, 200); glVertex2i(100, 50);
    glEnd();
                	
                	
    //start tringle
    glColor3ub(255, 0, 0); 
    glBegin(GL_TRIANGLES); 
    glVertex2i(-200, 0); glVertex2i(0, 200); 
    glColor3ub(255, 0, 0); glVertex2i(200, 0); 
    glEnd(); //end tringle
                     
                     
    //start door
    glColor3ub(96, 96, 96);
    glRectf(100, -200, -100, -400); //end door
                      
    //start window1
    glColor3ub(204, 102, 0); 
    glBegin(GL_QUADS);
    glVertex2i(100,-140); glVertex2i(40, -140);
    glColor3ub(0, 0, 0); 
    glVertex2i(40, -60); glVertex2i(100, -60);
    glEnd();  //end window1
                      
    //start window2
    glColor3ub(204, 102, 0); 
    glBegin(GL_QUADS);
    glVertex2i(-100,-140); glVertex2i(-40, -140);
    glColor3ub(0, 0, 0); 
    glVertex2i(-40, -60); glVertex2i(-100, -60);
    glEnd();  //end window2
                	
    //start sun
    glColor3ub(255, 255, 0); 
    sun(-400, 400, 100, 100); //end sun
                	
    //start lines sun
    glColor3ub(255, 255, 0); 
    glBegin(GL_LINES); 
    glVertex2i(-300, 390);
    glVertex2i(-200, 340);
                  
    glVertex2i(-310, 360);
    glVertex2i(-170, 270);
                   
    glVertex2i(-330, 330);
    glVertex2i(-190, 220);
                   
    glVertex2i(-360, 310);
    glVertex2i(-250, 210); 
                   
    glVertex2i(-390, 300);
    glVertex2i(-300, 200);
    glEnd(); //end lines sun
                    
    // strat line in door
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES); 
    glVertex2i(0, -200);
    glVertex2i(0, -400);
    glEnd(); // end line in door
                     
    //start point door
    glColor3ub(0, 0, 0);
    door_point(20, -300, 10, 80);
    door_point(-20, -300, 10, 80);
    //end point door
               
    //start clouds
    glColor3ub(255, 255, 255);
    sun(265, 370, 20, 100);
    sun(300, 370, 20, 100);
    sun(240, 300, 20, 100);
    sun(275, 300, 20, 100);
    sun(215, 230, 20, 100);
    sun(250, 230, 20, 100); 
    glColor3ub(224, 224, 224); //start clouds
                	
    glFlush(); 	
}
            
void init()
{ 
    glClearColor(0, 1, 1,0); 
    gluOrtho2D(-400, 400, -400, 400); 
}
                
                
int main(int argc, char** argv)
{
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutInitWindowSize(400, 400); 
    glutInitWindowPosition(500, 100); 
    glutCreateWindow("Name:Doaa , Id:43304306"); 
    glutDisplayFunc(buildHouse);
    //glutDisplayFunc(draw_tringle);
    init(); 
    glutMainLoop(); 
    return 0;
    // system("pause");
}         
            
