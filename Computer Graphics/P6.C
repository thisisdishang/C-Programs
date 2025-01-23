//Midpoint Line Drawing Algorithm
#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main(){
     float x,y,x1,y1,x2,y2,dx,dy,p;
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

     printf("Enter the starting coordinate:");
     scanf("%f%f",&x1,&y1);
     printf("Enter the ending coordinate:");
     scanf("%f%f",&x2,&y2);
     dx=x2-x1;
     dy=y2-y1;
     x=x1;
     y=y1;
     p=dy-(dx/2);
     while(x<x2){
		 putpixel(x,y,GREEN);
		 x++;
		 if(p<0)
			p = p + dy;
		 else
			p = p + dy - dx;
			y = y + 1;
     }
getch();
closegraph();
}
