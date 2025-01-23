#include <graphics.h>
#include <conio.h>

void drawIndiaGate(int x, int y) {
    rectangle(x, y, x + 200, y + 150);
    rectangle(x + 60, y + 40, x + 140, y + 150);
    arc(x + 100, y + 40, 0, 180, 40);
    rectangle(x + 30, y - 20, x + 170, y + 10);
    rectangle(x + 60, y - 40, x + 140, y - 20);
    line(x + 30, y, x + 30, y + 150);
    line(x + 170, y, x + 170, y + 150);
}

int main() {
    int gd = DETECT, gm;
    int x = 200, y = 200;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    drawIndiaGate(x, y);
    getch();
    closegraph();
    return 0;
}
