//
//  Assignment # 1
//  Computer Graphics
//  Professor: Dr. Omar Osman Khan
//
//  **      Usage Instructions      **
//
//  Just Run the project and every task will open parallely
//  Keyboard functioanlity can be used once you click on the window of the desired task
//
//  **      Instructions End Here   **
//
//  Created by Hassan Bokhari on 6/10/2019.
//  Copyright © 2019 Hassan Bokhari. All rights reserved.
//

#define GL_SILENCE_DEPRECATION

#include "glut.h"
#include <cmath>

GLfloat angleCube = 0.0f;
GLfloat angleCube2 = 0.0f;

void displayTask1() {
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
    
    // Front face
    glBegin(GL_LINE_LOOP);
    
        glVertex3f( 0.5f,  0.5f, 0.5f);
        glVertex3f(-0.5f,  0.5f, 0.5f);
        glVertex3f(-0.5f, -0.5f, 0.5f);
        glVertex3f( 0.5f, -0.5f, 0.5f);

    glEnd();

    // Back face
    glBegin(GL_LINE_LOOP);
    
        glVertex3f( 0.9f, 0.7f, -0.5f);
        glVertex3f( 0.9f, -0.3f, -0.5f);
        glVertex3f(-0.1f, -0.3f, -0.5f);
        glVertex3f( -0.1f,  0.7f, -0.5f);
    
    glEnd();
    
    glBegin(GL_LINES);
    
        glVertex3f(-0.5, 0.5, 0.5);
        glVertex3f(-0.1f, 0.7, -0.5);
    
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(0.9f, 0.7, -0.5);

        glVertex3f(-0.5, -0.5, 0.5);
        glVertex3f(-0.1f, -0.3, -0.5);
    
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(0.9f, -0.3, -0.5);
    
    glEnd();
    glFlush();
}

void displayTask2() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
    
    glBegin(GL_LINE_STRIP);
    
        glVertex3f(-0.5f,-0.5f,-0.5f); // Front
        glVertex3f(0.5f,-0.5f, -0.5f);
        glVertex3f(-0.5f, 0.5f, -0.5f);
        glVertex3f(0.5, 0.5, -0.5);
        glVertex3f(0.5f,-0.5f, -0.5f);
        glVertex3f(-0.5f,-0.5f,-0.5f);
        glVertex3f(-0.5f, 0.5f, -0.5f);

    glEnd();

    glBegin(GL_LINE_STRIP);

        glVertex3f(0.5f,-0.5f,-0.5f); // Right
        glVertex3f(0.5f,-0.5f, 0.5f);
        glVertex3f(0.5f, 0.5f, -0.5f);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(0.5f,-0.5f, 0.5f);
        glVertex3f(0.5f,-0.5f,-0.5f);
        glVertex3f(0.5f, 0.5f, -0.5f);

    glEnd();
    
    glBegin(GL_LINE_STRIP);
    
        glVertex3f(0.5f,-0.5f,0.5f); // Back
        glVertex3f(-0.5f,-0.5f, 0.5f);
        glVertex3f(0.5f, 0.5f, 0.5f);
        glVertex3f(-0.5, 0.5, 0.5);
        glVertex3f(-0.5f,-0.5f, 0.5f);
        glVertex3f(0.5f,-0.5f,0.5f);
        glVertex3f(0.5f, 0.5f, 0.5f);
    
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    
        glVertex3f(-0.5f,-0.5f,0.5f); // Left
        glVertex3f(-0.5f,-0.5f, -0.5f);
        glVertex3f(-0.5f, 0.5f, 0.5f);
        glVertex3f(-0.5, 0.5, -0.5);
        glVertex3f(-0.5f,-0.5f, -0.5f);
        glVertex3f(-0.5f,-0.5f,0.5f);
        glVertex3f(-0.5f, 0.5f, 0.5f);
    
    glEnd();
    
    glBegin(GL_LINES);
    
        glVertex3f(-0.5f,0.5f,0.5f); // Top
        glVertex3f(0.5f,0.5f, -0.5f);
    
    glEnd();
    
    glBegin(GL_LINES);
    
        glVertex3f(-0.5f,-0.5f,0.5f); // Bottom
        glVertex3f(0.5f,-0.5f, -0.5f);
    
    glEnd();

    glFlush();
}

void displayTask3() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
    //Front
    
    glColor3f(1, 0, 0);
        glVertex3f(0.5, -0.5, -0.5);
        glVertex3f(0.5, 0.5, -0.5);
        glVertex3f(-0.5, 0.5, -0.5);
    
    glColor3f(0, 1, 0);
        glVertex3f(-0.5, -0.5, -0.5);
    
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    //Right
    
    glColor3f(0.3, 0.7, 0.1);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(0.5, 0.5, -0.5);
    
    glColor3f(0, 0, 1);
        glVertex3f(0.5, -0.5, -0.5);
    
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    //Back
    
    glColor3f(0.0, 0.7, 0.1);
        glVertex3f(-0.5, -0.5, 0.5);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(0.5, 0.5, 0.5);
    
    glColor3f(0, 1, 0.2);
        glVertex3f(-0.5, 0.5, 0.5);
    
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    //Left
    
    glColor3f(0.3, 0.7, 0.1);
        glVertex3f(-0.5, -0.5, 0.5);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(0.5, 0.5, 0.5);

    glColor3f(0, 0, 1);
        glVertex3f(-0.5, 0.5, 0.5);

    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    //Top
    
    glColor3f(1, 0, 0);
        glVertex3f(-0.5, 0.5, 0.5);
        glVertex3f(0.5, 0.5, 0.5);
        glVertex3f(0.5, 0.5, -0.5);
    
    glColor3f(0, 0, 1);
        glVertex3f(-0.5, 0.5, -0.5);
    
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);
    //Bottom
    
    glColor3f(0.1, 0.3, 0.8);
        glVertex3f(-0.5, -0.5, 0.5);
        glVertex3f(0.5, -0.5, 0.5);
        glVertex3f(0.5, -0.5, -0.5);
    
    glColor3f(1, 0, 0);
        glVertex3f(-0.5, -0.5, -0.5);
    
    glEnd();
    
    glFlush();
}

