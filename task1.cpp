//
//  Assignment # 2
//  Computer Graphics
//  Professor: Dr. Omar Osman Khan
//
//  Created by Hassan Bokhari on 12/11/2019.
//  Copyright © 2019 Hassan Bokhari. All rights reserved.
//

#define GL_SILENCE_DEPRECATION

#include "glut.h"
#include <random>
#include <cmath>

void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

GLfloat angleCube = 0.0f;
GLfloat angleCube2 = 0.0f;

void display() {
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    double randomR, randomG, randomB;
    
    glRotatef(angleCube2, 1.0f, 0.0f, 0.0f);
    glRotatef(angleCube, 0.0f, 1.0f, 0.0f);
    
    for (int y = -150; y < 150; y += 30)
    {
        for (int x = -150 ; x < 150 ; x += 30)
        {
            randomR = (double)rand() / (RAND_MAX);
            randomG = (double)rand() / (RAND_MAX);
            randomB = (double)rand() / (RAND_MAX);
            
            glColor3f(randomR,randomG,randomB);
            
            glBegin(GL_QUADS);
            
                glVertex3f(y + 5.0f, 5.0f + x, -5.0f );
                glVertex3f(y + (-5.0f), 5.0f + x, -5.0f );
                glVertex3f(y + (-5.0f), 5.0f + x,  5.0f );
                glVertex3f(y + 5.0f, 5.0f + x,  5.0f );
            
                glVertex3f(y + 5.0f, -5.0f + x,  5.0f );
                glVertex3f(y + (-5.0f), -5.0f + x,  5.0f );
                glVertex3f(y + (-5.0f), -5.0f + x, -5.0f );
                glVertex3f(y + 5.0f, -5.0f + x, -5.0f );
            
                glVertex3f(y + 5.0f,  5.0f + x, 5.0f );
                glVertex3f(y + (-5.0f),  5.0f + x, 5.0f );
                glVertex3f(y + (-5.0f), -5.0f + x, 5.0f );
                glVertex3f(y + 5.0f, -5.0f + x, 5.0f );
            
                glVertex3f(y + 5.0f, -5.0f + x, -5.0f );
                glVertex3f(y + (-5.0f), -5.0f + x, -5.0f );
                glVertex3f(y + (-5.0f),  5.0f + x, -5.0f );
                glVertex3f(y + 5.0f,  5.0f + x, -5.0f );
            
                glVertex3f(y + (-5.0f),  5.0f + x,  5.0f );
                glVertex3f(y + (-5.0f),  5.0f + x, -5.0f );
                glVertex3f(y + (-5.0f), -5.0f + x, -5.0f );
                glVertex3f(y + (-5.0f), -5.0f + x,  5.0f );
            
                glVertex3f(y + 5.0f,  5.0f + x, -5.0f );
                glVertex3f(y + 5.0f,  5.0f + x,  5.0f );
                glVertex3f(y + 5.0f, -5.0f + x,  5.0f );
                glVertex3f(y + 5.0f, -5.0f + x, -5.0f );
            
            glEnd();
            
            for (int z = -150; z < 150; z += 30){
                randomR = (double)rand() / (RAND_MAX);
                randomG = (double)rand() / (RAND_MAX);
                randomB = (double)rand() / (RAND_MAX);
                
                glColor3f(randomR,randomG,randomB);
                
                glBegin(GL_QUADS);
                
                    glVertex3f(y + 5.0f, 5.0f + x, -5.0f + z);
                    glVertex3f(y + (-5.0f), 5.0f + x, -5.0f + z);
                    glVertex3f(y + (-5.0f), 5.0f + x,  5.0f + z);
                    glVertex3f(y + 5.0f, 5.0f + x,  5.0f + z);
                
                    glVertex3f(y + 5.0f, -5.0f + x,  5.0f + z);
                    glVertex3f(y + (-5.0f), -5.0f + x,  5.0f + z);
                    glVertex3f(y + (-5.0f), -5.0f + x, -5.0f + z);
                    glVertex3f(y + 5.0f, -5.0f + x, -5.0f + z);
                
                    glVertex3f(y + 5.0f,  5.0f + x, 5.0f + z);
                    glVertex3f(y + (-5.0f),  5.0f + x, 5.0f + z);
                    glVertex3f(y + (-5.0f), -5.0f + x, 5.0f + z);
                    glVertex3f(y + 5.0f, -5.0f + x, 5.0f + z);
                
                    glVertex3f(y + 5.0f, -5.0f + x, -5.0f + z);
                    glVertex3f(y + (-5.0f), -5.0f + x, -5.0f + z);
                    glVertex3f(y + (-5.0f),  5.0f + x, -5.0f + z);
                    glVertex3f(y + 5.0f,  5.0f + x, -5.0f + z);
                
                    glVertex3f(y + (-5.0f),  5.0f + x,  5.0f + z);
                    glVertex3f(y + (-5.0f),  5.0f + x, -5.0f + z);
                    glVertex3f(y + (-5.0f), -5.0f + x, -5.0f + z);
                    glVertex3f(y + (-5.0f), -5.0f + x,  5.0f + z);
                
                    glVertex3f(y + 5.0f,  5.0f + x, -5.0f + z);
                    glVertex3f(y + 5.0f,  5.0f + x,  5.0f + z);
                    glVertex3f(y + 5.0f, -5.0f + x,  5.0f + z);
                    glVertex3f(y + 5.0f, -5.0f + x, -5.0f + z);
                
                glEnd();
            }
        }
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

void reshape(GLsizei width, GLsizei height) {
    glOrtho(-300, 300, -315, 285, -300, 300);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(600, 400);
    glutCreateWindow("Stack of 10 X 10 X 10 Cubes");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutSpecialFunc(keyboard);
    glutMainLoop();
    return 0;
}
