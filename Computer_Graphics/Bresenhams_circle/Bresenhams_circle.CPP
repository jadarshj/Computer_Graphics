#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>

//Bresenhams Circle Drawing Algorithm for First Quadrant
/*
class Bresenhams
{
	private:
		int xi,yi,di,del,deld,r,m,xm,ym;
	public:
		Bresenhams(int x=0,int y=0,int r=5,int m=20)
		{
			xi = 0;
			xm = x;
			ym = y;
			this->m = m;
			yi = r;
			di = 2*(1-r);
		}
		void mH()
		{
			xi = xi + 1;
//            yi = yi;
			di = di+2*xi+1;
		}
		void mD()
		{
			xi = xi+1;
			yi = yi+1;
			di = di+2*xi-2*yi+2;
		}
		void mV()//(xi,yi,di);
		{
			yi = yi-1;
			di = di-2*yi+1;
		}
		void first_Quad();
};
void Bresenhams::first_Quad()
{
	while(yi >= xi)	//while(yi>=0)
	{
		if(kbhit)
		{
			break;
//			exit(0);
		}
		putpixel(xi,yi,11);
		delay(20);
		if(di<0)
		{
			del = 2*di+2*yi-1;
			if(del<=0)
				mH();
			else
				mD();
		}
		else
		{
			if(di>0)
			{
				deld = 2*di-2*xi-1;
				if(deld < 0)
					mD();
				else
					mV();
			}
			else
			{
				mD();
			}
		}
	}
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	int i;
	class Bresenhams bs;
	bs.first_Quad();
	getch();

}
*/
void mH(int &x,int &d)
{
	x = x + 1;
	d = d+2*x+1;
}
void mD(int &x,int &y,int &d)
{
	x = x + 1;
	y = y - 1;
	d = d+2*x-2*y+2;
}
void mV(int &y,int &d)
{
	y = y - 1;
	d = d-2*y+1;
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	int xp,yp,xi,yi,di,del=0,deld=0,r,m=10,sw;//,m,xm,ym,xb,yb;
//	printf("Enter x , y &  r  : ");
	setcolor(11);
	outtextxy(383,1,"Bresenhem's Circle Drawing Algo.");
	outtextxy(400,15,"Aadarsh Jain");
	outtextxy(440,30,"Roll No.17 Batch : A2");

	printf("Enter the radius in range : [3,19] : ");
	scanf("%d",&r);
//	cprintf("Enter x , y &  r  : ");
//	scanf("%d %d %d",&xp,&yp,&r);
	xp = 380;yp = 240;
	xi = 0;
	yi = r;
	di = 2*(1-r);	//3 - 2r
	printf(" di  del del' xi yi");
	printf("\n%3d        %4d%3d",di,xi,yi);

//			textattr(138);		//112

/*
	textattr(11);		//112
	if(del == 0 && deld == 0)
		cprintf("%3d      %3d%3d",di,del,deld,xi,yi);
	else{
		if(deld == 0)
			cprintf("%3d%3d%3d%3d%3d",di,del,deld,xi,yi);
		if(del == 0)
			cprintf("%3d   %3d%3d%3d",di,del,deld,xi,yi);
	}
*/
	line(380,10,380,470);	//vertical Line
	line(130,240,639,240);	//horizontal Line
//	xb = 0;yb = r;
	while(yi >= 0)
	{
		if(sw == 0)
		{
//				textattr(112);		//112
				printf("\n%3d%4d    %4d%3d",di,del,xi,yi);
		}
		else if(sw == 1)
		{
//				textattr(11);		//112
				printf("\n%3d    %4d%4d%3d",di,deld,xi,yi);
		}
		getch();
		setcolor(14);
//		printf("\n%d %d %d %d %d",di,del,deld,xi,yi);
		putpixel(xp+m*xi,yp-m*yi,10);                //Ist Quad
//		circle(xp+m*xi,yp-m*yi,3);
		rectangle(xp+m*xi,yp-m*(yi+1),xp+m*(xi+1),yp-m*yi);

		putpixel(xp+m*xi,yp+m*yi,10);    	//IV Quad
		rectangle(xp+m*xi,yp+m*(yi+1),xp+m*(xi+1),yp+m*yi);

		putpixel(xp-m*xi,yp+m*yi,10);
		rectangle(xp-m*xi,yp+m*(yi+1),xp-m*(xi+1),yp+m*yi);


		putpixel(xp-m*xi,yp-m*yi,10);
		rectangle(xp-m*xi,yp-m*(yi+1),xp-m*(xi+1),yp-m*yi);

/*
//		printf("\n%d %d %d %d %d",di,del,deld,xi,yi);
		putpixel(xp+m*xi,yp-m*yi,10);                //Ist Quad
//		circle(xp+m*xi,yp-m*yi,3);
		rectangle(xp+m*xi,yp-m*(yi+1),xp+m*(xi+1),yp-m*yi);

		putpixel(xp+m*xi,yp+m*yi,10);    	//IV Quad
		rectangle(xp+m*xi,yp-m*(yi+1),xp+m*(xi+1),yp-m*yi);

		putpixel(xp-m*xi,yp+m*yi,10);
		rectangle(xp-m*xi,yp+m*(yi+1),xp+m*(xi+1),yp-m*yi);


		putpixel(xp-m*xi,yp-m*yi,10);
		rectangle(xp-m*xi,yp-m*(yi+1),xp+m*(xi+1),yp-m*yi);
*/
		if(di<0)		//case I or II
		{
			del = 2*di+2*yi-1;
			if(del<=0){
				mH(xi,di);
			}
			else{
				mD(xi,yi,di);
			}
			sw = 0;
		}
		else
		{
			if(di>0)	//case III or IV
			{
				deld = 2*di-2*xi+1;
				if(deld<0){
					mD(xi,yi,di);
				}
				else{
					mV(yi,di);
				}
				sw = 1;
			}
			else
				mD(xi,di,yi);
		}
//		line(380+xb*m,240-yb*m,380+xi*m,240-yi*m);
//		xb = xi;yb = yi;
	/*
		if(del == 0 && deld == 0)
			cprintf("%3d      %3d%3d",di,del,deld,xi,yi);
		else{
			if(deld == 0)
				cprintf("%3d%3d   %3d%3d",di,del,deld,xi,yi);
			if(del == 0)
				cprintf("%3d   %3d%3d%3d",di,del,deld,xi,yi);
	*/
	}
		getch();
		getch();
}