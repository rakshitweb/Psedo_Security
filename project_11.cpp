///////////////////FUNCTION FILE FOR PROJECT/////////////////////////////
/////////////////////////////////////////////////////////////////////////
// TO USE - "C:\\TURBOC3\\PROJECT\\function.cpp"
#include"HEADER.cpp"

void lock()
{
		clrscr();
	cleardevice();
	
	arc(getmaxx()/2,getmaxy()/2-60,0,180,90);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,60);
	line(getmaxx()/2-90,getmaxy()/2-60,getmaxx()/2-90,getmaxy()/2+20);
	line(getmaxx()/2-60,getmaxy()/2-60,getmaxx()/2-60,getmaxy()/2+20);
	line(getmaxx()/2+90,getmaxy()/2-60,getmaxx()/2+90,getmaxy()/2+20);
	line(getmaxx()/2+60,getmaxy()/2-60,getmaxx()/2+60,getmaxy()/2+20);
	rectangle(getmaxx()/2-100,getmaxy()/2+20,getmaxx()/2+100,getmaxy()/2+160);
	int x ;
	setcolor(RED);
		for(x=90;x>=60;x--)
			arc(getmaxx()/2,getmaxy()/2-60,0,180,x);
		for(x=90;x>=60;x--)
		   {
			line(getmaxx()/2+x,getmaxy()/2-60,getmaxx()/2+x,getmaxy()/2+20);
			line(getmaxx()/2-x,getmaxy()/2-60,getmaxx()/2-x,getmaxy()/2+20);
		   }
		for(x=20;x<=160;x++)
			line(getmaxx()/2-100,getmaxy()/2+x,getmaxx()/2+100,getmaxy()/2+x);
		setcolor(BLACK);
		for(x=0;x<=10;x++)
		circle(getmaxx()/2,getmaxy()/2+120,x);
		for(x=125;x<=150;x++)
			line(getmaxx()/2-3,getmaxy()/2+x,getmaxx()/2+3,getmaxy()/2+x);
	delay(1000);
	cleardevice();
	delay(500);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,90);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,60);
	line(getmaxx()/2-90,getmaxy()/2-60,getmaxx()/2-90,getmaxy()/2+20);
	line(getmaxx()/2-60,getmaxy()/2-60,getmaxx()/2-60,getmaxy()/2+20);
	line(getmaxx()/2+90,getmaxy()/2-60,getmaxx()/2+90,getmaxy()/2+20);
	line(getmaxx()/2+60,getmaxy()/2-60,getmaxx()/2+60,getmaxy()/2+20);
	rectangle(getmaxx()/2-100,getmaxy()/2+20,getmaxx()/2+100,getmaxy()/2+160);

	setcolor(RED);
		for(x=90;x>=60;x--)
			arc(getmaxx()/2,getmaxy()/2-60,0,180,x);
		for(x=90;x>=60;x--)
		   {
			line(getmaxx()/2+x,getmaxy()/2-60,getmaxx()/2+x,getmaxy()/2+20);
			line(getmaxx()/2-x,getmaxy()/2-60,getmaxx()/2-x,getmaxy()/2+20);
		   }
		for(x=20;x<=160;x++)
			line(getmaxx()/2-100,getmaxy()/2+x,getmaxx()/2+100,getmaxy()/2+x);
		setcolor(BLACK);
		for(x=0;x<=10;x++)
		circle(getmaxx()/2,getmaxy()/2+120,x);
		for(x=125;x<=150;x++)
			line(getmaxx()/2-3,getmaxy()/2+x,getmaxx()/2+3,getmaxy()/2+x);
	delay(1000);
	cleardevice();
	delay(500);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,90);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,60);
	line(getmaxx()/2-90,getmaxy()/2-60,getmaxx()/2-90,getmaxy()/2+20);
	line(getmaxx()/2-60,getmaxy()/2-60,getmaxx()/2-60,getmaxy()/2+20);
	line(getmaxx()/2+90,getmaxy()/2-60,getmaxx()/2+90,getmaxy()/2+20);
	line(getmaxx()/2+60,getmaxy()/2-60,getmaxx()/2+60,getmaxy()/2+20);
	rectangle(getmaxx()/2-100,getmaxy()/2+20,getmaxx()/2+100,getmaxy()/2+160);

	setcolor(RED);
		for(x=90;x>=60;x--)
			arc(getmaxx()/2,getmaxy()/2-60,0,180,x);
		for(x=90;x>=60;x--)
		   {
			line(getmaxx()/2+x,getmaxy()/2-60,getmaxx()/2+x,getmaxy()/2+20);
			line(getmaxx()/2-x,getmaxy()/2-60,getmaxx()/2-x,getmaxy()/2+20);
		   }
		for(x=20;x<=160;x++)
			line(getmaxx()/2-100,getmaxy()/2+x,getmaxx()/2+100,getmaxy()/2+x);
		setcolor(BLACK);
		for(x=0;x<=10;x++)
		circle(getmaxx()/2,getmaxy()/2+120,x);
		for(x=125;x<=150;x++)
			line(getmaxx()/2-3,getmaxy()/2+x,getmaxx()/2+3,getmaxy()/2+x);
	delay(1000);
	cleardevice();
	delay(500);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,90);
	arc(getmaxx()/2,getmaxy()/2-60,0,180,60);
	line(getmaxx()/2-90,getmaxy()/2-60,getmaxx()/2-90,getmaxy()/2+20);
	line(getmaxx()/2-60,getmaxy()/2-60,getmaxx()/2-60,getmaxy()/2+20);
	line(getmaxx()/2+90,getmaxy()/2-60,getmaxx()/2+90,getmaxy()/2+20);
	line(getmaxx()/2+60,getmaxy()/2-60,getmaxx()/2+60,getmaxy()/2+20);
	rectangle(getmaxx()/2-100,getmaxy()/2+20,getmaxx()/2+100,getmaxy()/2+160);

	setcolor(RED);
		for(x=90;x>=60;x--)
			arc(getmaxx()/2,getmaxy()/2-60,0,180,x);
		for(x=90;x>=60;x--)
		   {
			line(getmaxx()/2+x,getmaxy()/2-60,getmaxx()/2+x,getmaxy()/2+20);
			line(getmaxx()/2-x,getmaxy()/2-60,getmaxx()/2-x,getmaxy()/2+20);
		   }
		for(x=20;x<=160;x++)
			line(getmaxx()/2-100,getmaxy()/2+x,getmaxx()/2+100,getmaxy()/2+x);
		setcolor(BLACK);
		for(x=0;x<=10;x++)
		circle(getmaxx()/2,getmaxy()/2+120,x);
		for(x=125;x<=150;x++)
			line(getmaxx()/2-3,getmaxy()/2+x,getmaxx()/2+3,getmaxy()/2+x);
		nosound();
}

