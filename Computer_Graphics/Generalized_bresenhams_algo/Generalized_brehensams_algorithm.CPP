//Generalized Brehensam's Algorithm
//Name: Aadarsh Jain    Roll No. 17    Batch : A2
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int sign(float x)
{
	if(x<0)
		return -1;
	else //if(x >= 0)
		return 1;
}


int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	int x,y,dx,dy,x1,y1,x2,y2,s1,s2,temp,inch=0,e=0,i=1,m;
	settextstyle(1,0,1);
	outtextxy(5,30,"Generalized Brehensam's Algorithm");
	outtextxy(5,50,"Aadarsh Jain");
	outtextxy(5,70,"Roll No. 17");
	outtextxy(5,90,"Batch : A2");
	cout<<"Enter X1,Y1 : ";
	cin>>x1>>y1;
	cout<<"Enter X2,Y2 : ";
	cin>>x2>>y2;
	dx = abs(x2-x1);
	dy = abs(y2-y1);


	gotoxy(52,1);
	printf("dx = %d, dy = %d",dx,dy);
	s1 = sign(x2-x1);
	s2 = sign(y2-y1);
	x = x1; y = y1;
	gotoxy(52,2);
	printf("s1 = %d, s2 = %d",s1,s2);
	if(dy > dx)
	{

		temp = dx;
		dx = dy;
		dy = temp;
		inch = 1;

		m = 8;//364/(dy*(dy-dx));//+2; 182
	}
	else
	{
		inch = 0;
		m = 8;//390/(dx*(dx-dy));//+2   197
	}
	e = 2*dy - dx;

	gotoxy(52,3);
	printf("inch = %d, e = %d",inch,e);
	gotoxy(47,4);
	printf("       x = %d , y = %d , e = %d",x,y,e);

	line(364,113,364,479);	//vertical line
	line(1,113,364,113);	//horizontal line
	line(1,113,1,479);	//vertical line
	line(1,479,364,479);	//horizontal line

	//AXEX
	line(182,115,182,479);	//vertical axes					//yc = 364/dy
	line(1,297,364,297);    //horizontal line			//xc = 395/dx
												//m=quad_len/dx
	putpixel(182+x*m,297-y*m,3);
	circle(182+x*m,297-y*m,1);
	rectangle(182+x*m,297-y*m-m,182+x*m+m,297-y*m);

	for(i = 1 ; i <= dx ; i++)
	{
		while(e >= 0)
		{
			if(inch == 1)
				x = x+s1;
			else
				y = y+s2;
			e = e-2*dx;
		}
		if(inch == 1)
			y = y+s2;
		else
			x = x+s1;
		e = e+2*dy;

		getch();
		gotoxy(47,4+i);
		if(i<20)
			printf("i = %d, x = %d , y = %d , e = %d",i,x,y,e);

		putpixel(182+x*m,297-y*m,11); 	//198,297
		circle(182+x*m,297-y*m,1);
		rectangle(182+x*m,297-y*m-m,182+x*m+m,297-y*m);
	}
	gotoxy(47,4+i);
	printf("i = %d, x = %d , y = %d , e = %d",i,x,y,e);

	getch();
	getch();
	closegraph();
	return 0;
}