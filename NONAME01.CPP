#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
void id(int i)
{
	rectangle(150+i,200,250+i,350);
	circle(200+i,240,20);
	outtextxy(180+i,330,"******");
}
void main()
{
	clrscr();
	int gdriver = DETECT, gmode, errorcode;

/* initialize graphics and local variables */
initgraph(&gdriver, &gmode, "");

/* read result of initialization */
errorcode = graphresult();
if (errorcode != grOk)  /* an error occurred */
{
   exit(0); /* terminate with an error code */
}




	cleardevice();
	for(int  i = 0;i<=200;i++)
	{

	cleardevice();
		rectangle(150,200,250,350);
	circle(200,240,20);
	outtextxy(180,330,"******");
	rectangle(350,200,450,350);
	id(i);
	if(i==200)
	{
		for(int j=1;j<150;j++)
		{
			cleardevice();
				rectangle(150,200,250,350);
			circle(200,240,20);
			outtextxy(180,330,"******");
			rectangle(350,200,450,350);
			circle(400,240,20);
			outtextxy(380,330,"******");
			setcolor(GREEN);
			line(351,200+j,449,200+j);
			setcolor(WHITE);
			delay(20);
		}
	}
	delay(20);
	}
	getch();
	closegraph();
}