void pass()
{
		clrscr();
	cleardevice();
	setfillstyle(HATCH_FILL,WHITE);
	bar3d(0, 0,getmaxx(),getmaxy(), 0, 0);
	delay(500);
	setfillstyle(INTERLEAVE_FILL,WHITE);
	bar3d(0,0,getmaxx(),getmaxy(),0,0);
	delay(500);
	setfillstyle(WIDE_DOT_FILL,WHITE);
	bar3d(0,0,getmaxx(),getmaxy(),0,0);
	delay(500);
	cleardevice();
	char email[] = {'r','a','k','m','a','k','3','4','5','6','@','p','r','o','j','e','c','t','\0'} ;
	char pass[] = {'a','b','h','i','2','0','0','1','\0'};
	char emaili[30] , passi[40] ;
	outtextxy((getmaxx()/2)-140,(getmaxy()/2)-100,"VERIFICATION REQUIRED");
	outtextxy((getmaxx()/2)-195,(getmaxy()/2)-25,"EMAIL - ID");
	outtextxy((getmaxx()/2)-195,getmaxy()/2 + 5,"PASSWORD");
	gotoxy(30,14);
	cin>>emaili;
	if(strcmp(emaili,email)==0)
		{
			gotoxy(30,16);
			for(int p=0;pass[p]!='\0';p++)
			{
				passi[p]=getch();
				cout<<"*";
				if(passi[p]!=pass[p])
				{
					outtextxy(getmaxx()/2 - 130 , getmaxy()/2 + 150 , "VERIFICATION FAILED");
					delay(2500);
					exit(0);
				}
			}
		}
	else
		{
				outtextxy(getmaxx()/2 - 130 , getmaxy()/2 + 150 , "VERIFICATION FAILED");
					delay(2500);
					exit(0);
		}
	getch();
	cleardevice();
		settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
		outtextxy((getmaxx()/2)-100,(getmaxy()/2)+100,"LOADING...");
	delay(4000);
}

char abc ;
void choice()
{
	cout<<"\n\t\t\t ENTER THE CHOICE TO PROCEED \n\n " ;
	cout<<"\n\n\t PRESS 1 FOR CHEMISTRY <ACADAMICS> \n\n\n " ;
	cout<<"\n\n\t PRESS 2 TO PLAY GAMES \n\n\n " ;
	cout<<"\n\n\t PRESS 3 TO USE CALCULATOR \n\n\n " ;
	cout<<"\n\n \t PRESS 4 FOR EXIT \n\n\n " ;
	cout<<"\n \t " ;
}
void end()
{
		clrscr();
		cleardevice();
		int hi , ji ;
		int a=getmaxx()/2;
		int b=getmaxy()/2;
		for(hi=0;hi<=200;hi++)
		{
			setcolor(BLUE);
			circle(a,b,hi);
			circle(a,b,(hi-80));
			circle(a,b,(hi-160));
			circle(0,0,(hi-50));
			circle(a*2,0,(hi-50));
			circle(0,b*2,hi-50);
			circle(a*2,b*2,hi-50);
			circle(0,0,(hi-150));
			circle(a*2,0,(hi-150));
			circle(0,b*2,hi-150);
			circle(a*2,b*2,hi-150);
			setcolor(LIGHTBLUE);
			circle(a,b,(hi-40));
			circle(a,b,(hi-120));
			circle(0,0,hi-100);
			circle(a*2,0,(hi-100));
			circle(0,b*2,hi-100);
			circle(a*2,b*2,hi-100);
			delay(30);
		}
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
		setcolor(WHITE);
		outtextxy(a-150,b-130,"THANK");
		outtextxy(a-90,b+5,"YOU");
		line(a-151,b-(58-25),a+151,b-(58-25));
		line(a-155,b-(53-25),a+155,b-(53-25));
		line(a-91,b+(128-25),a+91,b+(128-25));
		line(a-96,b+(132-25),a+96,b+(132-25));
		getch();
		exit(0);

}

void calculator()
{
	 do {
		clrscr();
		cleardevice();
		float aj , cj ;
		float res=0 ;
		char bj ;
		cout<<"\n\n\n\t\t\t   WELCOME TO CALCULATOR \n\n\n " ;
		cout<<"\n\n\t ENTER THE FIRST NUMBER : " ;
		cin>>aj;
		cout<<"\n\n\t ENTER THE SIGN : " ;
		cin>>bj;
		if(bj=='+')
		{
			setcolor(YELLOW);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
			outtextxy(400,(getmaxy()/2)-90,"ADDITION");
			for(int ai=395;ai<=625;ai++)
			{
				putpixel(ai,(getmaxy()/2)-35,YELLOW);
				putpixel(ai,(getmaxy()/2)-30,YELLOW);
				delay(5);
			}
		}
		else if(bj=='-')
		{
			setcolor(YELLOW);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
			outtextxy(270,(getmaxy()/2)-90,"SUBSTRACTION");
			for(int ai=265;ai<=635;ai++)
			{
				putpixel(ai,(getmaxy()/2)-35,YELLOW);
				putpixel(ai,(getmaxy()/2)-30,YELLOW);
				delay(5);
			}
		}
		else if(bj=='*')
		{
			setcolor(YELLOW);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
			outtextxy(240,(getmaxy()/2)-90,"MULTIPLICATION");
			for(int ai=235;ai<=630;ai++)
			{
				putpixel(ai,(getmaxy()/2)-35,YELLOW);
				putpixel(ai,(getmaxy()/2)-30,YELLOW);
				delay(5);
			}
		}
		else if(bj=='/')
		{
			setcolor(YELLOW);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
			outtextxy(400,(getmaxy()/2)-90,"DIVISION");
			for(int ai=395;ai<=610;ai++)
			{
				putpixel(ai,(getmaxy()/2)-35,YELLOW);
				putpixel(ai,(getmaxy()/2)-30,YELLOW);
				delay(5);
			}
		}
		cout<<"\n\n\t ENTER THE SECOND NUMBER : " ;
		cin>>cj;
		if(bj=='+')
			res = aj + cj ;
		else if(bj=='-')
			res = aj - cj ;
		else if(bj=='*')
			res = aj * cj ;
		else if(bj=='/')
			res = aj / cj ;
		rectangle(465,(getmaxy()/2)-10,560,(getmaxy()/2)+23);
		gotoxy(61,16);
		cout<<aj<< bj<< cj << "=" << res;
		cout<<"\n\n\n\t\t TO CALCULATE AGAIN : (Y/N) " ;
		cin>>abc ;
		}while(abc=='y'||abc=='Y');
		getch();
}

