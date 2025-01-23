#include<stdio.h>
#include<graphics.h>

void draw_cricket_ground()
{
setcolor(GREEN);
setfillstyle(SOLID_FILL , GREEN);

ellipse(320,240,0,360,200,150);
floodfill(320,240,GREEN);

setcolor(WHITE);
circle(320,240,100);

setcolor(WHITE);
line(270,230,270,250);
line(370,230,370,250);

setcolor(RED);
ellipse(320,240,0,360,200,150);
}



void draw_football_ground()
{
setcolor(WHITE);
rectangle(100,100,540,380);

setfillstyle(SOLID_FILL, GREEN);
floodfill(320,240,WHITE);

setcolor(WHITE);
circle(320,240,50);

line(320,100,320,380);

rectangle(100,180,160,300);
rectangle(480,180,540,300);

rectangle(100,220,130,260);
rectangle(510,220,540,260);

line(100,220,100,260);
line(540,220,540,260);
}

int main(){
 int gd = DETECT , gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\bgi");

 setcolor(LIGHTCYAN);
 cleardevice();

 draw_cricket_ground();
 getch();
 cleardevice();
 draw_football_ground();
 getch();
 closegraph();
 return 0;
}
