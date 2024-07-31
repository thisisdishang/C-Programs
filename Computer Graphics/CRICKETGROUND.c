#include <graphics.h>
#include <conio.h>

void drawCricketGround() {
    int midX = getmaxx() / 2;
    int midY = getmaxy() / 2;
    
   
    ellipse(midX, midY, 0, 360, 250, 150);

   
    rectangle(midX - 10, midY - 50, midX + 10, midY + 50);

    
    rectangle(midX - 5, midY - 55, midX + 5, midY - 50);
    rectangle(midX - 5, midY + 50, midX + 5, midY + 55);

    
    ellipse(midX, midY, 0, 360, 75, 75);

    
    line(midX - 20, midY - 60, midX + 20, midY - 60);
    line(midX - 20, midY + 60, midX + 20, midY + 60);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawCricketGround();

    getch();
    closegraph();
    return 0;
}