void mainscreen()
{
		for(int i=0;i<=100;i++)
	{
		setcolor(YELLOW);
		circle(535,370,i);
		setcolor(RED);
		circle(585,210,i-50);
		circle(610,125,i-75);
		circle(375,420,i-50);
		circle(290,445,i-75);
		delay(10);
	}
}
/*
 const int maxtries = 7 ;
 const int maxrows = 7 ;
 const int maxlength = 80 ;

 int letterfill(char guess , char secretword[] , char guessword[])
 {
	int i , matches ;
	matches = 0 ;
	for(i=0;secretword[i]!='\0';i++)
	{
		if(guess==guessword[i])
			return 0 ;
		if(guess==secretword[i])
		{
			guessword[i]=guess;
			matches++;
		}
	}
	return matches ;
 }

 void initunknown(char word[],char unknown[])
 {
	int i , length ;
	length = strlen(word) ;
	for(i=0;i<length;i++)
	{
		unknown[i] = '*' ;
	}
	unknown[i]='\0' ;
 }

 void hangmangame()
 {
	clrscr();
	cleardevice();
	char unknown[maxlength] ;
	char letter ;
	char words[][maxlength] =
		{
			"APPLE" ,
			"PINEAPPLE" ,
			"ORANGE" ,
			"AVOCADO" ,
			"BANANA" ,
			"BILBERRY" ,
			"BLACKBERRY" ,
			"BLACKCURRANT" ,
			"APRICOT" ,
			"BLUEBERRY" ,
		};
	int tries = 0 ;
	char word[maxlength] ;
	cout<<"\n\n\n\t\t\t WELCOME TO HANGMAN GAME \n\n" ;
	cout<<"\n\t\t\t GUESS A FRUIT WORD .....!!!! \n\n" ;
	randomize();
	int n ;
	n = random(10) ;
	strcpy(word , words[n]) ;
	initunknown(word , unknown) ;
	cout<<"\n\n\t\t EACH LETTER IS IN CAPS SO TURN ON CAPSLOCK \n\n" ;
	cout<<"\n\n\t\t EACH LETTER IS REPRESENTED BY STAR \n\n" ;
	cout<<"\n\n\t\t YOU HAVE TO ENTER ONLY ONE LETTER AT A TIME \n\n" ;
	cout<<"\n\n\t\t YOU HAVE " << maxtries << " TRIES TO TRY AND GUESS THE WORD \n\n" ;
	while(tries<maxtries)
	{
		cout<<"\n\n\t\t"<<unknown ;
		cout<<"\n\n\t\t GUESS A LETTER : " ;
		cin>>letter;
		if(letterfill(letter,word,unknown)==0)
		{
			cout<<"\n\t\t WRONG LETTER \n" ;
			tries++ ;
		}
		else
		{
			cout<<"\n\t\t YOU FOUND A LETTER " ;
		}
		clrscr();
		cout<<"\n\t\t YOU HAVE "<<maxtries-tries<<" TRIES LEFT TO GUESS THE WORD \n" ;
		if(strcmp(word,unknown)==0)
		{
			clrscr();
			cleardevice();
			cout<<"\n\n\t\t"<<word<<"\n" ;
			cout<<"\n\n\t\t YOU GOT IT " ;
			break ;
		}
		clrscr();
		cleardevice();
	}
	if(tries==maxtries)
	{
		cout<<"\n\n\t\t YOU LOOSE.... YOU HAVE USED ALL TRIES \n" ;
		cout<<"\n\n\t\t THE WORD WAS :" <<word << "\n" ;
	}
	getch();
}
*/
void periodictable()
{
	int i ;
	cleardevice();

		setcolor(WHITE);
		rectangle(0,0,getmaxx(),getmaxy());
		rectangle(5,5,getmaxx()-5,getmaxy()-5);
		line(20,25,20,370);
		line(20,380,20,465);
		line(20,370,620,370);
		line(620,25,620,370);
		line(20,380,620,380);
		line(20,465,620,465);
		line(620,380,620,465);
		for(i=60;i<=600;i+=40)
			line(i,380,i,465);
		line(20,423,620,423);
		line(53.3,25,53.4,370);
		line(20,25,53.4,25);
		line(586.6,25,586.6,370);
		line(586.6,25,620,25);
		line(86.8,74.28,86.8,370);
		line(86.8,74.28,20,74.28);
		line(20,123.56,86.8,123.56);
		line(20,172.84,620,172.84);
		line(20,222.12,620,222.12);
		line(20,271.4,620,271.4);
		line(20,320.68,86.8,320.68);
		line(120.2,172.84,120.2,370);
		line(120.2,320.68,620,320.68);
		line(153.6,172.84,153.6,370);
		line(187,172.84,187,370);
		for(i=220.4;i<=(5*33.4)+220.4;i+=33.4)
			line(i,172.84,i,370);
		for(i=420.8;i<=(4*33.4)+420.8;i+=33.4)
			line(i,74.28,i,370);
		line(420.8,74.28,620,74.28);
		line(420.8,123.56,620,123.56);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(143,25,"PERIODIC");
		outtextxy(243,70,"TABLE");
		line(138,65,285,65);
		line(238,110,338,110);
		settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
		outtextxy(25,30,"1");
		outtextxy(25,80,"3");
		outtextxy(25,130,"11");
		outtextxy(25,180,"19");
		outtextxy(25,230,"37");
		outtextxy(25,280,"55");
		outtextxy(25,330,"87");
		outtextxy(58.4,79.28,"4");
		outtextxy(58.4,129.28,"12");
		int a=58.4;
		outtextxy(a,179.28,"20");
		outtextxy(a,229.28,"38");
		outtextxy(a,279.28,"56");
		outtextxy(a,329.28,"88");
		int b=58.4+33.4;
		outtextxy(b,179.28,"21");
		outtextxy(b,229.28,"39");
		int c=58.4+(2*33.4);
		outtextxy(c,179.28,"22");
		outtextxy(c,229.28,"40");
		outtextxy(c,279.28,"72");
		outtextxy(c,329.28,"104");
		int d=58.4+(3*33.4);
		outtextxy(d,179.28,"23");
		outtextxy(d,229.28,"41");
		outtextxy(d,279.28,"73");
		outtextxy(d,329.28,"105");
		int e=58.4+(4*33.4);
		outtextxy(e,179.28,"24");
		outtextxy(e,229.28,"42");
		outtextxy(e,279.28,"74");
		outtextxy(e,329.28,"106");
		int f=58.4+(5*33.4);
		outtextxy(f,179.28,"25");
		outtextxy(f,229.28,"43");
		outtextxy(f,279.28,"75");
		outtextxy(f,329.28,"107");
		int g=58.4+(6*33.4);
		outtextxy(g,179.28,"26");
		outtextxy(g,229.28,"44");
		outtextxy(g,279.28,"76");
		outtextxy(g,329.28,"108");
		int h=58.4+(7*33.4);
		outtextxy(h,179.28,"27");
		outtextxy(h,229.28,"45");
		outtextxy(h,279.28,"77");
		outtextxy(h,329.28,"109");
		int y=58.4+(8*33.4);
		outtextxy(y,179.28,"28");
		outtextxy(y,229.28,"46");
		outtextxy(y,279.28,"78");
		outtextxy(y,329.28,"110");
		int j=58.4+(9*33.4);
		outtextxy(j,179.28,"29");
		outtextxy(j,229.28,"47");
		outtextxy(j,279.28,"79");
		outtextxy(j,329.28,"111");
		int k=58.4+(10*33.4);
		outtextxy(k,179.28,"30");
		outtextxy(k,229.28,"48");
		outtextxy(k,279.28,"80");
		outtextxy(k,329.28,"112");
		int l=58.4+(11*33.4);
		outtextxy(l,79.28,"5");
		outtextxy(l,129.28,"13");
		outtextxy(l,179.28,"31");
		outtextxy(l,229.28,"49");
		outtextxy(l,279.28,"81");
		outtextxy(l,329.28,"113");
		int m=58.4+(12*33.4);
		outtextxy(m,79.28,"6");
		outtextxy(m,129.28,"14");
		outtextxy(m,179.28,"32");
		outtextxy(m,229.28,"50");
		outtextxy(m,279.28,"82");
		outtextxy(m,329.28,"114");
		int n=58.4+(13*33.4);
		outtextxy(n,79.28,"7");
		outtextxy(n,129.28,"15");
		outtextxy(n,179.28,"33");
		outtextxy(n,229.28,"51");
		outtextxy(n,279.28,"83");
		outtextxy(n,329.28,"115");
		int o=58.4+(14*33.4);
		outtextxy(o,79.28,"8");
		outtextxy(o,129.28,"16");
		outtextxy(o,179.28,"34");
		outtextxy(o,229.28,"52");
		outtextxy(o,279.28,"84");
		outtextxy(o,329.28,"116");
		int p=58.4+(15*33.4);
		outtextxy(p,79.28,"9");
		outtextxy(p,129.28,"17");
		outtextxy(p,179.28,"35");
		outtextxy(p,229.28,"53");
		outtextxy(p,279.28,"85");
		outtextxy(p,329.28,"117");
		int q=58.4+(16*33.4);
		outtextxy(q,30,"2");
		outtextxy(q,79.28,"10");
		outtextxy(q,129.28,"18");
		outtextxy(q,179.28,"36");
		outtextxy(q,229.28,"54");
		outtextxy(q,279.28,"86");
		outtextxy(q,329.28,"118");
		int u , z ;
		u=385;z=428;
		outtextxy(25,u,"57");
		outtextxy(25,z,"89");
		outtextxy(65,u,"58");
		outtextxy(65,z,"90");
		outtextxy(105,u,"59");
		outtextxy(105,z,"91");
		outtextxy(145,u,"60");
		outtextxy(145,z,"92");
		outtextxy(185,u,"61");
		outtextxy(185,z,"93");
		outtextxy(225,u,"62");
		outtextxy(225,z,"94");
		outtextxy(265,u,"63");
		outtextxy(265,z,"95");
		outtextxy(305,u,"64");
		outtextxy(305,z,"96");
		outtextxy(345,u,"65");
		outtextxy(345,z,"97");
		outtextxy(385,u,"66");
		outtextxy(385,z,"98");
		outtextxy(425,u,"67");
		outtextxy(425,z,"99");
		outtextxy(465,u,"68");
		outtextxy(465,z,"100");
		outtextxy(505,u,"69");
		outtextxy(505,z,"101");
		outtextxy(545,u,"70");
		outtextxy(545,z,"102");
		outtextxy(585,u,"71");
		outtextxy(585,z,"103");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		outtextxy(30,40,"H");
		outtextxy(30,89.28,"Li");
		outtextxy(26,138.56,"Na");
		outtextxy(30,187.84,"K");
		outtextxy(26,237.12,"Rb");
		outtextxy(26,286.4,"Cs");
		outtextxy(26,337,"Fr");
		outtextxy(60,89,"Be");
		outtextxy(60,138,"Mg");
		outtextxy(60,189,"Ca");
		outtextxy(60,238,"Sr");
		outtextxy(60,289,"Ba");
		outtextxy(60,338,"Ra");
		outtextxy(95,189,"Sc");
		outtextxy(95,238,"Y");
		outtextxy(130,189,"Ti");
		outtextxy(130,238,"Zr");
		outtextxy(130,289,"Hf");
		outtextxy(130,338,"Rf");
		outtextxy(165,189,"V");
		outtextxy(160,238,"Nb");
		outtextxy(160,289,"Ta");
		outtextxy(160,338,"Db");
		outtextxy(195,189,"Cr");
		outtextxy(195,238,"Mo");
		outtextxy(195,289,"W");
		outtextxy(195,338,"Sg");
		outtextxy(225,189,"Mn");
		outtextxy(225,238,"Tc");
		outtextxy(225,289,"Re");
		outtextxy(225,338,"Bh");
		outtextxy(260,189,"Fe");
		outtextxy(260,238,"Ru");
		outtextxy(260,289,"Os");
		outtextxy(260,338,"Hs");
		outtextxy(295,189,"Co");
		outtextxy(290,238,"Rh");
		outtextxy(295,289,"Ir");
		outtextxy(290,338,"Mt");
		outtextxy(325,189,"Ni");
		outtextxy(325,238,"Pd");
		outtextxy(325,289,"Pt");
		outtextxy(325,338,"Ds");
		outtextxy(360,189,"Cu");
		outtextxy(360,238,"Ag");
		outtextxy(356,289,"Au");
		outtextxy(360,338,"Rg");
		outtextxy(395,189,"Zn");
		outtextxy(395,238,"Cd");
		outtextxy(395,289,"Hg");
		outtextxy(385,338,"Uub");
		outtextxy(430,89,"B");
		outtextxy(430,138,"Al");
		outtextxy(426,189,"Ga");
		outtextxy(430,238,"In");
		outtextxy(430,289,"Tl");
		outtextxy(420,338,"Uut");
		outtextxy(465,89,"C");
		outtextxy(465,138,"Si");
		outtextxy(460,189,"Ge");
		outtextxy(460,238,"Sn");
		outtextxy(460,289,"Pb");
		outtextxy(453,338,"Uuq");
		outtextxy(495,89,"N");
		outtextxy(495,138,"P");
		outtextxy(495,189,"As");
		outtextxy(495,238,"Sb");
		outtextxy(495,289,"Bi");
		outtextxy(486,338,"Uup");
		outtextxy(530,89,"O");
		outtextxy(530,138,"S");
		outtextxy(527,189,"Se");
		outtextxy(527,238,"Te");
		outtextxy(527,289,"Po");
		outtextxy(520,338,"Uuh");
		outtextxy(565,89,"F");
		outtextxy(565,138,"Cl");
		outtextxy(560,189,"Br");
		outtextxy(565,238,"I");
		outtextxy(560,289,"At");
		line(565,350,575,350);
		outtextxy(595,40,"He");
		outtextxy(595,89,"Ne");
		outtextxy(595,138,"Ar");
		outtextxy(595,189,"Kr");
		outtextxy(595,238,"Xe");
		outtextxy(595,289,"Rn");
		line(595,350,605,350);
		outtextxy(28,395,"La");
		outtextxy(28,435,"Ac");
		outtextxy(68,395,"Ce");
		outtextxy(68,435,"Th");
		outtextxy(108,395,"Pr");
		outtextxy(108,435,"Pa");
		outtextxy(148,395,"Nd");
		outtextxy(148,435,"U");
		outtextxy(188,395,"Pm");
		outtextxy(188,435,"Np");
		outtextxy(228,395,"Sm");
		outtextxy(228,435,"Pu");
		outtextxy(268,395,"Eu");
		outtextxy(268,435,"Am");
		outtextxy(308,395,"Gd");
		outtextxy(308,435,"Cm");
		outtextxy(348,395,"Tb");
		outtextxy(348,435,"Bk");
		outtextxy(388,395,"Dy");
		outtextxy(388,435,"Cf");
		outtextxy(428,395,"Ho");
		outtextxy(428,435,"Es");
		outtextxy(468,395,"Er");
		outtextxy(468,435,"Fm");
		outtextxy(508,395,"Tm");
		outtextxy(508,435,"Md");
		outtextxy(548,395,"Yb");
		outtextxy(548,435,"No");
		outtextxy(588,395,"Lu");
		outtextxy(588,435,"Lr");
		setcolor(RED);
		rectangle(0,0,getmaxx(),getmaxy());

}

