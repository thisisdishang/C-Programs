#include <stdio.h>
#include <graphics.h>
#include <math.h>

void main() {
    float x, y, x1, y1, x2, y2, dx, dy, m, p, i;
    int gd = DETECT, gm;
    printf("Enter the value of x and y for the first point: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter the value of x and y for the second point: ");
    scanf("%f%f", &x2, &y2);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    dx = x2 - x1;
    dy = y2 - y1;
    m = fabs(dy / dx); // Using fabs to handle both positive and negative slopes

    if (fabs(dx) >= fabs(dy)) { // For slopes less than 1 or greater than -1
	p = 2 * fabs(dy) - fabs(dx);
	x = x1;
	y = y1;
	for (i = 0; i <= fabs(dx); i++) {
	    putpixel(round(x), round(y), GREEN);
	    if (p < 0) {
		p = p + 2 * fabs(dy);
	    } else {
		p = p + 2 * fabs(dy) - 2 * fabs(dx);
		if (dy > 0)
		    y = y + 1;
		else
		    y = y - 1;
	    }
	    if (dx > 0)
		x = x + 1;
	    else
		x = x - 1;
	}
    } else { // For slopes greater than 1 or less than -1
	p = 2 * fabs(dx) - fabs(dy);
	x = x1;
	y = y1;
	for (i = 0; i <= fabs(dy); i++) {
	    putpixel(round(x), round(y), GREEN);
	    if (p < 0) {
		p = p + 2 * fabs(dx);
	    } else {
		p = p + 2 * fabs(dx) - 2 * fabs(dy);
		if (dx > 0)
		    x = x + 1;
		else
		    x = x - 1;
	    }
	    if (dy > 0)
		y = y + 1;
	    else
		y = y - 1;
	}
    }
    getch();
    closegraph();
}
