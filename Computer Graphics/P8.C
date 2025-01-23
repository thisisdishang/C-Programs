#include <graphics.h>
#include <stdio.h>

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    // Set background color
    setbkcolor(LIGHTGRAY);
    cleardevice();

    // Set text style, font, and color
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);  // Font size 3
    setcolor(WHITE);

    // Display the name "DISHU" at specific coordinates
    outtextxy(200, 200, "DISHU");

    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();
    return 0;
}