void graphicset()
{
	int gdrive=DETECT , gmode , errorcode ;
	initgraph(&gdrive,&gmode,"C:\\TURBOC3\\BGI");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("%S",grapherrormsg(errorcode));
		exit(0);
	}
}

void graphic1()
{
	int a , b ;
	a=b=0;
	for(int i=getmaxx(),j1=getmaxy();i>=0&&j1>=0;i--,j1--)
	{
		setcolor(BLUE);
		rectangle(0+a,0+b,i,j1);
		setcolor(YELLOW);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,15);
		outtextxy(50,65,"WELCOME");
		outtextxy(235,160,"TO");
		outtextxy(100,255,"WORLD");
		a++;
		b++;
		delay(5);
	}
}

void graphic2()
{
	for(int i=0;i<=80;i++)
	{
		setcolor(WHITE);
		circle(75,75,i);
		setcolor(RED);
		circle(75,75,(i-25));
		setcolor(WHITE);
		circle(564,404,i);
		setcolor(RED);
		circle(564,404,(i-25));
		setcolor(RED);
		circle(75,404,i);
		setcolor(WHITE);
		circle(75,404,(i-25));
		setcolor(RED);
		circle(564,75,i);
		setcolor(WHITE);
		circle(564,75,(i-25));
			setcolor(WHITE);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,14);
			outtextxy(225,20,"CS");
			setcolor(RED);
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,14);
			outtextxy(70,175,"PROJECT");
		delay(60);
	}
	setcolor(RED);
	line(220,150,365,150);
	line(210,155,375,155);
	setcolor(WHITE);
	line(50,305,590,305);
	line(40,310,600,310);
	for(i=0;i<=10;i++)
	   {    setcolor(WHITE);
		circle(395,103,i);
		circle(458,20,i);
		circle(200,35,i);
		circle(298,185,i);
		circle(125,190,i);
		circle(35,249,i);
		circle(600,200,i);
		setcolor(RED);
		circle(55,175,i);
		circle(195,135,i);
		circle(468,170,i);
		circle(620,298,i);
		circle(300,15,i);
		delay(60);
	   }
	setcolor(RED);
	rectangle(159,315,480,475);
	rectangle(164,320,475,470);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(175,330,"MADE BY :- ");
	outtextxy(175,375,"RAKSHIT AGRAWAL");
	outtextxy(175,420,"AVNEET SINGH");
	delay(2000);
}

