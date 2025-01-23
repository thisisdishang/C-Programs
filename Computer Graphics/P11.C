#include <graphics.h>
#include <stdio.h>

// Function to draw a cat
void draw_cat(int x, int y) {
    // Draw body (oval)
    setcolor(BROWN);
    ellipse(x, y, 0, 360, 60, 100); // Body

    // Draw head (circle)
    setcolor(WHITE);
    circle(x, y - 80, 40); // Head

    // Draw ears (triangles)
    setcolor(BROWN);
    // Left ear
    line(x - 30, y - 100, x - 15, y - 80);
    line(x - 15, y - 80, x - 10, y - 100);
    line(x - 10, y - 100, x - 30, y - 100); 

    // Right ear
    line(x + 30, y - 100, x + 15, y - 80);
    line(x + 15, y - 80, x + 10, y - 100);
    line(x + 10, y - 100, x + 30, y - 100); 

    // Draw eyes (circles)
    setcolor(BLACK);
    circle(x - 15, y - 85, 5);  // Left eye
    circle(x + 15, y - 85, 5);  // Right eye

    // Draw pupils (smaller circles)
    setcolor(WHITE);
    circle(x - 15, y - 85, 2);  // Left pupil
    circle(x + 15, y - 85, 2);  // Right pupil

    // Draw mouth (arc)
    setcolor(BROWN);
    arc(x, y - 70, 210, 330, 15); // Mouth

    // Draw tail (line)
    line(x - 60, y, x - 100, y - 30); // Tail
}

// Function to translate the cat to a new position
void translate_cat(int *x, int *y, int dx, int dy) {
    *x += dx; // Update x position
    *y += dy; // Update y position
}

int main() {
    int gd = DETECT, gm;
    int x=300,y=300;
    int dx = 100;
    int dy =-50;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");



    // Draw the original cat
    draw_cat(x, y);

    // Apply translation transformation (move right and up)

    translate_cat(&x, &y, dx, dy);

    // Clear the screen and draw the translated cat
    delay(2000); // Wait for 2 seconds to see the original cat
    cleardevice(); // Clear the screen
    draw_cat(x, y); // Draw the cat at the new position

    getch();
    closegraph();
    return 0;
}
