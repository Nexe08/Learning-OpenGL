#include <iostream>
#include "GL/glut.h"

void glInit()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

void Display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUAD_STRIP);
        for (float i = -1.0; i <= 1.0; i+= 0.01)
        {
            glColor3f(i, 1.0, 1.0);
            glVertex2f(i, 0.0);
            glVertex2f(i, 0.5);
        }
    glEnd();

    glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv); // init GLUT
    glutCreateWindow("My window"); // name the window
    glutInitWindowPosition(50, 50); // set window position
    glutInitWindowSize(240, 240); // set window size
    glutDisplayFunc(Display); // event handler for display
    glutMainLoop(); // processing loop
    return 0;
}
