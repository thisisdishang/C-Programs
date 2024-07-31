#include<stdio.h>
#include<graphics.h>

void main(){
	float x,y,x1,x2,y1,y2,dx,dy,m,c,xe;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("\nEnter point 1 (x1,y1) = ");
	scanf("%f%f",&x1,&y1);

	printf("\nEnter point 2 (x2,y2) = ");
	scanf("%f%f",&x2,&y2);

	dx=x2-x1;
	dy=y2-y1;

	m=dy/dx;

	if(dx>0){
		x=x1;
		y=y1;
		xe=x2;
	}
	else if(dx<0){
		x=x2;
		y=y2;
		xe=x1;
	}

	x=y-m*x;

	while(x<=xe){
		putpixel(x,y,GREEN);
		delay(100);
		x=x+1;
		y=m*x+c;
	}
	getch();
	closegraph();
}