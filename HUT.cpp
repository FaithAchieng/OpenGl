#include <GL/glut.h>

void drawHut() {
    
    glBegin(GL_QUADS);
    
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5, -0.5);

    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.5, -0.5);

    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5, 0.5);

    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, 0.5);
    
    glEnd();

    
    glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
    
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5, -0.5);

    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.5, -0.5);

    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.5, 0.5);

    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, 0.5);
    
    glEnd();

    
    glBegin(GL_TRIANGLES);

    
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, 0.5);

    
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.5, 0.5);

    
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.0, 1.0);

    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawHut();
    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("MY HUT");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
