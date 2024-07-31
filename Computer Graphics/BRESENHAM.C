#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main(){
	float x,y, x1,y1,x2,y2,dx,dy,m,p,i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	printf("Enter the vlaue of x and y for first point:");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x and y for second point:");
	scanf("%f%f",&x2,&y2);

	dx=(x2-x1);
	dy=(y2-y1);
	m=dy/dx;

	if(m<1){
		dy = abs(dy);
		p=2*dy-abs(dx);
		x=x1;
		y=y1;
		i=0;
		while(i<=dx){
			putpixel(x,y,GREEN);
			if(p<0){
				x=x+1;
				p=p+(2*dy);
			}
			else{
				x=x+1;
				y=y+1;
				p=p+(2*dy)-(2*dx);
			}
			i++;
		}
	}
	else if(m>1){
		dx=abs(dx);
		dy=abs(dy);
		p=(2*dx)-dy;
		x=x1;
		y=y1;
		i=0;
		while(i<=dy){
			putpixel(x,y,GREEN);
			if(p<0){
				y=y+1;
				p=p+(2*dx);
			}
			else{
				p=p+(2*dx)-(2*dy);
				x=x+1;
			}
		i++;
		}
	}
	else{
		x=x1;
		y=y1;
		while(x<=x2 && y<=y2){
			putpixel(x,y,GREEN);
			x=x+1;
			y=y+1;
		}
	}
	getch();
	closegraph();
}