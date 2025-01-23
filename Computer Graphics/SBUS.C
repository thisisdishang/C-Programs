#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    // Set background color
    setbkcolor(WHITE);

    // Set drawing color
    setcolor(YELLOW);

    // Draw the bus body
    rectangle(100, 100, 400, 200);

    // Draw the door
    rectangle(150, 120, 200, 180);

    // Draw the windows
    rectangle(210, 120, 260, 180);
    rectangle(270, 120, 320, 180);
    rectangle(330, 120, 380, 180);

    // Draw the tires
    circle(120, 200, 20);
    circle(380, 200, 20);

    // Draw the text "SCHOOL BUS"
    settextstyle(DEFAULT_FONT, HORIZ_DIR,2);
    outtextxy(170, 220, "SCHOOL BUS");

    // Close the graphics mode
    getch();
    closegraph();

    return 0;
}