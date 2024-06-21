#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>


void axes()
{
	line(0,240,639,240);
	line(320,0,320,479);
	line(0,240,10,237);//left arrows
	line(0,240,10,243);//left arrows

	line(639,240,629,237);//Right arrows
	line(639,240,629,243);//Right arrows

	line(320,0,317,10);	//upwards arrows
	line(320,0,323,10); //upwards arrows

	line(320,479,317,469);	//downwards arrows
	line(320,479,323,469); //downwards arrows

	for(int a=0;a<10;a++)
	{
		int sum = a*32;
		line(320+sum,235,320+sum,245);
		line(320-sum,235,320-sum,245);
		//(320,240)
		int ys = a*24;
		line(315,240+ys,325,240+ys);
		line(315,240-ys,325,240-ys);
	}
			settextstyle(11,0,2);
			outtextxy(316,244,"0");
//			settextstyle(1,0,4);
			outtextxy(318+32,245,"1");
			outtextxy(318+64,245,"2");
			outtextxy(318+96,245,"3");
			outtextxy(318+128,245,"4");
			outtextxy(318+160,245,"5");
			outtextxy(318+192,245,"6");
			outtextxy(318+224,245,"7");
			outtextxy(318+256,245,"8");
			outtextxy(318+288,245,"9");


			outtextxy(318-32,245,"-1");
			outtextxy(318-64,245,"-2");
			outtextxy(318-96,245,"-3");
			outtextxy(318-128,245,"-4");
			outtextxy(318-160,245,"-5");
			outtextxy(318-192,245,"-6");
			outtextxy(318-224,245,"-7");
			outtextxy(318-256,245,"-8");
			outtextxy(318-288,245,"-9");



//			outtextxy(305,240,"0");
			outtextxy(305,240-24,"1");
			outtextxy(305,240-48,"2");
			outtextxy(305,240-72,"3");
			outtextxy(305,240-96,"4");
			outtextxy(305,240-120,"5");
			outtextxy(305,240-144,"6");
			outtextxy(305,240-168,"7");
			outtextxy(305,240-192,"8");
			outtextxy(305,240-216,"9");


			outtextxy(295,240+24,"-1");
			outtextxy(295,240+48,"-2");
			outtextxy(295,240+72,"-3");
			outtextxy(295,240+96,"-4");
			outtextxy(295,240+120,"-5");
			outtextxy(295,240+144,"-6");
			outtextxy(295,240+168,"-7");
			outtextxy(295,240+192,"-8");
			outtextxy(295,240+216,"-9");
}

