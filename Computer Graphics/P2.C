#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main()
{
    float x, y, x1, y1, x2, y2, dx, dy, xi, yi, steps;
    int i, gd = DETECT, gm;

    // Input the coordinates of the two points
    printf("Enter the value of x and y for the first point: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter the value of x and y for the second point: ");
    scanf("%f%f", &x2, &y2);

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Calculate differences
    dx = x2 - x1;
    dy = y2 - y1;

    // Calculate the number of steps
    if (fabs(dx) > fabs(dy))
        steps = fabs(dx);
    else
        steps = fabs(dy);

    // Calculate increment in x and y for each step
    xi = dx / steps;
    yi = dy / steps;

    // Set starting point
    x = x1;
    y = y1;

    // Draw the line using putpixel
    for (i = 0; i <= steps; i++) {
        putpixel((int)x, (int)y, GREEN); // Plot the pixel
        x = x + xi;  // Increment x by xi
        y = y + yi;  // Increment y by yi
    }

    getch();  // Wait for key press
    closegraph();  // Close graphics mode
}
