#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include<dos.h>

void sine(int x1,int y1,int x2,int y2)
{
	float d,yd;
	line(x1,(y2+y1)/2,x2,(y2+y1)/2);	//horizontal line
	line(x1,y1,x1,y2);	//vertical line
	gotoxy(26,8);
	printf("X");
	gotoxy(2,2);
	printf("Y");
	gotoxy(2,8);
	printf("o");
		gotoxy(1,4);
		printf("+1");
		gotoxy(1,13);
		printf("-1");
		for(int j=0;j<12;j++)		//Upwards Arrow
		{
			putpixel(20+j/2,28+j,15);
			putpixel(20-j/2,28+j,15);
		}
		for(int i=0;i<12;i++)		//Right Arrow
		{
			putpixel(200-i,125-i/2,15);
			putpixel(200-i,125+i/2,15);
		}
		for(j=0;j<12;j++)		//Downwards Arrow
		{
			putpixel(20+j/2,220-j,15);
			putpixel(20-j/2,220-j,15);
		}
		for(i = 0 ; i <= 100 ; i++)
		{
				d = i*3.14/180 ;
				yd = 0.8*sin(3.6*d);
		if(i==0)
		{
			gotoxy(4,9);
			printf("0");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i == 25)
		{
			gotoxy(8,9);
			printf("90");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i == 50)
		{
			gotoxy(13,9);
			printf("180");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i==75)
		{
			gotoxy(18,9);
			printf("270");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i==100)
		{
			gotoxy(24,9);
			printf("360");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		else
		{
			putpixel(20+int(d*100),125-int(yd*100),11);
		}
		delay(30);
	}
	gotoxy(10,14);
	printf("Y = Sin(X)");
	outtextxy(15,260,"Properties of Sin(X):-");
	delay(300);
	line(7,270,200,270);
	delay(300);
	outtextxy(10,300,"-> Domain : (-oo , +oo)");
	delay(300);
	outtextxy(10,330,"-> Range : [-1 , +1]");
	delay(300);
	outtextxy(10,360,"-> Periodicity : 360 deg");
	delay(300);
	outtextxy(10,390,"-> Sin(90+X) = Cos(X)");
	delay(300);
	outtextxy(10,420,"-> Sin(X)=0  at X=n*(180)");
	delay(300);
	outtextxy(12,435,"  Where n = Whole  No.");
}

void cos(int x1,int y1,int x2,int y2)
{
	float d,yd;
	line(x1,(y2+y1)/2,x2,(y2+y1)/2);	//horizontal line
	line(x1,y1,x1,y2);	//vertical line
	gotoxy(53,8);
	printf("X");
	gotoxy(29,2);
	printf("Y");
	gotoxy(29,8);
	printf("o");
		gotoxy(28,4);
		printf("+1");
		gotoxy(28,13);
		printf("-1");
		for(int j=0;j<12;j++)	// upwards arrows
		{
			putpixel(234+j/2,28+j,15);
			putpixel(234-j/2,28+j,15);
		}
		for(int i=0;i<12;i++)	//Right arrow
		{
			putpixel(414-i,125-i/2,15);
			putpixel(414-i,125+i/2,15);
		}
		for(j=0;j<12;j++)	// downwards arrows
		{
			putpixel(234+j/2,220-j,15);
			putpixel(234-j/2,220-j,15);
		}
		for(i = 123 ; i <= 225 ; i++)
		{
				d = i*3.14/180 ;
				yd = 0.8*sin(3.6*d);
		if(i==123)
		{
			gotoxy(31,9);
			printf("0");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i == 150)
		{
			gotoxy(35,9);
			printf("90");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i == 175)
		{
			gotoxy(40,9);
			printf("180");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i==200)
		{
			gotoxy(46,9);
			printf("270");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		if(i==225)
		{
			gotoxy(51,9);
			printf("360");
			circle(20+int(d*100),125-int(yd*100),2);
		}
		else
		{
			putpixel(20+int(d*100),125-int(yd*100),11);
		}
		delay(30);
	}
	gotoxy(38,14);
	printf("Y = Cos(X)");
	outtextxy(220,260,"Properties of Cos(X):-");
	delay(300);
	line(220,270,413,270);
	delay(300);
	outtextxy(220,300,"->Domain : (-oo , +oo)");
	delay(300);
	outtextxy(220,330,"-> Range : [-1 , +1]");
	delay(300);
	outtextxy(220,360,"-> Periodicity : 360 deg");
	delay(300);
	outtextxy(220,390,"-> Cos(90+X) = -Sin(X)");
	delay(300);
	outtextxy(220,420,"->Cos(X)=0  X=(2n+1)*(90)");
	delay(300);
	outtextxy(220,435,"  Where n = Whole  No.");
	getch();
}
void logx(int x1,int y1,int x2,int y2)
{
	double xl,yl,i;
	int x;
	line(x1,(y2+y1)/2,x2,(y2+y1)/2);	//horizontal line
	line(x1,y1,x1,y2);	//vertical line
		for(int j=0;j<12;j++)		//upwards arrow
		{
			putpixel(448+j/2,28+j,15);
			putpixel(448-j/2,28+j,15);
		}
		for(i=0;i<12;i++)		//Right arrow
		{
			putpixel(628-i,125-i/2,15);
			putpixel(628-i,125+i/2,15);
		}
		for(j=0;j<12;j++)		// downwards arrows
		{
			putpixel(448+j/2,220-j,15);
			putpixel(448-j/2,220-j,15);
		}
		gotoxy(80,8);
		printf("X");
		gotoxy(58,2);
		printf("Y");
		gotoxy(56,8);
		printf("o");
	for(x=1;x<10;x+=2)
	{
		gotoxy(58+x,9);
		printf("%d",x);
	}
	for(x=1;x<4;x++)
	{
		gotoxy(56,8-x);
		printf("%d",x);
	}
	for(x=0;x<25;x+=5)
	{
		putpixel(442,65-x,15);
		putpixel(540+x,138,15);
	}
	for(i = 1 ; i < 150 ; i++)
	{
		yl = log(i/10);
		putpixel(455+i,125-yl*20,11);
		delay(30);
	}
	for(yl = 1 ; yl< 30 ; yl++)
	{
		xl = pow(2.7172,yl/10);
		putpixel(455+xl ,(85-yl)*2 ,11);
	}
	getch();
	gotoxy(66,14);
	printf("Y = log(X)");
	outtextxy(440,260,"Properties of Log(X):-");
	delay(300);
	line(440,270,633,270);
	delay(300);
	outtextxy(440,300,"->Domain : (0 , +oo)");
	delay(300);
	outtextxy(440,330,"-> Range : (-oo , +oo) ");
	delay(300);
	outtextxy(440,360,"-> Periodicity : No");
	delay(300);
	outtextxy(440,390,"-> X = e^Y");
	delay(300);
	outtextxy(440,420,"-> log(x) = 0 at x = 1");
	delay(300);
}

void makeUpArrow(int x, int y)
{
	line(x, y, x-4, y+4);
	line(x, y, x+4, y+4);
}
void makeDownArrow(int x, int y)
{
	line(x, y, x-4, y-4);
	line(x, y, x+4, y-4);
}
void makeLeftArrow(int x, int y)
{
	line(x, y, x+4, y-4);
	line(x, y, x+4, y+4);
}
void makeRightArrow(int x, int y)
{
	line(x, y, x-4, y-4);
	line(x, y, x-4, y+4);
}
void tanx()
{
	gotoxy(7, 2);
	delay(200);
	printf("Tangent Graph");
	delay(200);
	line(45, 31, 155, 31);
	delay(200);
	gotoxy(3, 4); printf("Properties of tan(x):-");
	delay(200);
	gotoxy(3, 6); printf("-> Domain : (-oo , +oo)");
	delay(200);
	gotoxy(5, 7); printf("except where cos(x)= 0");
	delay(200);
	gotoxy(3, 8); printf("-> Range : (-oo, +oo)");
	delay(200);
	gotoxy(3, 10); printf("-> Periodicity: 180 deg");
	delay(200);
	gotoxy(3, 12); printf("-> tan(90+x)= -cot(x)");
	delay(200);
	gotoxy(3, 14); printf("-> tan(x)= 0 at x= n*180");
	delay(200);
	gotoxy(6, 15); printf("Where n= Whole No.");
	delay(200);
	line(105, 275, 105, 450);
	line(30, 362, 195, 362);
	delay(100);
	outtextxy(108, 366, "(0,0)");
	delay(100);
	outtextxy(101, 265, "y");
	delay(100);
	outtextxy(198, 358, "x");
	delay(100);
	makeUpArrow(105, 275);
	makeDownArrow(105, 450);
	makeLeftArrow(30, 362);
	makeRightArrow(195, 362);
	ellipse(103, 302, 280, 360, 20, 60);
	ellipse(107, 422, 100, 180, 20, 60);
	ellipse(59, 302, 280, 360, 20, 60);
	ellipse(64, 422, 100, 180, 20, 60);
	ellipse(147, 302, 280, 360, 20, 60);
	ellipse(150, 422, 100, 180, 20, 60);
	ellipse(193, 422, 100, 180, 20, 60);
	setlinestyle(1, 0, 1);
	line(126, 300, 126, 422);
	line(83, 300, 83, 422);
	line(40, 300, 40, 422);
	line(170, 300, 170, 422);
	delay(100);
	outtextxy(21, 292, "-180");
	delay(100);
	outtextxy(66, 292, "-90");
	delay(100);
	outtextxy(102, 292, "0");
	delay(100);
	outtextxy(118, 292, "90");
	delay(100);
	outtextxy(160, 292, "180");
	delay(100);
	outtextxy(75, 455, "y= tan(x)");
	delay(200);
	setlinestyle(0, 0, 1);
}
void exponential()
{
	delay(200);
	gotoxy(59, 2);
	printf("Exponential Graph");
	delay(200);
	line(460, 31, 604, 31);
	delay(200);
	gotoxy(56, 4); printf("Properties of e^x:-");
	delay(200);
	gotoxy(56, 6); printf("-> Domain : (-oo , +oo)");
	delay(200);
	gotoxy(56, 8); printf("-> Range : [0, +oo)");
	delay(200);
	gotoxy(56, 10); printf("-> Periodicity: No");
	delay(200);
	gotoxy(56, 12); printf("-> x= log(y)");
	delay(200);
	gotoxy(56, 14); printf("-> e^x= 1 at x= 0");
	delay(200);
	line(531, 275, 531, 445);
	line(456, 420, 606, 420);
	delay(100);
	outtextxy(535, 424, "(0,0)");
	delay(100);
	outtextxy(529, 265, "y");
	delay(100);
	outtextxy(609, 416, "x");
	line(527, 408, 535, 408);
	delay(100);
	outtextxy(538, 407, "1");
	delay(100);
	outtextxy(510, 455, "y= e^x");
	delay(100);
	makeUpArrow(531, 275);
	makeDownArrow(531, 445);
	makeLeftArrow(456, 420);
	makeRightArrow(606, 420);
	ellipse(455, 395, 280, 327, 90, 25);
	ellipse(526, 319, 280, 340, 35, 90);
	line(559, 350, 566, 280);
	delay(200);
	setlinestyle(0, 0, 1);
}
void cotx()
{
	delay(200);
	gotoxy(33, 2);
	printf("Cotangent Graph");
	delay(200);
	line(252, 31, 380, 31);
	delay(200);
	gotoxy(30, 4); printf("Properties of cot(x):-");
	delay(200);
	gotoxy(30, 6); printf("-> Domain : (-oo , +oo)");
	delay(200);
	gotoxy(31, 7); printf("except where sin(x)= 0");
	delay(200);
	gotoxy(30, 8); printf("-> Range : (-oo, +oo)");
	delay(200);
	gotoxy(30, 10); printf("-> Periodicity: 180 deg");
	delay(200);
	gotoxy(30, 12); printf("-> cot(90+x)= -tan(x)");
	delay(200);
	gotoxy(30, 14); printf("-> cot(x)= 0 at x= n*90");
	delay(200);
	gotoxy(33, 15); printf("Where n= Whole No.");
	delay(200);
	line(315, 275, 315, 450);
	line(233, 362, 400, 362);
	delay(50);
	outtextxy(319, 366, "(0,0)");
	delay(50);
	outtextxy(312, 265, "y");
	delay(50);
	outtextxy(403, 358, "x");
	delay(50);
	makeUpArrow(315, 275);
	makeDownArrow(315, 450);
	makeLeftArrow(233, 362);
	makeRightArrow(400, 362);
	ellipse(342, 292, 191, 270, 25, 70);
	ellipse(341, 433, 11, 90, 25, 70);
	ellipse(290, 292, 191, 270, 25, 70);
	ellipse(288, 432, 11, 90, 25, 70);
	setlinestyle(1, 0, 1);
	line(368, 304, 368, 420);
	line(263, 304, 263, 420);
	ellipse(395, 292, 191, 270, 25, 70);
	ellipse(236, 433, 11, 90, 25, 70);
	delay(100);
	outtextxy(240, 295, "-180");
	delay(100);
	outtextxy(278, 295, "-90");
	delay(100);
	outtextxy(312, 295, "0");
	delay(100);
	outtextxy(335, 295, "90");
	delay(100);
	outtextxy(360, 295, "180");
	delay(100);
	outtextxy(288, 455, "y= cot(x)");
	delay(200);
	setlinestyle(0, 0, 1);
}

void main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"c:\\TURBOC3\\bgi");
	setbkcolor(5);
		for(int i = 1;i<=15;i++)
		{
			cleardevice();
			settextstyle(1,0,4);
			outtextxy(0,i,"AIM : Analysis of Trigonometric functions  ");	//(midx,midy,"string")
			delay(10);
		}
		getch();
		for(i = 1;i<=50;i++)
		{
			cleardevice();
			settextstyle(1,0,4);
			outtextxy(0,15,"AIM : Analysis of Trigonometric functions  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(5*i,55,"Team Members :-  ");	//(midx,midy,"string")
			delay(10);
		}
		for(i = 1;i<=20;i++)
		{
			cleardevice();
			settextstyle(1,0,4);
			outtextxy(0,15,"AIM : Analysis of Trigonometric functions  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(250,55,"Team Members :-  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(5*i,85," : Aadarsh Jain (17) \t\t Dewanshu Satpude(41) ");	//(midx,midy,"string")
			delay(10);
		}
		for(i = 1;i<=10;i++)
		{
			cleardevice();
			settextstyle(1,0,4);
			outtextxy(0,15,"AIM : Analysis of Trigonometric functions  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(250,55,"Team Members :-  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(100,85," : Aadarsh Jain(17) \t\t Dewanshu Satpude(41) ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(5*i,120,"Sin(X) , Cos(X) , log(X)  Tan(X) , Cot(X) , exp(X)");	//(midx,midy,"string")
			delay(10);
		}
		for(i = 1;i<=10;i++)
		{
			cleardevice();
			settextstyle(1,0,4);
			outtextxy(0,15,"AIM : Analysis of Trigonometric functions  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(250,55,"Team Members :-  ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(100,85," : Aadarsh Jain(17) \t\t Dewanshu Satpude(41) ");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(50,120,"Sin(X) , Cos(X) , log(X)  Tan(X) , Cot(X) , exp(X)");	//(midx,midy,"string")
			settextstyle(3,0,3);
			outtextxy(5*i,165,"Date : 19-08-2022  ");	//(midx,midy,"string")
			delay(10);
		}
			settextstyle(1,0,7);
			outtextxy(10,280,"Computer Graphics");	//(midx,midy,"string")
	getch();
	initgraph(&gdriver,&gmode,"c:\\TURBOC3\\bgi");
	int x1,x2,y1,y2,x;
	double yd,d,yl,xl;
		sine(20,30,200,220);
		getch();
		line(213,0,213,479);
		cos(234,30,414,220);
		line(429,0,429,479);
		logx(448,30,628,220);
	getch();
	initgraph(&gdriver,&gmode,"c:\\TURBOC3\\bgi");
	line(0, 0, 639, 0);//topmost border ln
	line(0, 0, 0, 479);//leftmost border line
	line(639, 0, 639, 479);//rightmost border line
	line(0, 479, 639, 479);//bottommost border line
	line(213, 0, 213, 479);
	line(426, 0, 426, 479);
	tanx();
	cotx();
	exponential();
	getch();
	closegraph();
}