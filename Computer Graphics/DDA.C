#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main(){
	float x,y,x1,x2,y1,y2,dx,dy,xi,yi,steps;
	int i,gd=DETECT,gm;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter the value of x and y for first point: ");
	scanf("%f%f",&x1,&y1);

	printf("Enter the value of x and y for second point: ");
	scanf("%f%f",&x2,&y2);

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>dy){
		steps=dx;
	}
	else{
		steps=dy;
	}

	xi=dx/steps;
	yi=dy/steps;

	x=x1;
	y=y1;

	for(i=0;i<=steps;i++){
		putpixel(x,y,WHITE);
	       //delay(100);
		x=x+xi;
		y=y+yi;
	}
	getch();
	closegraph();
}