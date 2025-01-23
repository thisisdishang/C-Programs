#include <stdio.h>
#include <graphics.h>

void draw_ring(int x, int y, int radius, int color, int thickness) {
    setcolor(color);            
    setlinestyle(SOLID_LINE, 0, thickness); 
    circle(x, y, radius);       
}

int main() {
    
    int gd = DETECT, gm;
    int thickness = 3;          
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    
    setbkcolor(WHITE);
    cleardevice();

    
    draw_ring(150, 200, 60, BLUE, thickness);   
    draw_ring(270, 200, 60, BLACK, thickness);  
    draw_ring(390, 200, 60, RED, thickness);    
    draw_ring(210, 260, 60, YELLOW, thickness); 
    draw_ring(330, 260, 60, GREEN, thickness);  

    getch();

    closegraph();

    return 0;
}