void graphic3()
{
	for(int i=0;i<=80;i++)
	{
		setcolor(RED);
		circle(75,75,i);
		setcolor(YELLOW);
		circle(75,75,(i-25));
		setcolor(RED);
		circle(564,404,i);
		setcolor(YELLOW);
		circle(564,404,(i-25));
		setcolor(RED);
		circle(75,404,i);
		setcolor(YELLOW);
		circle(75,404,(i-25));
		setcolor(RED);
		circle(564,75,i);
		setcolor(YELLOW);
		circle(564,75,(i-25));
		delay(60);
	}
	for(i=0;i<=180;i++)
	{
		setcolor(BLUE);
		circle(getmaxx()/2,getmaxy()/2,i);
		setcolor(LIGHTBLUE);
		circle(getmaxx()/2,getmaxy()/2,(i-40));
		delay(10);
	}
	setcolor(YELLOW);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy((getmaxx()/2)-105,(getmaxy()/2)-150,"SUBMITTED");
	outtextxy((getmaxx()/2)-15,(getmaxy()/2)-100,"TO");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
	outtextxy((getmaxx()/2)-175,(getmaxy()/2)-50,"ARCHANA");
	outtextxy((getmaxx()/2)-115,(getmaxy()/2)+35,"MA'AM");
	setcolor(WHITE);
	line((getmaxx()/2)-174,(getmaxy()/2)+34,(getmaxx()/2)+174,(getmaxy()/2)+34);
	line((getmaxx()/2)-170,(getmaxy()/2)+38,(getmaxx()/2)+170,(getmaxy()/2)+38);
	line((getmaxx()/2)-125,(getmaxy()/2)+120,(getmaxx()/2)+125,(getmaxy()/2)+120);
	line((getmaxx()/2)-120,(getmaxy()/2)+124,(getmaxx()/2)+121,(getmaxy()/2)+124);
	delay(1900);
}

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

void tictactoeboard()
{
	clrscr();
	cleardevice();
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "PLAYER 1 <X>    PLAYER 2 <O> \n\n" ;
	cout << "\n";
	cout << "     |     |      \n";
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] <<"\n";
	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "\n";
	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "\n";
	cout << "     |     |     " << "\n" << "\n";
}


