
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

// Function to draw a chair
void draw_chair(int x, int y) {
    // Chair seat
    rectangle(x, y, x + 100, y + 20);
    
    // Chair legs
    line(x, y + 20, x, y + 80);           // Left leg
    line(x + 100, y + 20, x + 100, y + 80); // Right leg

    // Chair backrest
    line(x, y, x, y - 60); // Left backrest
    line(x + 20, y, x + 20, y - 60); // Middle backrest
    line(x + 40, y, x + 40, y - 60); // Right backrest
}

int main() {
    int gd = DETECT, gm;
    int x=50 , y=200;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");


   // int x = 50, y = 200;  // Starting position of the chair

    while (!kbhit()) {    // Loop until a key is pressed
        cleardevice();    // Clear the screen

        // Draw the moving chair
        draw_chair(x, y);

        // Update the position of the chair to make it move
        x += 5;

        // Delay to control the speed of movement
        delay(100);

        // Loop the chair movement when it reaches the screen edge
        if (x > getmaxx()) {
            x = 0;
        }
    }

    getch();
    closegraph();
    return 0;
}
