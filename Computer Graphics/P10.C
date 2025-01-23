#include <graphics.h>
#include <stdio.h>

// Define region codes for the clipping window boundaries
const int TOP = 8;    // 1000
const int BOTTOM = 4; // 0100
const int RIGHT = 2;  // 0010
const int LEFT = 1;   // 0001

// Define the clipping window boundaries
int xmin, ymin, xmax, ymax;

// Function to compute the region code of a point (x, y)
int computeCode(int x, int y) {
    int code = 0;
    if (x < xmin) // Left of window
        code |= LEFT;
    if (x > xmax) // Right of window
        code |= RIGHT;
    if (y < ymin) // Below window
        code |= BOTTOM;
    if (y > ymax) // Above window
        code |= TOP;
    return code;
}

// Cohen-Sutherland line clipping algorithm
void cohenSutherlandClip(int x1, int y1, int x2, int y2) {
    int code1 = computeCode(x1, y1);  // Compute outcode for point 1
    int code2 = computeCode(x2, y2);  // Compute outcode for point 2
    int accept = 0;  // Flag for whether the line is accepted

    while (1) {
	if ((code1 == 0) && (code2 == 0)) {
	    // Both endpoints are inside the window
	    accept = 1;
	    break;
	} else if (code1 & code2) {
	    // Both endpoints are outside the window (in the same region)
	    break;
	} else {
	    // One endpoint is outside the window, so clip the line
	    int code_out;
	    int x, y;

	    // Choose the endpoint that is outside the window
	    if (code1 != 0)
		code_out = code1;
	    else
		code_out = code2;

	    // Find the intersection point using the region code
	    if (code_out & TOP) {
		// Point is above the window
		x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
		y = ymax;
	    } else if (code_out & BOTTOM) {
		// Point is below the window
		x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
		y = ymin;
	    } else if (code_out & RIGHT) {
		// Point is to the right of the window
		y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
		x = xmax;
	    } else if (code_out & LEFT) {
		// Point is to the left of the window
		y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
		x = xmin;
	    }

	    // Replace the outside point with the intersection point and update the outcode
	    if (code_out == code1) {
		x1 = x;
		y1 = y;
		code1 = computeCode(x1, y1);
	    } else {
		x2 = x;
		y2 = y;
		code2 = computeCode(x2, y2);
	    }
	}
    }

    if (accept) {
	// If the line is accepted, draw the clipped line
	setcolor(GREEN);
	line(x1, y1, x2, y2);
    }
}

int main() {

    int gd = DETECT, gm;
    int x1=50 , y1=150,x2=350,y2=250;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    // Set the clipping window boundaries
    xmin = 100; ymin = 100; xmax = 300; ymax = 300;

    // Draw the clipping window as a rectangle
    rectangle(xmin, ymin, xmax, ymax);

    // Define the line coordinates
   // int x1 = 50, y1 = 150, x2 = 350, y2 = 250;

    // Draw the original line in red
    setcolor(RED);
    line(x1, y1, x2, y2);

    // Perform line clipping
    cohenSutherlandClip(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
