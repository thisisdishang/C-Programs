#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    setbkcolor(WHITE);
    cleardevice();

    setcolor(YELLOW);
    rectangle(100, 100, 500, 200);
    setcolor(RED);
    rectangle(150, 110, 200, 190);
    rectangle(250, 110, 300, 190);
    rectangle(350, 110, 400, 190);
    rectangle(450, 110, 500, 190);
    setcolor(GREEN);
    rectangle(110, 110, 140, 190);

    setcolor(RED);
    circle(150, 200, 30);
    circle(450, 200, 30);


    setcolor(BLUE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(200, 160, "SCHOOL BUS");

    getch();
    closegraph();

    return 0;

}