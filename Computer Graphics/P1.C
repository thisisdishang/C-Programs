#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
float x,y,x1,y1,x2,y2,dx,dy,m,x_end,y_end,c;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
printf("\n Enter starting value for x and y (x1,y1) =");
scanf("%f%f",&x1,&y1);
printf("\n Enter ending value for x and y (x2,y2) =");
scanf("%f%f",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
m=dy/dx;
if(dx>0)
{
	x=x1;
	y=y1;
	x_end=x2;
}
else if(dx<0)
{
	x=x2;
	y=y2;
	x_end=x1;
}
c=y-m*x;

while(x<=x_end)
{
	putpixel(x,y,RED);
//	delay(100);
       //	printf("%d %d",&x,&y);
	x=x+1;
	y=m*x+c;
}
getch();
closegraph();
}