int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}
void tictactoe()
{
	int player = 1,i,choice;
	char mark;
	clrscr();
	cleardevice();
	do
	{
		tictactoeboard();
		player=(player%2)?1:2;
		cout << "PLAYER " << player << ", ENTER A NUMBER :  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"\n\n\t\t INVALID MOVE ";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	tictactoeboard();
	if(i==1)
		cout<<"\n\n\t\t\t PLAYER "<<--player<<" WIN!!!!!!!!!! ";
	else
		cout<<"\n\n\t\t\t GAME DRAW \n ";
	getch();
}

void randomgame()
{
			clrscr();
			cleardevice();
			char answer ;
			int num, guess, tries = 0;
			randomize();
			num = random(100) + 1;
			cout << "\n\n\t\t\t GUESS A NUMBER GAME \n\n";
			do{
				do
				{
					cout << "\n\t\t ENTER A GUESS BETWEEN 1 TO 100 : ";
					cin >> guess;
					tries++;
					if (guess > num)
						cout << "\n\n\t\t TOO HIGH!!! \n\n";
					else if (guess < num)
						cout << "\n\n\t\t TOO LOW!!! \n\n";
					else
						cout << "\n\n\t\t CORRECT !!!!!! YOU GOT IT IN " << tries << " GUESSES \n";
				} while (guess != num);
				cout<<"\n\n\t\t WANT TO PLAY AGAIN : (Y/N) : " ;
				cin>>answer ;
			}while(answer=='Y'||answer=='y');
			getch();
}
/*
void tablep()
{
	clrscr();
				cleardevice();
				char H[]={'H','\0'} , He[]={'H','e','\0'} , Li[]={'L','i','\0'} , Be[]={'B','e','\0'} , B[]={'B','\0'};
				char C[]={'C','\0'} , N[]={'N','\0'} , O[]={'O','\0'} , F[]={'F','\0'} , Ne[]={'N','e','\0'} ; // till 10
				char Na[]={'N','a','\0'} , Mg[]={'M','g','\0'} , Al[]={'A','l','\0'} , Si[]={'S','i','\0'} , P[]={'P','\0'} ;
				char S[]={'S','\0'} , Cl[]={'C','l','\0'} , Ar[]={'A','r','\0'} , K[]={'K','\0'} , Ca[]={'C','a','\0'} , Sc[]={'S','c','\0'} ;
				char Ti[]={'T','i','\0'} , V[]={'V','\0'} , Cr[]={'C','r','\0'} , Mn[]={'M','n','\0'} , Fe[]={'F','e','\0'} , Co[]={'C','o','\0'} ;
				char Ni[]={'N','i','\0'} , Cu[]={'C','u','\0'} , Zn[]={'Z','n','\0'} , Ga[]={'G','a','\0'} , Ge[]={'G','e','\0'} , As[]={'A','s','\0'} ;
				char Se[]={'S','e','\0'} , Br[]={'B','r','\0'} , Kr[]={'K','r','\0'} , Rb[]={'R','b','\0'} , Sr[]={'S','r','\0'} , Y[]={'Y','\0'} ;
				char Zr[]={'Z','r','\0'} , Nb[]={'N','b','\0'} , Mo[]={'M','o','\0'} , Tc[]={'T','c','\0'} , Ru[]={'R','u','\0'} , Rh[]={'R','h','\0'} ;
				char Pd[]={'P','d','\0'} , Ag[]={'A','g','\0'} , Cd[]={'C','d','\0'} , In[]={'I','n','\0'} , Sn[]={'S','n','\0'} , Sb[]={'S','b','\0'} ;
				char Te[]={'T','e','\0'} , I[]={'I','\0'} , Xe[]={'X','e','\0'} , Cs[]={'C','s','\0'} , Ba[]={'B','a','\0'} , Hf[]={'H','f','\0'} ;
				char Ta[]={'T','a','\0'} , W[]={'W','\0'} , Re[]={'R','e','\0'} , Os[]={'O','s','\0'} , Ir[]={'I','r','\0'} , Pt[]={'P','t','\0'} ;
				char Au[]={'A','u','\0'} , Hg[]={'H','g','\0'} , Tl[]={'T','l','\0'} , Pb[]={'P','b','\0'} , Bi[]={'B','i','\0'} , Po[]={'P','o','\0'} , At[]={'A','t','\0'} , Rn[]={'R','n','\0'} , Fr[]={'F','r','\0'} , Ra[]={'R','a','\0'} , Rf[]={'R','f','\0'} , Db[]={'D','b','\0'} , Sg[]={'S','g','\0'} , Bh[]={'B','h','\0'} , Hs[]={'H','s','\0'} , Mt[]={'M','t','\0'} , Ds[]={'D','s','\0'} , Rg[]={'R','g','\0'} , Uub[]={'U','u','b','\0'} ;
				char Uut[]={'U','u','t','\0'} , Uuq[]={'U','u','q','\0'} , Uup[]={'U','u','p','\0'} , Uuh[]={'U','u','h','\0'} ;
				char La[]={'L','a','\0'} , Ce[]={'C','e','\0'} , Pr[]={'P','r','\0'} , Nd[]={'N','d','\0'} , Pm[]={'P','m','\0'} , Sm[]={'S','m','\0'};
				char Eu[]={'E','u','\0'} , Gd[]={'G','d','\0'} , Tb[]={'T','b','\0'} , Dy[]={'D','y','\0'} , Ho[]={'H','o','\0'} , Er[]={'E','r','\0'} ;
				char Tm[]={'T','m','\0'} , Yb[]={'Y','b','\0'} , Lu[]={'L','u','\0'} , Ac[]={'A','c','\0'} , Th[]={'T','h','\0'} , Pa[]={'P','a','\0'} ;
				char U[]={'U','\0'} , Np[]={'N','p','\0'} , Pu[]={'P','u','\0'} , Am[]={'A','m','\0'} , Cm[]={'C','m','\0'} , Bk[]={'B','k','\0'} ;
				char Cf[]={'C','f','\0'} , Es[]={'E','s','\0'} , Fm[]={'F','m','\0'} , Md[]={'M','d','\0'} , No[]={'N','o','\0'} ;
				char Lr[]={'L','r','\0'} ;
				char exit[]={'E','X','I','T','\0'};
				char ele[30] , che ;
				st :
				re :
					clrscr();
					cleardevice();
					cout<<"\n\n\t\t WELCOME TO SEARCH ENGINE \n\n\n " ;
					cout<<"\n\n\n\t TO SEARCH THE ELEMENT ENTER ITS CHEMICAL NAME \n\n\n " ;
					cout<<"\n\n\n\t TO EXIT ENTER EXIT \n\n\n " ;
					cout<<"\n\t\t";
					gets(ele);
						if(strcmp(ele,H)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "HYDROGEN");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(H)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 1 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 2 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//1
						else if(strcmp(ele,He)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 50 , getmaxy()/2 - 160 , "HELIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(He)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 2 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 4 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//2

						else if(strcmp(ele,Li)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 50 , getmaxy()/2 - 160 , "LITHIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Li)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 3 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 7 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//3

						else if(strcmp(ele,Be)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "BERYLIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Be)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 4 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 9 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//4

						else if(strcmp(ele,B)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 40 , getmaxy()/2 - 160 , "BORON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(B)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 5 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 11 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//5
						else if(strcmp(ele,C)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CARBON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(C)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 6 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 12 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//6
						else if(strcmp(ele,N)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NITROGEN");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(N)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 7 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 14 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//7
						
						else if(strcmp(ele,O)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "OXYGEN");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(O)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 8 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 16 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//8
						else if(strcmp(ele,F)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "FLUORINE");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(F)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 9 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 19 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//9
						else if(strcmp(ele,Ne)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NEON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ne)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 10 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 20 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//10
						else if(strcmp(ele,Na)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SODIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Na)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 11 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 23 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//11
						else if(strcmp(ele,Mg)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "MAGNESIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Mg)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 12 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 24 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//12
						else if(strcmp(ele,Al)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ALUMINIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Al)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 13 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 27 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//13
						else if(strcmp(ele,Si)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SILICON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Si)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 14 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 28 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//14
						else if(strcmp(ele,P)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PHOSPHORUS");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(P)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 15 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 31 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//15
						else if(strcmp(ele,S)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SULPHUR");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(S)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 16 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 32 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//16
						else if(strcmp(ele,Cl)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CHLORINE");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cl)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 17 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 35.5 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//17
						else if(strcmp(ele,Ar)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ARGON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ar)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 18 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 40 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//18
						else if(strcmp(ele,K)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "POTASSIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(K)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 19 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 39 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//19
						else if(strcmp(ele,Ca)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CALCIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ca)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 20 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 40 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//20
						else if(strcmp(ele,Sc)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SCANDIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Sc)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 21 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 45 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//21
						else if(strcmp(ele,Ti)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TITANIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ti)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 22 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 48 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//22
						else if(strcmp(ele,V)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "VANADIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(V)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 23 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 51 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//23
						else if(strcmp(ele,Cr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CHROMIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cr)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 24 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 52 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//24
						else if(strcmp(ele,Mn)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "MANGANESE");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Mn)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 25 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 55 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//25
						else if(strcmp(ele,Fe)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "IRON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Fe)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 26 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 56 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//26
						else if(strcmp(ele,Co)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "COBALT");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Co)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 27 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 59 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//27
						else if(strcmp(ele,Ni)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NICKEL");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ni)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 28 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 59 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//28
						else if(strcmp(ele,Cu)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "COPPER");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cu)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 29 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 64 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//29
						else if(strcmp(ele,Zn)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ZINC");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Zn)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 30 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 65 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//30
						else if(strcmp(ele,Ga)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "GALLIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ga)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 31 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 70 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//31
						else if(strcmp(ele,Ge)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "GERMANIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ge)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 32 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 73 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//32
						else if(strcmp(ele,As)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ARSENIC");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(As)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 33 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 75 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//33
						else if(strcmp(ele,Se)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SELENIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Se)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 34 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 79 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//34
						else if(strcmp(ele,Br)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "BROMINE");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Br)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 35 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 80 \n " ;
							cout<<"\n\n\t STATE : LIQUID AT ROOM TEMPERATURE \n " ;
							getch();

						}//35
						else if(strcmp(ele,Kr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "KRYPTON");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Kr)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 36 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 84 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//36
						else if(strcmp(ele,Rb)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RUBIDIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Rb)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 37 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 85 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//37
						else if(strcmp(ele,Sr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "STRONCIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Sc)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 38 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 88 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//38
						else if(strcmp(ele,Y)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "YTTRIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Y)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 39 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 89 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//39
						else if(strcmp(ele,Zr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ZIRCONIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Zr)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 40 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 91 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//40
						else if(strcmp(ele,Nb)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NIOBIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Nb)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 41 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 93 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//41
						else if(strcmp(ele,Mo)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "MOLYBDENIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Mo)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 42 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 96 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//42
						else if(strcmp(ele,Tc)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TECHNETIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Tc)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 43 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 98 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//43
						else if(strcmp(ele,Ru)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RUTHENIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ru)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 44 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 101 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//44
						else if(strcmp(ele,Rh)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RHODIUM");
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Rh)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 45 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 103 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//45
						else if(strcmp(ele,Pd)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PALLADIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Pd)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 46 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 106 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//46
						else if(strcmp(ele,Ag)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SILVER");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ag)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 47 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 108 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//47
						else if(strcmp(ele,Cd)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CADMIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cd)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 48 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 112 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//48
						else if(strcmp(ele,In)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "INDIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(In)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 49 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 115 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//49
						else if(strcmp(ele,Sn)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TIN");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Sn)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 50 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 119 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//50
						else if(strcmp(ele,Sb)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ANTIMONY");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Sb)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 51 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 122 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//51
						else if(strcmp(ele,Te)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TELLURIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Te)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 52 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 128 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//52
						else if(strcmp(ele,I)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "IODINE");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(I)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 53 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 127 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//53
						else if(strcmp(ele,Xe)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "XENON");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Xe)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 54 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 131 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//54
						else if(strcmp(ele,Cs)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CESIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cs)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 55 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 133 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//55
						else if(strcmp(ele,Ba)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "BARIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ba)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 56 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 137 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//56
						else if(strcmp(ele,La)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "LANTHANIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(La)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 57 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 139 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//57
						else if(strcmp(ele,Ce)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CERIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ce)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 58 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 140 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//58
						else if(strcmp(ele,Pr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PRASEODYMIUM");

							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Pr)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 59 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 141 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//59
						else if(strcmp(ele,Nd)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NEODYMIUM");

							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Nd)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 60 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 144 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//60
						else if(strcmp(ele,Pm)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PROMETHIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Pm)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 61 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 145 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//61
						else if(strcmp(ele,Sm)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SAMARIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Sm)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 62 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 150 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//62
						else if(strcmp(ele,Eu)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "EUROPIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Eu)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 63 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 152 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//63
						else if(strcmp(ele,Gd)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "GADOLINIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Gd)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 64 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 157 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//64
						else if(strcmp(ele,Tb)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TERBIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Tb)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 65 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 159 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//65
						else if(strcmp(ele,Dy)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "DYSPRONIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Dy)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 66 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 163 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//66
						else if(strcmp(ele,Ho)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "HOLMIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ho)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 67 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 165 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//67
						else if(strcmp(ele,Er)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ERBIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Er)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 68 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 167 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//68
						else if(strcmp(ele,Tm)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "THULLIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Tm)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 69 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 169 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//69
						else if(strcmp(ele,Yb)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "YTTERBIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Yb)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 70 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 173 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//70
						else if(strcmp(ele,Lu)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "LUTETIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Lu)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 71 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 175 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//71
						else if(strcmp(ele,Hf)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "HAFNIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Hf)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 72 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 178 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//72
						else if(strcmp(ele,Ta)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TANTALIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ta)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 73 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 181 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//73
						else if(strcmp(ele,W)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "TUNGSTEN");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(W)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 74 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 184 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//74
						else if(strcmp(ele,Re)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RHENIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Re)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 75 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 186 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//75
						else if(strcmp(ele,Os)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RHENIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(OSMIUM)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 76 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 190 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//76
						else if(strcmp(ele,Ir)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "IRIDIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ir)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 77 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 192 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//77
						else if(strcmp(ele,Pt)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PLATIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(H)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 78 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 195 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//78
						else if(strcmp(ele,Au)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "GOLD");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Au)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 79 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 197 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							getch();

						}//79
						else if(strcmp(ele,Hg)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "MERCURY");
			
										outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Mg)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 80 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 201 \n " ;
							cout<<"\n\n\t STATE : LIQUID AT ROOM TEMPERATURE \n " ;
							getch();

						}//80
						else if(strcmp(ele,Tl)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "THALLIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Tl)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 81 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 204 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//81
						else if(strcmp(ele,Pb)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "LEAD");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Pb)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 82 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 207 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							getch();

						}//82
						else if(strcmp(ele,Bi)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "BISMUTH");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Bi)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 83 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 209 \n " ;
							cout<<"\n\n\t STATE : SOID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//83
						else if(strcmp(ele,Po)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "POLONIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Po)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 84 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 208 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//84
						else if(strcmp(ele,At)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ASTATINE");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(At)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 85 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 210 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//85
						else if(strcmp(ele,Rn)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RADON");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Rn)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 86 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 222 \n " ;
							cout<<"\n\n\t STATE : GAS AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//86
						else if(strcmp(ele,Fr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "FRANCIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Fr)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 87 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 223 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//87
						else if(strcmp(ele,Ra)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RADIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ra)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 88 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 226 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//88
						else if(strcmp(ele,Ac)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ACTINIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ac)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 89 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 227 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//89
						else if(strcmp(ele,Th)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "THORIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Th)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 90 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 232 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//90
						else if(strcmp(ele,Pa)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PROTACTINIUM");
					
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Pa)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 91 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 231 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//91
						else if(strcmp(ele,U)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "URANIUM");
							line(getmaxx()/2-105,getmaxy()/2-115,getmaxx()/2+110,getmaxy()/2-115);
							line(getmaxx()/2-100,getmaxy()/2-110,getmaxx()/2+105,getmaxy()/2-110);
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(U)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 92 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 238 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//92
						else if(strcmp(ele,Np)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NEPTUNIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Np)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 93 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 237 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//93
						else if(strcmp(ele,Pu)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "PLUTONIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Pu)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 94 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 244 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//94
						else if(strcmp(ele,Am)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "AMERICIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Am)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 95 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 243 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//95
						else if(strcmp(ele,Cm)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CURIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cm)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 96 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 247 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//96
						else if(strcmp(ele,Bk)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "BERKELIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Bk)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 97 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 247 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//97
						else if(strcmp(ele,Cf)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "CALIFORNIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Cf)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 98 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 251 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//98
						else if(strcmp(ele,Es)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "EINSTEINIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Es)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 99 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 252 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//99
						else if(strcmp(ele,Fm)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "FERMIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Fm)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 100 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 257 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//100
						else if(strcmp(ele,Md)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "MENDELEVIUM" );
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Md)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 101 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 258 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//101
						else if(strcmp(ele,No)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "NOBELIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(No)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 102 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 259 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//102
						else if(strcmp(ele,Lr)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "LAWRENCIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Lr)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 103 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 262 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//103
						else if(strcmp(ele,Rf)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "RUTHERFORDIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Rf)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 104 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 263 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//104
						else if(strcmp(ele,Db)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "DUBNIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Db)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 105 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 268 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							getch();

						}//105
						else if(strcmp(ele,Sg)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "SEABORGIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Sg)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 106 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 266 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//106
						else if(strcmp(ele,Bh)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "BOHRIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Bh)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 107 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 272 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//107
						else if(strcmp(ele,Hs)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "HASSIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Hs)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 108 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 277 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//108
						else if(strcmp(ele,Mt)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "MEITNERIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Mt)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 109 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 276 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//109
						else if(strcmp(ele,Ds)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "DARMSTADTIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Ds)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 110 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 281 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//110
						else if(strcmp(ele,Rg)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "ROENTGENIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Rg)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 111 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 280 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARITIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//111
						else if(strcmp(ele,Uub)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "UNUNBIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Uub)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 112 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 285 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//112
						else if(strcmp(ele,Uut)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "UNUNTRIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Uut)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 113 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 2284 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//113
						else if(strcmp(ele,Uuq)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "UNUNQUADIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Uuq)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 114 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 289 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//114
						else if(strcmp(ele,Uup)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "UNUNPENTIUM");
						
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(H)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 115 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 288 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//115
						else if(strcmp(ele,Uuh)==0)
						{
							clrscr();
							cleardevice();
							settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
							setcolor(WHITE);
							outtextxy(getmaxx()/2 - 100 , getmaxy()/2 - 160 , "UNUNHEXIUM");
							
							outtextxy(getmaxx()/2-25,getmaxy()/2-105,"(Uuh)");
							gotoxy(25,12);
							cout<<"\n\n\t ATOMIC NUMBER : 116 \n " ;
							cout<<"\n\n\t ATOMIC MASS   : 292 \n " ;
							cout<<"\n\n\t STATE : SOLID AT ROOM TEMPERATURE \n " ;
							cout<<"\n\n\t ARTIFICIALLY MADE \n " ;
							cout<<"\n\n\t RADIOACTIVE IN NATURE \n " ;
							getch();

						}//116

						else if(strcmp(ele,exit)==0)
							end();
						else
						{
								 cout<<"\n\n\n\n\n\n\t\t ENTER A VALID ELEMENT " ;
								 delay(1000);
								 goto re ;
						}
				clrscr();
				cleardevice();
				goto st ;	
}
*/
/*
void tools()
{
	clrscr();
	cleardevice();
	
}
*/
void program(int ch)
{
	if(ch==1)
	{
		clrscr();
		cleardevice();
		cout<<"\n\n\t\t    CHEMISTRY < ACADAMICS > \n\n\n " ;
		cout<<"\n\n\t PRESS 1 TO SEE THE PERIODIC TABLE \n\n " ;
		cout<<"\n\n\t PRESS 2 TO SEARCH THE ELEMENTS \n\n " ;
		cout<<"\n\n\t PRESS 3 TO SEE THE TOOLS OF PERIODIC TABLE \n\n " ;
		cout<<"\n\n\t PRESS 4 TO EXIT \n\n " ;
		cout<<"\n\t";

		int chi ;
		cin>>chi;
		if(chi==1)
			periodictable();
		else if(chi==2)
			{
				//	tablep();
			}
		else if(chi==3)
		     {		//	tools();
		     }
		else if(chi==4)
			end();
	}
	else if(ch==2)
	{
		clrscr();
		cleardevice();
		int ch007 ;
		cout<<"\n\t\t     WELCOME TO THE WORLD OF GAMES \n\n\n " ;
		cout<<"\n\n\t PRESS 1 TO PLAY TIC TAC TOE GAME \n\n\n " ;
		
		cout<<"\n\n\t PRESS 2 TO PLAY RANDOMISE GAME \n\n\n " ;
		cout<<"\n\n\t PRESS 3 TO EXIT \n\n\n " ;
		cout<<"\n\t\t" ;
		int ii ;
		for(ii=0;ii<=640;ii++)
		{
			setcolor(YELLOW);
			line(ii,440,ii,400);
			line(560,ii,600,ii);
			delay(5);
		}
		for(int jj=0 ; jj<=50; jj++ )
		{
			setcolor(RED);
			circle(500,340,jj) ;
			delay(5);
		}
		cin>>ch007 ;
		if(ch007==1)
		{
			tictactoe();
		}
		/*else if(ch007==2)
		{
			hangmangame();
		}
		*/
		else if(ch007==2)
		{
			randomgame();
		}
		else if(ch007==3)
		{
			end();
		}
	}
	else if(ch==3)
	{
	   calculator();
	}
	else if(ch==4)
	{
		end();
	}
	else
		cout<<"\n\n\t\t ENTER THE CORRECT CHOICE " ;
}

