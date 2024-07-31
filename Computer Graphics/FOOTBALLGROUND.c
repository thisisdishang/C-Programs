#include <graphics.h>
#include <conio.h>

void drawFootballGround() {
    int midX = getmaxx() / 2;
    int midY = getmaxy() / 2;

   
    rectangle(midX - 300, midY - 200, midX + 300, midY + 200);

   
    circle(midX, midY, 50);
    circle(midX, midY, 2);

    
    rectangle(midX - 300, midY - 50, midX - 280, midY + 50);
    rectangle(midX + 280, midY - 50, midX + 300, midY + 50);

    
    rectangle(midX - 300, midY - 100, midX - 250, midY + 100);
    rectangle(midX + 250, midY - 100, midX + 300, midY + 100);

    
    rectangle(midX - 300, midY - 20, midX - 290, midY + 20);
    rectangle(midX + 290, midY - 20, midX + 300, midY + 20);

   
    line(midX, midY - 200, midX, midY + 200);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawFootballGround();

    getch(); 
    closegraph();
    return 0;
}

