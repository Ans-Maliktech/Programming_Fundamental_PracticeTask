#include <GL/glut.h>
#include <vector>
// Student I'd ---- bc210208785 
// Student name--- Ayesha Abdullah  
struct Point {
    float x, y;
    float r, g, b;

    Point(float px, float py, float pr, float pg, float pb)
        : x(px), y(py), r(pr), g(pg), b(pb) {}
};

// Global variables
std::vector<Point> points;
bool isDrawing = false;
float currentColor[] = {1.0f, 1.0f, 0.0f};

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// Convert window coordinates to OpenGL coordinates
void windowToGL(int x, int y, float &glX, float &glY) {
    glX = (2.0f * x) / WINDOW_WIDTH - 1.0f;
    glY = 1.0f - (2.0f * y) / WINDOW_HEIGHT;
}

// Render the drawing
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(8.0f);

    glBegin(GL_LINE_STRIP);
    for (const auto& point : points) {
        glColor3f(point.r, point.g, point.b);
        glVertex2f(point.x, point.y);
    }
    glEnd();

    glutSwapBuffers();
}

// Handle mouse button events
void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON) {
        float glX, glY;
        windowToGL(x, y, glX, glY);

        if (state == GLUT_DOWN) {
            isDrawing = true;
            points.clear(); // Start new drawing
            points.emplace_back(glX, glY, currentColor[0], currentColor[1], currentColor[2]);
        } else if (state == GLUT_UP) {
            isDrawing = false;
        }

        glutPostRedisplay();
    }
}

// Handle mouse motion events
void motion(int x, int y) {
    if (isDrawing) {
        float glX, glY;
        windowToGL(x, y, glX, glY);
        points.emplace_back(glX, glY, currentColor[0], currentColor[1], currentColor[2]);
        glutPostRedisplay();
    }
}

// Handle keyboard inputs for color and reset
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case '1': // Red
            currentColor[0] = 1.0f; currentColor[1] = 0.0f; currentColor[2] = 0.0f;
            break;
        case '2': // Green
            currentColor[0] = 0.0f; currentColor[1] = 1.0f; currentColor[2] = 0.0f;
            break;
        case '3': // Blue
            currentColor[0] = 0.0f; currentColor[1] = 0.0f; currentColor[2] = 1.0f;
            break;
        case '4': // Yellow
            currentColor[0] = 1.0f; currentColor[1] = 1.0f; currentColor[2] = 0.0f;
            break;
        case 'r': // Reset
        case 'R':
            points.clear();
            glutPostRedisplay();
            break;
    }
}
void init() {
    glClearColor(0.8f, 0.8f, 0.8f, 1.0f);

    glEnable(GL_LINE_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Freehand Highlighter Drawing Application");

    init();

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
