# include<stdio.h>
# include<graphics.h>
# include<math.h>
void drawPixel(int xc,int yc,int x,int y){
	putpixel(xc+x,yc-y,1);
	putpixel(xc-x,yc-y,1);
	putpixel(xc+x,yc+y,1);
	putpixel(xc-x,yc+y,1);
	putpixel(xc+y,yc-x,1);
	putpixel(xc-y,yc-x,1);
	putpixel(xc+y,yc+x,1);
	putpixel(xc-y,yc+x,1);
}
int main(){
	int gd=DETECT,gm;
	int r,x,y,p,xc=320,yc=240;
		
	printf("Enter the value for xc ");
	scanf("%d",&xc);
	printf("Enter the value for yc ");
	scanf("%d",&yc);
	printf("Enter the radius ");
	scanf("%d",&r);

	initgraph(&gd,&gm,"");
	cleardevice();
	
	x=0;
	y=r;
	drawPixel(xc,yc,x,y);
	
	p=3-(2*r);
	
	for(x=0;x<=y;x++){
		if (p<0){
			p=(p+(4*x)+6);
		}
		else{
			y=y-1;
			p=p+((4*(x-y)+10));
		}
		drawPixel(xc,yc,x,y);
		delay(50);
	}

	getch();
	closegraph();
}

