#include <GL/gl.h>
#include <GL/glu.h>

int main(int argc, char** argv)
{
    // Initialize OpenGL
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Triangle");

    // Set the viewport and projection matrix
    glViewport(0, 0, 800, 600);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 600);

    // Set the clear color to black
    glClearColor(0, 0, 0, 1);

    // Main render loop
    glutDisplayFunc([] {
        // Clear the color buffer
        glClear(GL_COLOR_BUFFER_BIT);

        // Set the fill color to red
        glColor3f(1, 0, 0);

        // Begin rendering triangles
        glBegin(GL_TRIANGLES);

        // Draw the triangle
        glVertex2i(100, 100);
        glVertex2i(200, 100);
        glVertex2i(150, 150);

        // End rendering triangles
        glEnd();

        // Swap the front and back buffers
        glutSwapBuffers();
    });

    // Main loop
    glutMainLoop();

    return 0;
}
