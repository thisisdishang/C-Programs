//CIRCLE
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main(){
	float x,y,xc,yc,r,p;
	int gd=DETECT,gm;
	 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("\n Enter the coordinates of the center of the circle:");
	scanf("%f%f",&xc,&yc);
	printf("\n Enter the radius of the circle:");
	scanf("%f",&r);
	p=1-r;
	x=0;
	y=r;
	while(x<=y){
		//    printf("Plotting point for x=%f , y=%f \n",x,y);
		    putpixel(x+xc,y+yc, RED);
		    putpixel(x+xc,-y+yc, RED);
		    putpixel(-x+xc,-y+yc, RED);
		    putpixel(-x+xc,y+yc, RED);
		    putpixel(y+xc,x+yc, RED);
		    putpixel(y+xc,-x+yc, RED);
		    putpixel(-y+xc,-x+yc, RED);
		    putpixel(-y+xc,x+yc, RED);
		    if(p<0){

		      p = p + 2*x +3;
		    }
		    else{

			y=y-1;
			p = p+ 2*x - 2*y +5;
		    }
		    x=x+1;
	}
getch();
closegraph();
}