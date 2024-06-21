//olympic symbol
#include<stdio.h>
#include<conio.h>
//#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
//using namespace std;
int thick = 7;
int space = 50;
void drawCircle(int xc, int yc, int x, int y, int col)
{
	putpixel(xc+x, yc+y, col);
	putpixel(xc-x, yc+y, col);
	putpixel(xc+x, yc-y, col);
	putpixel(xc-x, yc-y, col);
	putpixel(xc+y, yc+x, col);
	putpixel(xc-y, yc+x, col);
	putpixel(xc+y, yc-x, col);
	putpixel(xc-y, yc-x, col);
}

// Function for circle-generation
// using Bresenham's algorithm
void circleG(int xc, int yc, int r, int i)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	drawCircle(xc, yc, x, y,i);
	while (y >= x)
	{
		// for each pixel we will
		// draw all eight pixels

		x++;

		// check for decision parameter
		// and correspondingly
		// update d, x, y
		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		drawCircle(xc, yc, x, y,i);
		delay(3);
	}
}


void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");
	int r=60,min,max;
	outtextxy(50,400,"Name    : Aadarsh Jain ");
	outtextxy(50,410,"Batch   : A2 ");
	outtextxy(50,420,"Roll No : 17 ");
	outtextxy(50,430,"Date    : 05-11-22 ");
	outtextxy(150,360," <-----------OLYMPIC SYMBOL ---------->");
	for(int i = 1 ; i < 11 ; i++)
	{
		setcolor(i);
		circleG(10+space+r,10+space+r,r,i);
		circleG(10+space+r,10+space+r,r+thick,i);
	//	floodfill(10+space+r+r+2,10+space+r,getmaxcolor());
	//	setcolor(9);


		setcolor(i+1);
		circleG(40+space+r+2*r,10+space+r,r,i+1);
		circleG(40+space+r+2*r,10+space+r,r+thick,i+1);
	//	floodfill(40+space+r+2*r+r+2,10+space+r,getmaxcolor()/2);


		setcolor(i+2);
		circleG(70+space+r+4*r,10+space+r,r,i+2);
		circleG(70+space+r+4*r,10+space+r,r+thick,i+2);





		setcolor(i+3);
		circleG(25+space+2*r,10+space+2*r,r,i+3);
		circleG(25+space+2*r,10+space+2*r,r+thick,i+3);


		setcolor(i+4);
		circleG(55+space+2*r+2*r,10+space+2*r,r,i+4);
		circleG(55+space+2*r+2*r,10+space+2*r,r+thick,i+4);
		delay(200);
	}
	getch();
	closegraph();
}


/*
// C-program for circle drawing
// using Bresenham’s Algorithm
// in computer-graphics
#include <stdio.h>
#include <dos.h>
#include <graphics.h>

// Function to put pixels
// at subsequence points


// Driver code
int main()
{
	int xc = 50, yc = 50, r = 30;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, ""); // initialize graph
	circleBres(xc, yc, r); // function call
	return 0;
}


*/