void displayTask4() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
    
    
        glBegin(GL_TRIANGLES);
        // Front
    
        glColor3f(1.0f, 0.0f, 0.0f);     // Red
            glVertex3f( 0.0f, 0.5f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);     // Green
            glVertex3f(-0.5f, -0.5f, 0.5f);
        glColor3f(0.0f, 0.0f, 1.0f);     // Blue
            glVertex3f(0.5f, -0.5f, 0.5f);
    
        // Right
        glColor3f(1.0f, 0.0f, 0.0f);     // Red
            glVertex3f(0.0f, 0.5f, 0.0f);
        glColor3f(0.0f, 0.0f, 1.0f);     // Blue
            glVertex3f(0.5f, -0.5f, 0.5f);
        glColor3f(0.0f, 1.0f, 0.0f);     // Green
            glVertex3f(0.5f, -0.5f, -0.5f);
    
        // Back
        glColor3f(1.0f, 0.0f, 0.0f);     // Red
            glVertex3f(0.0f, 0.5f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);     // Green
            glVertex3f(0.5f, -0.5f, -0.5f);
        glColor3f(0.0f, 0.0f, 1.0f);     // Blue
            glVertex3f(-0.5f, -0.5f, -0.5f);
    
        // Left
        glColor3f(1.0f,0.0f,0.0f);       // Red
            glVertex3f( 0.0f, 0.5f, 0.0f);
        glColor3f(0.0f,0.0f,1.0f);       // Blue
            glVertex3f(-0.5f,-0.5f,-0.5f);
        glColor3f(0.0f,1.0f,0.0f);       // Green
            glVertex3f(-0.5f,-0.5f, 0.5f);
    
        glEnd();
    glFlush();
}

void displayTask5(){
    float x,y;
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
    
    glBegin(GL_LINE_STRIP);
    for(double i =0; i <= 360; i+= 0.5){
        
        x=0.5*cos(i);
        y=0.5*sin(i);
        glVertex2d(x, y);
    }
    glEnd();
    glFlush();
}
void displayTask6(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
    
    float radius = 0.5f, x = 0.0, y = 0.0, z;
    for (int i = 0; i <= 360; i+=20) {
        glBegin(GL_LINE_LOOP);
        float theta = i * (3.142 / 180.0f);
        for (int j = 0; j <= 180; j++) {
            float phi = j * (3.142 / 90.0f);
            x = radius * sin(phi) * cos(theta);
            y = radius * sin(phi) * sin(theta);
            z = radius * cos(phi);
            glVertex3f(x, y, z);
        }
        glEnd();
    }
    z = 0.5;
    float arr[6] = {0.1, 0.4, 0.5, 0.49, 0.4, 0.1};
    for (int j = 0 ; j < 6 ; j += 1)
    {
        glBegin(GL_LINE_STRIP);
        for(double i =0; i <= 360; i+= 0.5) {
            x = arr[j] * cos(i);
            y = arr[j] * sin(i);
            glVertex3d(y, x, z);
        }
        z -= 0.2;
        glEnd();
    }
    glFlush();
}

void keyboard(int key, int x, int y)
{
    switch (key)
    {
        case GLUT_KEY_RIGHT: {
            angleCube += 0.2f;
            break;
        }
        case GLUT_KEY_LEFT: {
            angleCube -= 0.2f;
            break;
        }
        case GLUT_KEY_UP: {
            angleCube2 += 0.2f;
            break;
        }
        case GLUT_KEY_DOWN: {
            angleCube2 -= 0.2f;
            break;
        }
    }
    glutPostRedisplay();
}
int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);   // Set the window's initial width & height
    glutInitWindowPosition(500, 500);
    glutCreateWindow("TASK 1");
    glutDisplayFunc(displayTask1);
    glutSpecialFunc(keyboard);
    glutCreateWindow("TASK 2");
    glutDisplayFunc(displayTask2);
    glutSpecialFunc(keyboard);
    glutCreateWindow("TASK 3");
    glutDisplayFunc(displayTask3);
    glutSpecialFunc(keyboard);
    glutCreateWindow("TASK 4");
    glutDisplayFunc(displayTask4);
    glutSpecialFunc(keyboard);
    glutCreateWindow("TASK 5");
    glutDisplayFunc(displayTask5);
    glutSpecialFunc(keyboard);
    glutCreateWindow("TASK 6");
    glutDisplayFunc(displayTask6);
    glutSpecialFunc(keyboard);
    glutMainLoop();
}