void main()
{
	int n,i,j,Tx,Ty,Sx,Sy,temp;
	int gd = DETECT,gm;
	int x[20],y[20];
	int x1,y1,x2,y2,x3,y3;
	double s,c, angle;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	  setcolor(LIGHTGREEN);
	  outtextxy(450,10,"Name - Aadarsh Jain ");
	  outtextxy(450,20,"Roll no. - 17");
	  outtextxy(450,30,"Batch - A2 ");

//	  printf("Name - Aadarsh Jain  \nRoll no. - 17   \nBatch - A2  \n\n");
//	  textattr(13);
	  printf("1.Translation \n2.Scaling \n3.Rotation \n4.Reflection");
//	  textattr(137);
	  printf("\n\nEnter your choice : ");
	  scanf("%d",&n);

	switch(n){
	case 1:
	{
		printf("\nEnter the no. of edges of polygon : ");
		scanf("%d",&n);
		printf("\n\nEnter the cordinates of polygon \n ");
	for(i=0;i<n;i++)
	{
		printf("\tX%d Y%d : ",i,i);
		scanf("%d %d",&x[i],&y[i]);
	}
	cleardevice();
	setcolor(LIGHTCYAN);
	axes();
	setcolor(LIGHTGREEN);
	outtextxy(5,10,"LIGHTGREEN : original coordinates ");
	setcolor(YELLOW);
	outtextxy(5,30,"YELLOW : changed coordinates ");
	setcolor(LIGHTGREEN);
	x[n]=x[0];
	y[n]=y[0];
	for(i=0;i<n;i++)
	{
		line(320+32*x[i],240-24*y[i],320+32*x[i+1],240-24*y[i+1]);
	}
	gotoxy(1,5);
	printf("Enter the translation units of x and y : ");
	scanf("%d %d",&Tx,&Ty);
	setcolor(YELLOW);
	for(i=0;i<n;i++)
	{
		x[i] += Tx;
		y[i] += Ty;
	}
	x[n]=x[0];
	y[n]=y[0];
	for(i=0;i<n;i++)
	{
		line(320+32*x[i],240-24*y[i],320+32*x[i+1],240-24*y[i+1]);
	}
	getch();
	break;
	}
	case 2:
	{
	printf("\nEnter the no. of edges of polygon : ");
	scanf("%d",&n);
	printf("\n\nEnter the cordinates of polygon \n ");
	for(i=0;i<n;i++)
	{
		printf("\tX%d Y%d : ",i,i);
		scanf("%d %d",&x[i],&y[i]);
	}
	cleardevice();

	setcolor(LIGHTCYAN);
	axes();
	setcolor(LIGHTGREEN);
	outtextxy(5,10,"LIGHTGREEN : original coordinates");
	setcolor(YELLOW);
	outtextxy(5,30,"YELLOW : changed coordinates");
	setcolor(LIGHTGREEN);
	x[n]=x[0];
	y[n]=y[0];
	for(i=0;i<n;i++)
	{
		line(320+32*x[i],240-24*y[i],320+32*x[i+1],240-24*y[i+1]);
//		line(x[i],y[i],x[i+1],y[i+1]);
	}
	gotoxy(1,5);
	printf("Enter the scaling units of x and y : ");
	scanf("%d %d",&Sx,&Sy);
	setcolor(YELLOW);
	for(i=0;i<n;i++)
	{
		x[i] = x[0]+((x[i]-x[0])*Sx);
		y[i] = y[0]+((y[i]-y[0])*Sy);
	}
	x[n]=x[0];
	y[n]=y[0];
	for(i=0;i<n;i++)
	{
		line(320+32*x[i],240-24*y[i],320+32*x[i+1],240-24*y[i+1]);
//		line(x[i],y[i],x[i+1],y[i+1]);
	}
	getch();
	break;
	}
	case 3 :
	{
	printf("\n\nEnter the 1st cordinate of polygon x[0] y[0] :  ");
	scanf("%d %d",&x1,&y1);
	printf("\n\nEnter the 2nd cordinate of polygon x[1] y[1] : ");
	scanf("%d %d",&x2,&y2);
	printf("\n\nEnter the 3rd cordinate of polygon x[2] y[2] : ");
	scanf("%d %d",&x3,&y3);
	cleardevice();
	setcolor(LIGHTCYAN);
	axes();
	setcolor(LIGHTGREEN);
	outtextxy(5,10,"LIGHTGREEN original coordinates");
	setcolor(YELLOW);
	outtextxy(5,30,"YELLOW changed coordinates");
	setcolor(LIGHTGREEN);
	line(320+32*x1,240-24*y1,320+32*x2,240-24*y2);
	line(320+32*x2,240-24*y2,320+32*x3,240-24*y3);
	line(320+32*x3,240-24*y3,320+32*x1,240-24*y1);
	getch();
	gotoxy(1,5);
	printf("Enter rotation angle: ");
	scanf("%lf", &angle);
	c = cos(angle * 3.14/180);
	s = sin(angle * 3.14/180);
//	printf("cos(%lf) = %lf",angle,c);
//	printf("sin(%lf) = %lf",angle,s);
	int ch;
	gotoxy(1,8);
	printf("1.Clockwise Rotation : ");
	printf("\n2.AntiClockwise Rotation : ");
	scanf("%d",&ch);
	setcolor(YELLOW);
	if(ch==1)
	{
		line(320+32*floor(x1*c+y1*s),240-24*floor(-x1*s+y1*c),320+32*floor(x2*c+y2*s),240-24*floor(-x2*s+y2*c));
		line(320+32*floor(x2*c+y2*s),240-24*floor(-x2*s+y2*c),320+32*floor(x3*c+y3*s),240-24*floor(-x3*s+y3*c));
		line(320+32*floor(x3*c+y3*s),240-24*floor(-x3*s+y3*c),320+32*floor(x1*c+y1*s),240-24*floor(-x1*s+y1*c));
	}
	else
	{
		if(ch==2)
		{
			line(320+32*floor(x1*c-y1*s),240-24*floor(x1*s+y1*c),320+32*floor(x2*c-y2*s),240-24*floor(x2*s+y2*c));
			line(320+32*floor(x2*c-y2*s),240-24*floor(x2*s+y2*c),320+32*floor(x3*c-y3*s),240-24*floor(x3*s+y3*c));
			line(320+32*floor(x3*c-y3*s),240-24*floor(x3*s+y3*c),320+32*floor(x1*c-y1*s),240-24*floor(x1*s+y1*c));
		}
		else
		{
			printf("Invalid choice but rotating it clockwise ");
			line(320+32*floor(x1*c+y1*s),240-24*floor(-x1*s+y1*c),320+32*floor(x2*c+y2*s),240-24*floor(-x2*s+y2*c));
			line(320+32*floor(x2*c+y2*s),240-24*floor(-x2*s+y2*c),320+32*floor(x3*c+y3*s),240-24*floor(-x3*s+y3*c));
			line(320+32*floor(x3*c+y3*s),240-24*floor(-x3*s+y3*c),320+32*floor(x1*c+y1*s),240-24*floor(-x1*s+y1*c));
		}
	}
	getch();
	break;
	}
	case 4:
	{


		printf("\n\nEnter the 1st cordinate of polygon x[0] y[0] : ");
		scanf("%d %d",&x1,&y1);
		printf("\n\nEnter the 2nd cordinate of polygon x[1] y[1] : ");
		scanf("%d %d",&x2,&y2);
		printf("\n\nEnter the 3rd cordinate of polygon x[2] y[2] : ");
		scanf("%d %d",&x3,&y3);
		cleardevice();
		setcolor(LIGHTCYAN);
		axes();

		setcolor(LIGHTGREEN);
		outtextxy(5,10,"LIGHTGREEN : original coordinates");
		setcolor(YELLOW);
		outtextxy(5,30,"YELLOW : changed coordinates");
		setcolor(LIGHTGREEN);

		line(320+32*x1,240-24*y1,320+32*x2,240-24*y2);
		line(320+32*x2,240-24*y2,320+32*x3,240-24*y3);
		line(320+32*x3,240-24*y3,320+32*x1,240-24*y1);
		getch();
		setcolor(YELLOW);
		line(320+32*x1,240+24*y1,320+32*x2,240+24*y2);
		line(320+32*x2,240+24*y2,320+32*x3,240+24*y3);
		line(320+32*x3,240+24*y3,320+32*x1,240+24*y1);

		line(320-32*x1,240+24*y1,320-32*x2,240+24*y2);
		line(320-32*x2,240+24*y2,320-32*x3,240+24*y3);
		line(320-32*x3,240+24*y3,320-32*x1,240+24*y1);


		line(320-32*x1,240-24*y1,320-32*x2,240-24*y2);
		line(320-32*x2,240-24*y2,320-32*x3,240-24*y3);
		line(320-32*x3,240-24*y3,320-32*x1,240-24*y1);

		getch();
	break;
	}
	default:printf("Enter correct choice");
		break;
	}
	getch();
}