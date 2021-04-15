///////////////////FUNCTION FILE FOR PROJECT/////////////////////////////
/////////////////////////////////////////////////////////////////////////
// TO USE - "C:\\TURBOC3\\PROJECT\\function.cpp"
//#include"HEADER.cpp"
#include"C:\TURBOC3\PROJECT\HEADER.cpp"

long float ac_amount ;
char location_loading[50];
char location_tran[50];
char location_nop[50];
char location_refral[50];
char location_ss[50];
char location_attempt[50];
char location_name[50];
char location_temp[50];
char location_list[50];
char location_q[50];
char location_ans[50];
char location_pass[50];
char location_history[50];
char location_account[50];

void location_transfer()
{
	/*
	strcpy(location_q,"question.dat");
	strcpy(location_ans,"answer.dat");
	strcpy(location_ss,"secret.dat");
	strcpy(location_attempt,"attempt.dat");
	strcpy(location_list,"ITEM.dat");
	strcpy(location_name,"name.dat");
	strcpy(location_pass,"passentry.dat");
	strcpy(location_loading,"loading.dat");
	strcpy(location_history,"history.dat");
	strcpy(location_nop,"no.dat");
	strcpy(location_refral,"refral.dat");
	strcpy(location_account,"account.dat");
	strcpy(location_tran,"transaction.dat");
	strcpy(location_temp,"temp.dat");
	*/
	strcpy(location_q,"C:\\TURBOC3\\PROJECT\\question.dat");
	strcpy(location_tran,"C:\\TURBOC3\\PROJECT\\transaction.dat");
	strcpy(location_ans,"C:\\TURBOC3\\PROJECT\\answer.dat");
	strcpy(location_ss,"C:\\TURBOC3\\PROJECT\\secret.dat");
	strcpy(location_attempt,"C:\\TURBOC3\\PROJECT\\attempt.dat");
	strcpy(location_list,"C:\\TURBOC3\\PROJECT\\ITEM.dat");
	strcpy(location_temp,"C:\\TURBOC3\\PROJECT\\temp.dat");
	strcpy(location_name,"C:\\TURBOC3\\PROJECT\\name.dat");
	strcpy(location_pass,"C:\\TURBOC3\\PROJECT\\passentry.dat");
	strcpy(location_loading,"C:\\TURBOC3\\PROJECT\\loading.dat");
	strcpy(location_history,"C:\\TURBOC3\\PROJECT\\history.dat");
	strcpy(location_refral,"C:\\TURBOC3\\PROJECT\\refral.dat");
	strcpy(location_account,"C:\\TURBOC3\\PROJECT\\account.dat");
	strcpy(location_nop,"C:\\TURBOC3\\PROJECT\\no.dat");
}
class return_item
{
	public :
	int noc_r , temp_r ;
	char icc[10] ;
	long int refral_r ;
	return_item()
	{
		temp_r = 0 ;
	}
	~return_item()
	{
		temp_r = 0 ;
	}
	void enter_r()
	{
		cout<<"\n\tENTER REFRAL CODE OF YOUR PURCHASE : " ;
		cin>>refral_r;
		cout<<"\n\tENTER ITEM I-CODE : " ;
		gets(icc);
		cout<<"\n\tENTER NO OF COPIES REQUIRED : " ;
		cin>>noc_r;

	}
} R ;
class purchase
{
	public :
	int noc_p , temp_p ;
	char icc[10] ;
	purchase()
	{
		temp_p = 0 ;
	}
	~purchase()
	{
		temp_p = 0 ;
	}
	void enter_p()
	{
		cout<<"\n\tENTER ITEM I-CODE : " ;
		gets(icc) ;
		cout<<"\n\tENTER NO OF COPIES REQUIRED : " ;
		cin>>noc_p;
	}
} P;
void tools()
{
	clrscr();
	cleardevice();
}
void inshop_layout()
{
	tools();
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
	outtextxy((getmaxx()/2)-120,(getmaxy()/2)-140,"IN SHOP");
	line((getmaxx()/2),(getmaxy()/2)-70,(getmaxx()/2),getmaxy()/2+30);
	line(getmaxx()/2-200,getmaxy()/2+30,getmaxx()/2+200,getmaxy()/2+30);
	line(getmaxx()/2-200,getmaxy()/2+30,getmaxx()/2-200,getmaxy()/2+120);
	line(getmaxx()/2+200,getmaxy()/2+30,getmaxx()/2+200,getmaxy()/2+120);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	outtextxy(getmaxx()/2-255,getmaxy()/2+130,"1.PURCHASE");
	outtextxy(getmaxx()/2+145,getmaxy()/2+130,"2.RETURN");
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tIN THE SHOP\n\t\t"<<asctime(ti);
	his_write.close();
	gotoxy(28,21);
	cout<<"ENTER CHOICE ( 1 , 2 ) : " ;
}
class list
{
	public :
	int price , noc ;
	char ic[10] ;
	char brand[23] , item[23] , processor[23] ;
	list()
	{
		price = noc = 0 ;
	}
	~list()
	{
		price = noc = 0 ;
	}
	void enter()
	{
		cout<<"\tENTER ITEM CODE : " ;
		gets(ic) ;
		cout<<"\n\tENTER ITEM NAME : " ;
		gets(item);
		cout<<"\tENTER BRAND : " ;
		gets(brand);
		cout<<"\tENTER PROCESSOR : " ;
		gets(processor);
		cout<<"\tENTER PRICE : " ;
		cin>>price ;
		cout<<"\tENTER NO OF COPIES AVAILABLE : " ;
		cin>>noc ;
	}
	void disp()
	{
		cout<<"\n" ;
		cout<<ic ;
		cout<<"       "<<item<<"      "<<brand<<"\t\t"<<processor<<"\t\t    "<<price<<"\t   "<<noc ;
	}
};
void itemshop()
{
	tools();
	cout<<"\n\t\t\t ITEMS IN THE SHOP " ;
	cout<<"\nI-CODE   ITEM\t      BRAND\t        PROCESSOR\t   PRICE   NOC " ;
	cout<<"\n";
	list L ;
	ifstream listr(location_list,ios::binary|ios::app);
	listr.seekg(0);
	while(listr.read((char *)&L,sizeof(L)))
	{
		L.disp();
	}
	setcolor(WHITE);
	listr.close();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tSEEN THE ITEMS IN THE SHOP\n\t\t"<<asctime(ti);
	his_write.close();
	getch();
}
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void randomize ( int arr[], int n )
{
	srand ( time(NULL) );
	for (int i = n-1; i > 0; i--)
	{
		int j = rand() % (i+1);
		swap(&arr[i], &arr[j]);
	}
}
void elsehis()
{
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tITEM NOT AVAILABLE IN THE SHOP\n\t\t"<<asctime(ti);
	his_write.close();
}
void purchase_main()
{
	tools();
	long int refral ;
	randomize();
	refral=random(10000000)+100000000;
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
	outtextxy(getmaxx()/2-200,getmaxy()/2-210,"PURCHASE");
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tWENT TO PURCHASE ITEM\n\t\t"<<asctime(ti);
	his_write.close();
	gotoxy(10,15);
	char cc[10] ;
	purchase P ;
	list L ; float price ; float net_price ;
	P.enter_p();
	fstream fin(location_list,ios::binary|ios::in|ios::out);
	if(!fin)
		cout<<"\n\t error " ;
	else
	{
	     long pos ;
		while(!fin.eof())
		{
			pos=fin.tellg();
			fin.read((char*)&L,sizeof(L));
			if(strcmp(P.icc,L.ic)==0)
			{
				L.noc=L.noc-P.noc_p;
				fin.seekg(pos);
				fin.write((char*)&L,sizeof(L));
				tools();
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,10);
				outtextxy(getmaxx()/2-120,getmaxy()/2-260,"BILL");
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				outtextxy(getmaxx()/2-165,getmaxy()/2-70,"ITEM NAME : ");
				gotoxy(55,12);
				cout<<L.item;
				outtextxy(getmaxx()/2-165,getmaxy()/2-35,"NO OF COPIES : ");
				gotoxy(55,14);
				cout<<P.noc_p;
				outtextxy(getmaxx()/2-165,getmaxy()/2,"AMOUNT : ");
				outtextxy(getmaxx()/2-165,getmaxy()/2+25,"(WITHOUT TAXES)");
				gotoxy(55,16);
				price=P.noc_p*L.price;
				cout<<price<<" $";
				outtextxy(getmaxx()/2-165,getmaxy()/2+140,"NET AMOUNT TO BE PAID : ");
				outtextxy(getmaxx()/2-165,getmaxy()/2+165,"(INCLUDING TAXES)");
				net_price=((price*18)/100)+price;
				gotoxy(55,25);
				cout<<net_price<<" $";
				outtextxy(getmaxx()/2-165,getmaxy()/2+93,"YOUR REFRAL CODE : ");
				gotoxy(55,22);
				cout<<refral;
				ofstream rc(location_refral,ios::app);
				rc<<refral<<"\t"<<P.icc<<"\t"<<P.noc_p<<"\n";
				rc.close();
				ifstream ac(location_account);
				ac.seekg(0);
				while(!ac.eof())
				{
					ac>>ac_amount;
				}
				ac.close();
				ofstream acc(location_account,ios::trunc);
				ac_amount=ac_amount+net_price;
				acc<<ac_amount;
				acc.close();
				ofstream tra(location_tran,ios::app);
				tra<<"\n\tDEPOSITED "<<net_price<<"$\t\t"<<asctime(ti);
				tra.close();
				ofstream his_write(location_history,ios::app);
				time_t tt;
				struct tm * ti ;
				time(&tt);
				ti=localtime(&tt);
				his_write<<"\n\tPURCHASED "<<P.noc_p<<" "<<L.item<<"\n\t\t"<<asctime(ti);
				his_write<<"\t\t\tDEPOSITED "<<net_price;
				his_write<<"\n\t\t\t\tNET BALANCE LEFT IN ADMIN ACCOUNT : "<<ac_amount;
				his_write.close();
				goto l3 ;
			}
		}
		cout<<"\n\t\tITEM NOT FOUND WITH SAME SPECIFICATIONS " ;
		elsehis();
		l3 :
		fin.close();
	}
}
void return_main()
{
	tools();
	char cic[10] ;
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
	outtextxy(getmaxx()/2-140,getmaxy()/2-210,"RETURN");
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	setcolor(RED);
	outtextxy(getmaxx()/2+130,getmaxy()/2-105,"!! ONLY 50% PRICE WILL BE");
	outtextxy(getmaxx()/2+130,getmaxy()/2-90,"REFUNDED !!");
	setcolor(WHITE);
	location_transfer();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tWENT TO RETURN ITEM\n\t\t"<<asctime(ti);
	his_write.close();
	gotoxy(10,15); long float net_price_r;
	list L ; char ch , item[23] , brand[23] , processor[23] ; int noc ;
	R.enter_r(); long int refral ;
	fstream rc(location_refral,ios::in|ios::out);
	fstream fin(location_list,ios::binary|ios::in|ios::out);
	rc.seekg(0);
	long pos_r;
	while(!rc.eof())
	{
		rc>>refral;
		rc.get(ch);
		rc>>cic;
		rc.get(ch) ;
		pos_r=rc.tellg();
		rc>>noc;
		rc.get(ch);
		if(refral==R.refral_r)
		{
			if(R.noc_r<=noc)
			{
				if(strcmp(cic,R.icc)==0)
				{
					fin.seekg(0);
					long pos ;
					while(!fin.eof())
					{
						pos=fin.tellg();
						fin.read((char*)&L,sizeof(L));
						if((strcmp(cic,L.ic)==0))
						{
							L.noc=L.noc+R.noc_r;
							fin.seekg(pos);
							fin.write((char*)&L,sizeof(L));
							noc=noc-R.noc_r;
							rc.seekg(pos_r);
							rc<<noc<<"\n";
							rc.close();
							net_price_r=(L.price*R.noc_r*50)/100;
							ifstream ac(location_account);
							ac.seekg(0);
							while(!ac.eof())
							{
								ac>>ac_amount;
							}
							ac.close();
							ofstream acc(location_account,ios::trunc);
							ac_amount=ac_amount-net_price_r;
							acc<<ac_amount;
							acc.close();
							cout<<"\n\tYOU RECIEVED : "<<net_price_r<<" $";
							ofstream tr(location_tran,ios::app);
							tr<<"\n\tDEBITTED "<<net_price_r<<"$\t\t"<<asctime(ti);
							ofstream his_write(location_history,ios::app);
							time_t tt;
							struct tm * ti ;
							time(&tt);
							ti=localtime(&tt);
							his_write<<"\n\tRETURNED "<<R.noc_r<<" "<<L.item<<"\n\t\t"<<asctime(ti);
							his_write<<"\t\t\tDEBITTED "<<net_price_r;
							his_write<<"\n\t\t\t\tNET BALANCE LEFT IN ADMIN ACCOUNT : "<<ac_amount;
							his_write.close();
							goto l4 ;

						}
					}
				}
				else
					goto l6 ;
			}
			else
				goto l5 ;
		}
	}
	cout<<"\n\tREFRAL CODE NOT FOUND" ;
	goto l4 ;
	l5 :
	cout<<"\n\tNO OF COPIES ARE NOT PURCHASED FROM THE SHOP " ;
	goto l4 ;
	l6 :
	cout<<"\n\tENTER INFORMATION ABOUT THE ITEM IS INCORRECT " ;
	l4 :
}
void starting()
{
	setcolor(WHITE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
	outtextxy(65,100,"COMPUTER SHOP");
	line(getmaxx()/2,170,getmaxx()/2,300);
	line(105,250,535,250);
	line(105,250,105,300);
	line(535,250,535,300);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	outtextxy(65,315,"1.ADMIN");
	outtextxy((getmaxx()/2)-30,315,"2.USER");
	outtextxy(435,315,"3.ITEMS IN SHOP");
	gotoxy(21,25);
	cout<<"ENTER CHOICE ( 1,2,3,4-exit ) : ";
	location_transfer();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON THE MAIN SCRREN\n\t\t"<<asctime(ti);
	his_write.close();

}
void loading1()
{
	int i ;
	char ch ;
	ifstream fin(location_loading);
	fin.seekg(0);
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
		delay(0.5);
	}
}
void pass_crack()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON THE SECRET SCREEN\n\t\t"<<asctime(ti);
	his_write.close();
	char pass[16] , r_pass[16] , newpass[16] ;
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-210,getmaxy()/2-25,"ENTER THE LAST PASSWORD YOU REMEMBER ");
	gotoxy(35,17);
	for(int j = 0 ; ; j++)
	{
		pass[j]=getch();
		if(pass[j]!=13)
			cout<<(char)1;
		else
		{
			pass[j]='\0';
			break;
		}
	}
	char ch ;  int flag , te , xx , temp ;
	temp = flag = te = 0 ;
	ifstream fc(location_nop);
	fc>>xx;
	fc.close();
	ifstream fin(location_pass,ios::app);
	if(!fin)
		cout<<"error"   ;
	fin.seekg(0);
	while(temp<xx)
	{
		fin>>r_pass;
		fin.get(ch);
		if(strcmp(pass,r_pass)==0)
		{
			flag++;
			ifstream f(location_pass,ios::app);
			if(!fin)
				cout<<"error"   ;
			f.seekg(0);
			while(te<xx)
			{
				f>>newpass;
				f.get(ch);
				te++;
			}
			gotoxy(35,19);
			cout<<newpass;
			break ;
		}
		temp++;
	}
	if(flag==0)
	{
		tools();
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		outtextxy(getmaxx()/2-240,getmaxy()/2-25,"ENTERED PASS DIDN'T MATCHED ");
	}
}
void lock1()
{
	tools();
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
}
void lock()
{
	tools();
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
	delay(500);
}
void change_p()
{
	char newpass[16] , ch ; int x ;
	int s , i , q ;
	ifstream d(location_nop);
	d>>x;
	d.close();
	ofstream dd(location_nop,ios::trunc);
	ofstream fc(location_pass,ios::app);
	randomize();
	s=random(6)+6;
	for(i=0;i<s;i++)
	{
		q=random(9);
		switch(q)
		{
			case 0 :{
				newpass[i]=random(26)+65;
				break;
			}
			case 1 : {
				newpass[i]=random(26)+97;
				break;
			}
			case 2 : {
				newpass[i]=random(10)+48;
				break;
			}
			case 3 :{
				newpass[i]=random(26)+65;
				break;
			}
			case 4 : {
				newpass[i]=random(26)+97;
				break;
			}
			case 5 : {
				newpass[i]=random(10)+48;
				break;
			}
			case 6 :{
				newpass[i]=random(26)+65;
				break;
			}
			case 7 : {
				newpass[i]=random(26)+97;
				break;
			}
			case 8 : {
				newpass[i]=random(10)+48;
				break;
			}
		}
	}
	newpass[i]='\0';
	fc<<newpass<<"\n";
	x++;
	dd<<x;
	fc.close();
	dd.close();
}
void change_pp()
{
	char newpass[16]; int gh ;
	ifstream z(location_nop);
	z>>gh;
	z.close();
	outtextxy(getmaxx()/2-95,getmaxy()/2-70," ENTER NEW PASS ");
	gotoxy(37,16);
	flushall();
	for(int j = 0 ; ; j++)
	{
		newpass[j]=getch();
		if(newpass[j]!=13)
			cout<<(char)1;
		else
		{
			newpass[j]='\0';
			break;
		}
	}
	ofstream g(location_nop,ios::trunc);
	ofstream fout(location_pass,ios::app);
	fout<<newpass<<"\n";
	gh++;
	g<<gh;
	g.close();
	outtextxy(getmaxx()/2-93,getmaxy()/2+50,"PASSWORD CHANGED");
	fout.close();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tPASSWORD CHANGED THROUGH QUESTION_ANSWER\n\t\t"<<asctime(ti);
	his_write.close();
}
void pur()
{
	tools(); long float ac_ , pr ;
	ifstream accc(location_account);
	accc.seekg(0);
	accc>>ac_;
	accc.close();
	ofstream fa(location_list,ios::binary|ios::app);
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	list A , b ;
	cout<<"\n\n\n";
	A.enter();      int flag = 0 ;
	pr=A.noc*A.price;
	ifstream fd(location_list,ios::binary);
	fd.seekg(0);
	while(!fd.eof())
	{
		fd.read((char*)&b,sizeof(b));
		if((strcmp(A.item,b.item)==0)&&(strcmp(A.brand,b.brand)==0)&&(strcmp(A.processor,b.processor)==0)&&(strcmp(A.ic,b.ic)==0))
		flag++;
	}
	fd.close();
	if(flag==0)
	{
		if(pr<=ac_)
		{
			ofstream trr(location_tran,ios::app);
			trr<<"\n\tDEBITTED "<<pr<<"$\t\t"<<asctime(ti);
			fa.write((char*)&A,sizeof(A));
			his_write<<"\n\tADDED NEW ITEM IN THE SHOP \n\t\t"<<A.noc<<" COPIES OF "<<A.item<<"\n\t\t\t"<<asctime(ti);
			ac_=ac_-pr;
			ofstream fac(location_account,ios::trunc);
			fac<<ac_;
			fac.close();
		}
		else
			cout<<"\n\t\tACCOUNT DO NOT HAVE MONEY ! " ;
	}
	else
		cout<<"\n\t\tITEM ALREADY EXISTS " ;
	fa.close();
	his_write.close();
}
class dele
{
	public :
	char nm_[23] , br_[23] , pr_[23] ;
	dele()
	{
		strcpy(nm_,"null");
		strcpy(br_,"null");
		strcpy(pr_,"null");
	}
	~dele()
	{
		strcpy(nm_,"null");
		strcpy(br_,"null");
		strcpy(pr_,"null");
	}
	void enter()
	{
		cout<<"\n\tENTER ITEM I-CODE : " ;
		gets(nm_);
	}
} ;
void modi_shop()
{
	r111 :
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON THE MODIFICATION WINDOW\n\t\t"<<asctime(ti);
	his_write.close();
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(getmaxx()/2-230,getmaxy()/2-160,"MODIFICATION IN SHOP ");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-220,getmaxy()/2-25,"1. ADD ITEMS IN THE SHOP ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+10,"2. REMOVE ITEMS FROM THE SHOP ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+45,"3. MODIFY ITEMS IN THE SHOP ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+75,"4. SEE ITEMS IN THE SHOP ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+110,"5. TO GO BACK ");
	int chr ; char ch ;
	gotoxy(40,25);
	cin>>chr;
	if(chr==1)
	{
		do {
			pur();
			cout<<"\n\tWANT TO ADD ITEM, CONTINUE ( Y/N ) ? ";
			cin>>ch;
		   }while(ch=='y'||ch=='Y');
	}
	else if(chr==2)
	{
		tools();
		ofstream his_write(location_history,ios::app);
		time_t tt;    char c ;
		struct tm * ti ;
		time(&tt);
		ti=localtime(&tt);
		his_write<<"\n\tON THE REMOVING WINDOW\n\t\t"<<asctime(ti);
		his_write.close();
		r11 :
		tools();
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
		outtextxy(getmaxx()/2-35,getmaxy()/2-160,"SHOP");
		outtextxy(getmaxx()/2-275,getmaxy()/2-200,"REMOVE ITEMS FROM THE ");
		settextstyle(SMALL_FONT,HORIZ_DIR,5);
		setcolor(RED);
		outtextxy(getmaxx()/2+130,getmaxy()/2-105,"!! ONLY 80% PRICE WILL BE");
		outtextxy(getmaxx()/2+130,getmaxy()/2-90,"REFUNDED !!");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		setcolor(WHITE);
		outtextxy(getmaxx()/2-220,getmaxy()/2+10,"1. REMOVE ALL ITEMS FROM THE SHOP ");
		outtextxy(getmaxx()/2-220,getmaxy()/2+45,"2. REMOVE SPECIFIC ITEMS FROM THE SHOP ");
		int chd;long float ac_acc , sum ;
		sum=0; list l ;
		gotoxy(40,25);
		cin>>chd;
		if(chd==1)
		{
			cout<<"\n\t\t SURE, WANNA CONTINUE (Y/N) : " ;
			cin>>c;
			if(c=='y'||c=='Y')
			{
				ifstream ac(location_account);
				ac.seekg(0);
				while(!ac.eof())
				{
					ac>>ac_acc;
				}
				ac.close();
				ifstream d(location_list,ios::binary);
				d.seekg(0);
				while(d.read((char*)&l,sizeof(l)))
				{
					sum=sum+(l.noc*l.price);
				}
				d.close();
				ofstream trrr(location_tran,ios::app);
				trrr<<"\n\tDIPOSITTED "<<(sum*80)/100<<"$\t\t"<<asctime(ti);
				ac_acc+=(sum*80)/100;
				ofstream dd(location_account,ios::trunc);
				dd<<ac_acc;
				dd.close();
				remove(location_list);
			}
			else if(c!='n'&&c!='N')
			{
				cout<<"\n\tWRONG CHOICE " ;
				delay(1500);
				goto r11 ;
			}
		}
		else if(chd==2)
		{
			tools();
			list D ; char found = 't' ;
			dele DE ;
			cout<<"\n\n\t\tENTER THE DETAILS OF THE ITEM TO DELETE " ;
			DE.enter();     long float ac_a , summ ;
			ifstream ac_c(location_account);
			ac_c.seekg(0);
			while(!ac_c.eof())
				ac_c>>ac_a;
			ac_c.close();
			ifstream fl(location_list,ios::binary);
			ofstream fw(location_temp,ios::binary|ios::app);
			fl.seekg(0);
			while(!fl.eof())
			{
				fl.read((char*)&D,sizeof(D));
				if((strcmp(DE.nm_,D.ic)==0))
				{
					summ=D.noc*D.price;
					ac_a+=(summ*80)/100;
					ofstream fca(location_account,ios::trunc);
					fca<<ac_a;
					fca.close();
					ofstream trrrr(location_tran,ios::app);
					trrrr<<"\n\tDIPOSITTED "<<(summ*80)/100<<"$\t\t"<<asctime(ti);

					found='y';
				}
				else
					fw.write((char*)&D,sizeof(D));
			}
			fl.close();
			fw.close();
			if(found=='t')
			{
				cout<<"\n\t\tITEM NOT FOUND IN THE SHOP " ;
				getch();
			}
			else
			{
				remove(location_list);
				rename(location_temp,location_list);
				remove(location_temp);
				cout<<"\n\n\n\t\tSUCCESSFULLY DELETED";
				getch();
			}
		}
	}
	else if(chr==3)
	{
		tools();
		dele DM ;
		char cc ;         long float ac__ , net_p ;
		int nn ;
		int n , p ;
		char found = 't' ;
		list M ;
		cout<<"\n\n\tENTER THE DETAILS OF THE ITEM TO BE MODIFIED";
		DM.enter();
		ifstream faa(location_account);
		faa.seekg(0);
		while(!faa.eof())
		{
			faa>>ac__;
		}
		faa.close();
		fstream fm(location_list,ios::in|ios::out|ios::binary);
		fm.seekg(0);
		long pos;
		while(!fm.eof())
		{
			pos = fm.tellg();
			fm.read((char*)&M,sizeof(M));
			n = M.noc ;
			p = M.price ;
			if((strcmp(DM.nm_,M.ic)==0))
			{
				cout<<"\n\t\tENTER NEW DETAILS OF THE ITEM ";
				M.enter();
				if(M.noc<n || M.noc>n)
				{
					cout<<"\n\t\tSURE, WANNA CONTINUE ( Y/N ) " ;
					cout<<"\n\t ( THE NET AMOUNT WILL BE DEPOSITED IN THE ACCOUNT ) " ;
					cin>>cc;
					if(cc=='N')
						goto r12 ;
					else if(cc=='Y')
					{
						if(M.noc<n)
						{
							nn=n-M.noc;
							net_p=(nn*p*80)/100;
							ac__=ac__+net_p;
							ofstream trrr(location_tran,ios::app);
							trrr<<"\n\tDIPOSITTED "<<net_p<<"$\t\t"<<asctime(ti);
							trrr.close();
						}
						if(M.noc>n)
						{
							nn=n-M.noc;
							net_p=(nn*p);
							ac__=ac__-net_p;
							ofstream trrrr(location_tran,ios::app);
							trrrr<<"\n\tDEBITTED "<<net_p<<"$\t\t"<<asctime(ti);
							trrrr.close();
						}

					}
				}
				fm.seekg(pos);
				fm.write((char*)&M,sizeof(M));
				found='y';
				break ;
			}
		}
		if(found!='y')
		{
			cout<<"\n\tENTERED ITEM NOT FOUND " ;
			getch();
		}
		r12 :
		ofstream fab(location_account,ios::trunc);
		fab<<ac__;
		fab.close();
	}
	else if(chr==4)
		itemshop();
	else if(chr==5)
		goto r22;
	goto r111 ;
	r22:
}
void see_his()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON HISTORY WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	char ch ;
	ifstream his(location_history);
	his.seekg(0);
	while(!his.eof()&&!kbhit())
	{
		his.get(ch);
		cout<<ch;
		delay(20);
	}
	his.close();
	getch();
}
void draww()
{
	setcolor(BLACK);
	for(int xx=0 ; xx<=150 ; xx++ )
		rectangle(getmaxx()/2-xx,getmaxy()/2-xx,getmaxx()/2+xx,getmaxy()/2+xx);
	setcolor(WHITE);
	rectangle(getmaxx()/2-xx,getmaxy()/2-xx,getmaxx()/2+xx,getmaxy()/2+xx);
}
void change()
{
	r1 :
	tools();
	int w , ttt ; ttt = 0 ;
	char n1[16] , newpass[16]  , ch , pass[16] ;
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON CHANGE PASSWORD WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	ifstream q(location_nop);
	q>>w;
	q.close();
	ifstream fin(location_pass,ios::app);
	if(!fin)
		cout<<"error"   ;
	fin.seekg(0);
	while(ttt<w)
	{
		fin>>newpass;
		fin.get(ch);
		ttt++;
	}
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\n\n\t\tCURRENT PASSWORD : " ;
	setcolor(WHITE);
	rectangle(278,157,378,177);//100,20
	flushall();
	for(int j = 0 ; ; j++)
	{
		pass[j]=getch();
		if(pass[j]!=13)
			cout<<(char)1;
		else
		{
			pass[j]='\0';
			break;
		}
	}
	cout<<"\n\n\n\n\n";
	if(strcmp(pass,newpass)!=0)
	{
		cout<<"\n\n\n\t\t\t    INCORRECT PASSWORD " ;
		setcolor(RED);
		for(int jj = 0 ; jj<=15 ; jj++)
			rectangle(jj,jj,620-jj,480-jj);
		setcolor(WHITE);
	}
	else
	{
		cout<<"\n\n\t\tNEW PASSWORD : ";
		rectangle(246,268,346,288);//100,20
		flushall();
		for(int j = 0 ; ; j++)
		{
			newpass[j]=getch();
			if(newpass[j]!=13)
				cout<<(char)1;
			else
			{
				newpass[j]='\0';
				break;
			}
		}
		cout<<"\n\n\t\tRE-ENTER THE PASSWORD : " ;
		rectangle(317,301,417,321);//100,20
		flushall();
		for(j = 0 ; ; j++)
		{
			n1[j]=getch();
			if(n1[j]!=13)
				cout<<(char)1;
			else
			{
				n1[j]='\0';
				break;
			}
		}
		if(strcmp(n1,newpass)==0)
		{
			int sp , score , alp , no ;
			sp = alp = no = score = 0 ;
			for(int xv=0 ; n1[xv]!='\0' ; xv++)
			{
				if(n1[xv]>=1&&n1[xv]<=47)
					sp=sp+3;
				else if(n1[xv]>=48&&n1[xv]<=57)
					no=no+2;
				else
					alp=alp++;
			}
			score = sp + alp + no ;
			char cv;
			//5 alp//2sp//2no//score = 15//w=7//m=12
			if (score <= 7 )
			{
				draww();
				outtextxy(getmaxx()/2-145,getmaxy()/2-130,"YOUR PASSWORD STREANGTH IS " );
				setcolor(RED);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
				outtextxy(getmaxx()/2-43,getmaxy()/2-70,"WEAK");
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(WHITE);
				outtextxy(getmaxx()/2-145,getmaxy()/2-15,"C. CONTINUE");
				outtextxy(getmaxx()/2-145,getmaxy()/2+10,"R. RE - ENTER");
				outtextxy(getmaxx()/2-145,getmaxy()/2+35,"E. EXIT WINDOW");
				gotoxy(39,20);
				cin>>cv;
				if(cv=='C'||cv=='c')
					goto c1 ;
				else if(cv=='R'||cv=='r')
					goto r1 ;
				setcolor(WHITE);
			}
			else if (score > 7 && score <= 12 )
			{
				draww();
				outtextxy(getmaxx()/2-145,getmaxy()/2-130,"YOUR PASSWORD STREANGTH IS " );
				setcolor(YELLOW);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
				outtextxy(getmaxx()/2-58,getmaxy()/2-67,"MEDIUM");
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(WHITE);
				outtextxy(getmaxx()/2-145,getmaxy()/2-15,"C. CONTINUE");
				outtextxy(getmaxx()/2-145,getmaxy()/2+10,"R. RE - ENTER");
				outtextxy(getmaxx()/2-145,getmaxy()/2+35,"E. EXIT WINDOW");
				gotoxy(39,20);
				cin>>cv;
				if(cv=='C'||cv=='c')
					goto c1 ;
				else if(cv=='R'||cv=='r')
					goto r1 ;
				setcolor(WHITE);
			}
			if (score > 12 )
			{
				draww();
				outtextxy(getmaxx()/2-145,getmaxy()/2-130,"YOUR PASSWORD STREANGTH IS " );
				setcolor(GREEN);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
				outtextxy(getmaxx()/2-56,getmaxy()/2-67,"STRONG");
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(WHITE);
				outtextxy(getmaxx()/2-145,getmaxy()/2-15,"C. CONTINUE");
				outtextxy(getmaxx()/2-145,getmaxy()/2+10,"R. RE - ENTER");
				outtextxy(getmaxx()/2-145,getmaxy()/2+35,"E. EXIT WINDOW");
				gotoxy(39,20);
				cin>>cv;
				if(cv=='C'||cv=='c')
					goto c1 ;
				else if(cv=='R'||cv=='r')
					goto r1 ;
				setcolor(WHITE);
			}
			c1 :
			if(cv!='E'&&cv!='e')
			{
			settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
			ofstream g(location_nop,ios::trunc);
			ofstream fout(location_pass,ios::app);
			fout<<newpass<<"\n";
			w++;
			g<<w;
			g.close();
			outtextxy(getmaxx()/2-93,getmaxy()/2+100,"PASSWORD CHANGED");
			fout.close();
			setcolor(GREEN);
			for(int jjj = 0 ; jjj<=15 ; jjj++)
				rectangle(jjj,jjj,620-jjj,480-jjj);
			setcolor(WHITE);
			ofstream his_write(location_history,ios::app);
			time_t tt;
			struct tm * ti ;
			time(&tt);
			ti=localtime(&tt);
			his_write<<"\n\tPASSWORD CHANGED THROUGH ADMIN\n\t\t"<<asctime(ti);
			his_write.close();
			}
		}
		else
		{
			cout<<"\n\n\n\t\t\t   PASSWORD DIDNT MATCHED " ;
			setcolor(RED);
			for(int jj = 0 ; jj<=15 ; jj++)
				rectangle(jj,jj,620-jj,480-jj);
			setcolor(WHITE);
		}
	}
	getch();
}
void chq()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON CHANGE QUESTION ANSWER WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	char qf[23] , af[10] , uq[23] , ua[10] ;
	int temp = 0 ;
	ifstream qq(location_q);
	ifstream aa(location_ans);
	qq.seekg(0);
	aa.seekg(0);
	while(temp<1)
	{
		qq.getline(qf,50);
		temp++;
	}
	qq.close();
	temp = 0 ;
	while(temp<1)
	{
		aa.getline(af,20);
		temp++;
	}
	aa.close();
	cout<<"\n\n\n\n\n\n\t\tENTER NEW QUESTION : " ;
	gets(uq);
	cout<<"\n\n\t\tENTER NEW ANSWER : " ;
	gets(ua);
	outtextxy(getmaxx()/2-110,getmaxy()/2+100,"QUESTION-ANSWER CHANGED");
	ofstream nq(location_q,ios::trunc);
	ofstream na(location_ans,ios::trunc);
	nq<<uq;
	na<<ua;
	nq.close();
	na.close();
	ofstream hiss_write(location_history,ios::app);
	time(&tt);
	ti=localtime(&tt);
	hiss_write<<"\n\tQUESTION-ANSWER CHANGED THROUGH ADMIN\n\t\t"<<asctime(ti);
	hiss_write.close();
	getch();
}
void css()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON CHANGE QUESTION ANSWER WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	long int sss ;
	cout<<"\n\n\n\n\n\n\t\tENTER NEW SECRET SCREEN CODE : " ;
	cin>>sss;
	ofstream s(location_ss,ios::trunc);
	s<<sss;
	s.close();
	outtextxy(getmaxx()/2-100,getmaxy()/2+100,"CODE CHANGED CHANGED");
	getch();
}
void ss()
{
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON SECURITY SYSTEM WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	int cho ;
	b1 :
	tools();
	setcolor(WHITE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(getmaxx()/2-240,getmaxy()/2-185,"SECURITY SYSTEM BLOCK");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-220,getmaxy()/2-25,"1. CHANGE PASSWORD ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+10,"2. CHANGE THE SECURITY QUESTION ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+45,"3. CHANGE SECRET SCREEN CODE ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+75,"4. SEE HISTORY ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+110,"5. TO GO BACK ");
	gotoxy(40,25);
	cin>>cho;
	if(cho==4)
	{
		see_his();
	}
	if(cho==1)
	{
		change();
	}
	if(cho==2)
	{
		chq();
	}
	if(cho==3)
	{
		css();
	}
	if(cho==5)
		goto b2 ;
	goto b1 ;
	b2 :
}
void screen_admin()
{
	line(60,90,60,390);
	line(60,90,140,90);
	line(60,165,140,165);
	line(60,240,140,240);
	line(60,315,140,315);
	line(60,390,140,390);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	gotoxy(14,6);
	cout<<"1";
	outtextxy(getmaxx()/2-170,getmaxy()/2-160,"MODIFICATION IN SHOP");
	gotoxy(14,11);
	cout<<"2";
	outtextxy(getmaxx()/2-170,getmaxy()/2-85,"BANK ACCOUNT");
	gotoxy(14,15);
	cout<<"3";
	outtextxy(getmaxx()/2-170,getmaxy()/2-10,"SECURITY SYSTEM");
	gotoxy(14,20);
	cout<<"4";
	outtextxy(getmaxx()/2-170,getmaxy()/2+65,"MODIFICATION IN FILES");
	gotoxy(14,25);
	cout<<"5";
	outtextxy(getmaxx()/2-170,getmaxy()/2+140,"PROFILE");
	outtextxy(getmaxx()/2-185,getmaxy()/2+190,"ENTER CHOICE ( 1,2,3,4,5,6 - BACK )");
	setcolor(LIGHTGRAY);
	rectangle(500,120,600,290);
	for(int i=0;i<51;i++)
	{
		line(600-i,215-i,600-i,290);
	}
	for(int j=0;j<51;j++)
	{
		line(500+j,215-j,500+j,290);
	}
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	circle(550,170,26);
	floodfill(550,170,WHITE);
	setcolor(DARKGRAY);
	rectangle(500,120,600,290);
	setcolor(WHITE);
}
void loading2()
{
	cleardevice();
		settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
		outtextxy((getmaxx()/2)-100,(getmaxy()/2)+100,"LOADING...");
	delay(4000);
}
void depo()
{
	long float amo , ac_a ;
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tDEPOSITED MONEY IN THE ACCOUNT\n\t\t"<<asctime(ti);
	his_write.close();
	b10 :
	tools();
	gotoxy(25,8);
	cout<<"ENTER THE AMOUNT TO DEPOSITE : " ;
	cin>>amo ;
	if(amo<0)
	{
		cout<<"\n\t\t\tENTER CORRECT AMOUNT " ;
		goto b10 ;
	}
	cout<<"\n\n\t\t\t    TRANSACTION PROCEEDING " ;
	rectangle(110,220,210,320);
	floodfill(180,250,WHITE);
	rectangle(410,220,510,320);
	int lb ;
	for(lb=1;lb<5;lb++)
	{
		line(210,220+(lb*20),410,220+(lb*20));
	}
	int oc , v ;
	randomize();
	for(oc=1;oc<100;oc++)
	{
		setcolor(BLACK);
		line(111,220+oc,209,220+oc);
		setcolor(WHITE);
		line(411,320-oc,509,320-oc);
		v=random(60)+10;
		delay(v);
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tTRANSACTION DONE " ;
	ofstream trrr(location_tran,ios::app);
	trrr<<"\n\tDEBITTED "<<amo<<"$\t\t"<<asctime(ti);
	trrr.close();
	ifstream fab(location_account);
	fab>>ac_a;
	fab.close();
	ac_a=ac_a+amo;
	ofstream faa(location_account,ios::trunc);
	faa<<ac_a;
	faa.close();
	getch();
}
void transs()
{
	long float amo , ac_a ;
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tDEBITTED MONEY FROM THE ACCOUNT\n\t\t"<<asctime(ti);
	his_write.close();
	ifstream fab(location_account);
	fab>>ac_a;
	fab.close();
	b10 :
	tools();
	gotoxy(25,8);
	cout<<"ENTER THE AMOUNT TO WITHDRAW : " ;
	cin>>amo ;
	if(amo<0&&amo<=ac_a)
	{
		cout<<"\n\t\t\tENTER CORRECT AMOUNT " ;
		goto b10 ;
	}
	cout<<"\n\n\t\t\t    TRANSACTION PROCEEDING " ;
	rectangle(110,220,210,320);
	rectangle(410,220,510,320);
	floodfill(480,250,WHITE);
	int lb ;
	for(lb=1;lb<5;lb++)
	{
		line(210,220+(lb*20),410,220+(lb*20));
	}
	int oc , v ;
	randomize();
	for(oc=1;oc<100;oc++)
	{
		setcolor(BLACK);
		line(411,220+oc,509,220+oc);
		setcolor(WHITE);
		line(111,320-oc,209,320-oc);
		v=random(60)+10;
		delay(v);
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tTRANSACTION DONE " ;
	ofstream trrr(location_tran,ios::app);
	trrr<<"\n\tDEBITTED "<<amo<<"$\t\t"<<asctime(ti);
	trrr.close();
	ac_a=ac_a-amo;
	ofstream faa(location_account,ios::trunc);
	faa<<ac_a;
	faa.close();
	getch();
}
void accc()
{
	b1 :
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON BANK ACCOUNT WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	int cho ;
	setcolor(WHITE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(getmaxx()/2-100,getmaxy()/2-185,"BANK ACCOUNT");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-220,getmaxy()/2-25,"1. DETAILS OF THE ACCOUNT ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+10,"2. DEPOSITE MONEY ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+45,"3. WITHDRAW MONEY ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+75,"4. SEE TRANSACTION DETAILS ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+110,"5. TO GO BACK ");
	gotoxy(40,25);
	cin>>cho;
	if(cho==1)
	{
		tools();
		ofstream his_write(location_history,ios::app);
		time_t tt;    char c ;
		struct tm * ti ;
		time(&tt);
		ti=localtime(&tt);
		his_write<<"\n\tON THE ACCOUNT DETAILS WINDOW\n\t\t"<<asctime(ti);
		his_write.close();
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
		outtextxy(getmaxx()/2-175,getmaxy()/2-185,"ACCOUNT DETAILS");
		ifstream fa_(location_account);
		long float a_c ;
		fa_.seekg(0);
		while(!fa_.eof())
		{
			fa_>>a_c;
		}
		fa_.close();
		gotoxy(17,19);
		cout<<" YOUR ACCOUNT HAVE : "<<a_c<<" $ AT PRESENT " ;
		getch();
	}
	else if(cho==2)
	{
		depo();
	}
	else if(cho==3)
	{
		transs();
	}
	else if(cho==4)
	{
		ofstream his_write(location_history,ios::app);
		time_t tt;    char c ;
		struct tm * ti ;
		time(&tt);
		ti=localtime(&tt);
		his_write<<"\n\tON TRANSACTION DETAIL WINDOW \n\t\t"<<asctime(ti);
		his_write.close();
		char ch ;
		tools();
		ifstream fl(location_tran);
		fl.seekg(0);
		cout<<"\n\n";
		while(!fl.eof()&&!kbhit())
		{
			fl.get(ch);
			cout<<ch;
			delay(20);
		}
		fl.close();
		getch();
	}
	else if(cho==5)
		goto b2 ;
	goto b1 ;
	b2 :
}
void delp()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON ERASE PREVIOUS PASSWORD FILE WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	int tr , temp ;
	char pa[16] ;
	char ch ;
	temp = 0 ;
	ifstream nw(location_nop);
	nw.seekg(0);
	nw>>tr;
	nw.close();
	ifstream np(location_pass);
	np.seekg(0);
	while(temp<tr)
	{
		np>>pa;
		np.get(ch);
		temp++;
	}
	np.close();
	ofstream tempo(location_temp,ios::trunc);
	tempo<<pa<<"\n";
	tempo.close();
	remove(location_pass);
	rename(location_temp,location_pass);
	int trr = 1 ;
	ofstream nww(location_nop,ios::trunc);
	nww<<trr;
	nww.close();
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tFILE ERASED " ;
	getch();
}
void delh()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON ERASE HISTORY FILE WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	remove(location_history);
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tFILE ERASED " ;
	getch();
}
void delt()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;    char c ;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON ERASE TRANSACTION FILE WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	remove(location_tran);
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tFILE ERASED " ;
	getch();
}
void rfr()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON REFRAL FILE WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	ifstream rfd(location_refral);
	rfd.seekg(0);
	char ch ;
	cout<<"\n\n";
	while(!rfd.eof()&&!kbhit())
	{
		rfd.get(ch);
		cout<<ch;
		delay(20);
	}
	rfd.close();
	getch();
}
void rf()
{
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON MODIFICATION OF FILES WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	r11 :
	tools();
	int cho ;
	setcolor(WHITE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(getmaxx()/2-205,getmaxy()/2-185,"MODIFICATION IN FILES");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-220,getmaxy()/2-50,"1. ERASE PREVIOUS PASSWORDS ");
	outtextxy(getmaxx()/2-220,getmaxy()/2-15,"2. ERASE HISTORY ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+20,"3. ERASE TRANSACTION FILE ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+50,"4. SEE REFRAL CODE FILE ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+85,"5. GO BACK ");
	gotoxy(60,25);
	cin>>cho;
	if(cho==1)
	{
		delp();
	}
	if(cho==2)
	{
		delh();
	}
	if(cho==3)
	{
		delt();
	}
	if(cho==4)
	{
		rfr();
	}
	if(cho==5)
		goto r22 ;
	goto r11 ;
	r22:
}
void chn()
{
	tools();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON ADMIN NAME CHANGE WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	char nnm[16];
	cout<<"\n\n\n\n\n\n\n\n\t\tENTER NEW NAME : " ;
	gets(nnm);
	ofstream nfm(location_name,ios::trunc);
	nfm<<nnm;
	nfm.close();
	getch();
}
void pro()
{
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON PROFILE WINDOW \n\t\t"<<asctime(ti);
	his_write.close();
	r11 :
	tools();
	int cho ;
	setcolor(WHITE);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	outtextxy(getmaxx()/2-100,getmaxy()/2-185,"ADMIN PROFILE");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(getmaxx()/2-220,getmaxy()/2-15,"1. CHANGE ADMIN NAME ");
	outtextxy(getmaxx()/2-220,getmaxy()/2+50,"2. GO BACK ");
	gotoxy(60,25);
	cin>>cho;
	if(cho==1)
	{
		chn();
	}
	if(cho==2)
		goto r22 ;
	goto r11 ;
	r22:
}
void id(int i)
{
	rectangle(150+i,300,250+i,450);
	circle(200+i,340,20);
	outtextxy(180+i,430,"******");
}

void admin_main()
{
	tools();
	int n ;
	int attempt , w , ttt ; ttt = 0 ;
	ifstream qq(location_nop);
	qq>>w;
	qq.close();
	ifstream att(location_attempt,ios::trunc);
	att.seekg(0);
	while(!att.eof())
		att>>attempt;
	att.close();
	ofstream his_write(location_history,ios::app);
	time_t tt;
	struct tm * ti ;
	time(&tt);
	ti=localtime(&tt);
	his_write<<"\n\tON THE ADMIN PORTAL\n\t\t"<<asctime(ti);
	his_write.close();
	outtextxy((getmaxx()/2)-165,(getmaxy()/2)-100,"VERIFICATION CODE REQUIRED");
	outtextxy((getmaxx()/2)-140,(getmaxy()/2)-25,"ADMIN CODE : ");
	rectangle(355,220,460,240);
	char newpass[16] , pass[16] ;
	char ch ;
	ifstream fin(location_pass,ios::app);
	if(!fin)
		cout<<"error"   ;
	fin.seekg(0);
	while(ttt<w)
	{
		fin>>newpass;
		fin.get(ch);
		ttt++;
	}
	gotoxy(46,15);
	n=0;
	for(int jj = 0 ; ; jj++)
	{
		pass[jj]=getch();
		n++;
		if(pass[jj]!=13)
			cout<<(char)1;
		else
		{
			pass[jj]='\0';
			break;
		}
	}
	n=n-1;
	int i , j , p , q ;
	if(strcmp(pass,newpass)!=0)
	{
		for(  i = 0;i<=200;i++)
		{
			cleardevice();
			outtextxy((getmaxx()/2)-165,(getmaxy()/2)-100,"VERIFICATION CODE REQUIRED");
			outtextxy((getmaxx()/2)-140,(getmaxy()/2)-25,"ADMIN CODE : ");
			rectangle(355,220,460,240);
			gotoxy(46,15);
			for( q=0;q<n;q++)
				cout<<(char)1;
			rectangle(150,300,250,450);
			circle(200,340,20);
			outtextxy(180,430,"******");
			rectangle(350,300,450,450);
			circle(400,340,20);
			outtextxy(380,430,"******");
			id(i);
			if(i==200)
			{
				for( j=1;j<150;j++)
				{
					cleardevice();
					outtextxy((getmaxx()/2)-165,(getmaxy()/2)-100,"VERIFICATION CODE REQUIRED");
					outtextxy((getmaxx()/2)-140,(getmaxy()/2)-25,"ADMIN CODE : ");
					rectangle(355,220,460,240);
					gotoxy(46,15);
					for(q=0;q<n;q++)
						cout<<(char)1;
					rectangle(150,300,250,450);
					circle(200,340,20);
					outtextxy(180,430,"******");
					rectangle(350,300,450,450);
					circle(400,340,20);
					outtextxy(380,430,"******");
					setcolor(GREEN);
					line(351,300+j,449,300+j);
					setcolor(WHITE);
					delay(5);
				}
			}
			delay(5);
		}
		setcolor(RED);
		for( p=0;p<10;p++)
			rectangle(p,p,getmaxx()-p,getmaxy()-p);
		setcolor(WHITE);
		getch();
		tools();
		ofstream his_write(location_history,ios::app);
		time_t tt;
		struct tm * ti ;
		time(&tt);
		ti=localtime(&tt);
		his_write<<"\n\tFAILED ATTEMPT IN ADMIN PORTAL\n\t\t"<<asctime(ti);
		his_write.close();
		outtextxy(getmaxx()/2-120,getmaxy()/2-50,"VERIFICATION FAILED");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		attempt--;
		outtextxy(getmaxx()/2-140,getmaxy()/2+25,"LEFT OVER ATTEMPTS : ");
		gotoxy(55,18);
		cout<<attempt;
		if(attempt<0)
			attempt=0;
		if(attempt>=0||attempt==0)
		{
			ofstream at(location_attempt,ios::trunc);
			at<<attempt;
			at.close();
			if(attempt==0)
			{
				lock();
				int a , b ;char cf;
				a=getmaxx()/2;b=getmaxy()/2 ;
				for(int i=getmaxx()/2,j1=getmaxy()/2;i>=100&&j1>=100;i--,j1--)
				{
					setcolor(BLACK);
					rectangle(0+a,0+b,i,j1);
					a++;
					b++;
					delay(1);
				}
				setcolor(WHITE);
				rectangle(a,b,i,j1);
				outtextxy(getmaxx()/2-125,getmaxy()/2-70,"ANSWER A QUESTION (Y,N) ");
				gotoxy(40,17);
				cin>>cf;
				if(cf=='Y')
				{
					ofstream his_write(location_history,ios::app);
					time_t tt;
					struct tm * ti ;
					time(&tt);
					ti=localtime(&tt);
					his_write<<"\n\tWENT TO ANSWER A QUESTION\n\t\t"<<asctime(ti);
					his_write.close();
					tools();
					lock1();
					int a , b ;char cf;
					a=getmaxx()/2;b=getmaxy()/2 ;
					for(int i=getmaxx()/2,j1=getmaxy()/2;i>=100&&j1>=100;i--,j1--)
					{
						setcolor(BLACK);
						rectangle(0+a,0+b,i,j1);
						a++;
						b++;
					}
					setcolor(WHITE);
					rectangle(a,b,i,j1);
					char qfile[60] , auser[23] , afile[23] ;
					ifstream fqi(location_q);
					fqi.seekg(0);
					gotoxy(26,12);
					while(!fqi.eof())
					{
						fqi.get(ch);
						cout<<ch;
					}
					fqi.close();
					ifstream fai(location_ans);
					fai.seekg(0);
					while(!fai.eof())
					{
						fai>>afile;
					}
					gotoxy(40,16);
					gets(auser);
					if(strcmp(afile,auser)==0)
					{
						setcolor(GREEN);
						for(i=0;i<10;i++)
						rectangle(i,i,getmaxx()-i,getmaxy()-i);
						delay(1000);
						goto l90 ;
					}
					else
					{
						setcolor(RED);
						for(i=0;i<10;i++)
						rectangle(i,i,getmaxx()-i,getmaxy()-i);
						delay(1000);
						goto l10 ;
					}
				}
				else if(cf!='N')
				{
					settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
					outtextxy(getmaxx()/2-65,getmaxy()/2+50,"WRONG CHOICE ");
				}
				l10 :
				change_p();
				goto l11 ;
				l90 :
				tools();
				lock1();
				a=getmaxx()/2;b=getmaxy()/2 ;
				for(i=getmaxx()/2,j1=getmaxy()/2;i>=100&&j1>=100;i--,j1--)
				{
					setcolor(BLACK);
					rectangle(0+a,0+b,i,j1);
					a++;
					b++;
				}
				setcolor(WHITE);
				rectangle(a,b,i,j1);
				change_pp();
				l11 :
			}
		}
		setcolor(WHITE);
	}
	else
	{
		for(  i = 0;i<=200;i++)
		{
			cleardevice();
			outtextxy((getmaxx()/2)-165,(getmaxy()/2)-100,"VERIFICATION CODE REQUIRED");
			outtextxy((getmaxx()/2)-140,(getmaxy()/2)-25,"ADMIN CODE : ");
			rectangle(355,220,460,240);
			gotoxy(46,15);
			for( q=0;q<n;q++)
				cout<<(char)1;
			rectangle(150,300,250,450);
			circle(200,340,20);
			outtextxy(180,430,"******");
			rectangle(350,300,450,450);
			circle(400,340,20);
			outtextxy(380,430,"******");
			id(i);
			if(i==200)
			{
				for( j=1;j<150;j++)
				{
					cleardevice();
					outtextxy((getmaxx()/2)-165,(getmaxy()/2)-100,"VERIFICATION CODE REQUIRED");
					outtextxy((getmaxx()/2)-140,(getmaxy()/2)-25,"ADMIN CODE : ");
					rectangle(355,220,460,240);
					gotoxy(46,15);
					for(q=0;q<n;q++)
						cout<<(char)1;
					rectangle(150,300,250,450);
					circle(200,340,20);
					outtextxy(180,430,"******");
					rectangle(350,300,450,450);
					circle(400,340,20);
					outtextxy(380,430,"******");
					setcolor(GREEN);
					line(351,300+j,449,300+j);
					setcolor(WHITE);
					delay(20);
				}
			}
			delay(20);
		}
		setcolor(GREEN);
		for( p=0;p<10;p++)
			rectangle(p,p,getmaxx()-p,getmaxy()-p);
		setcolor(WHITE);
		getch();
		tools();
		loading2();
		ofstream his_write(location_history,ios::app);
		time_t tt;
		struct tm * ti ;
		time(&tt);
		ti=localtime(&tt);
		his_write<<"\n\tLOGINED IN THE ADMIN PORTAL\n\t\t"<<asctime(ti);
		his_write.close();
		a2 :
		tools();
		int at = 3; int cha ;
		ofstream fa(location_attempt,ios::trunc);
		fa<<at;
		fa.close();
		ifstream fn(location_name);
		fn.seekg(0);
		char ch ;
		gotoxy(33,3);
		while(!fn.eof())
		{
			fn.get(ch);
			cout<<ch;
		}
		screen_admin();
		gotoxy(70,25);
		cin>>cha;
		if(cha==1)
		{
			modi_shop();
		}
		if(cha==2)
		{
			accc();
		}
		if(cha==3)
		{
			ss();
		}
		if(cha==4)
		{
			rf();
		}
		if(cha==5)
		{
			pro();
		}
		if(cha==6)
			goto a1 ;
		goto a2 ;
		a1 :
	}
}
void graphic4()
{
	tools();
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
}
void end()
{
		tools();
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
	tools();
		setcolor(YELLOW);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,15);
		outtextxy(50,35,"WELCOME");
		outtextxy(235,130,"TO");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
		outtextxy(80,240,"COMPUTER");
		outtextxy(190,340,"SHOP");

		settextstyle(TRIPLEX_FONT,HORIZ_DIR,15);
		outtextxy(50,35,"W");
		outtextxy(142,35,"E");
		outtextxy(218,35,"L");
		outtextxy(282,35,"C");
		outtextxy(354,35,"O");
		outtextxy(430,35,"M");
		outtextxy(526,35,"E");
		outtextxy(235,130,"T");
		outtextxy(307,130,"O");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
		outtextxy(80,240,"C");
		outtextxy(134,240,"O");
		outtextxy(191,240,"M");
		outtextxy(263,240,"P");
		outtextxy(323,240,"U");
		outtextxy(389,240,"T");
		outtextxy(443,240,"E");
		outtextxy(500,240,"R");
		outtextxy(190,340,"S");
		outtextxy(241,340,"H");
		outtextxy(307,340,"O");
		outtextxy(364,340,"P"); //21

		clrscr();
		cleardevice();
		int  i , c ;
		int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
		int n = sizeof(a)/ sizeof(a[0]);
		randomize (a, n);
		setcolor(YELLOW);
		for(i=0;i<21;i++)
		{
			c=a[i];
			if(c>=1&&c<=9)
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,15);
			else if(c>=10&&c<=21)
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
			switch(c)
			{
				case 1 : {
					outtextxy(50,35,"W");
					break;
				}
				case 2 : {
					outtextxy(142,35,"E");
					break;
				}
				case 3 : {
					outtextxy(218,35,"L");
					break;
				}
				case 4 : {
					outtextxy(282,35,"C");
					break;
				}
				case 5 : {
					outtextxy(354,35,"O");
					break;
				}
				case 6 : {
					outtextxy(430,35,"M");
					break;
				}
				case 7 : {
					outtextxy(526,35,"E");
					break;
				}
				case 8 : {
					outtextxy(235,130,"T");
					break;
				}
				case 9 : {
					outtextxy(307,130,"O");
					break;
				}
				case 10 :{
					outtextxy(80,240,"C");
					break;
				}
				case 11 : {
					outtextxy(134,240,"O");
					break;
				}
				case 12 : {
					outtextxy(191,240,"M");
					break;
				}
				case 13 : {
					outtextxy(263,240,"P");
					break;
				}
				case 14 : {
					outtextxy(323,240,"U");
					break;
				}
				case 15 : {
					outtextxy(389,240,"T");
					break;
				}
				case 16 : {
					outtextxy(443,240,"E");
					break;
				}
				case 17 : {
					outtextxy(500,240,"R");
					break;
				}
				case 18 : {
					outtextxy(190,340,"S");
					break;
				}
				case 19 : {
					outtextxy(241,340,"H");
					break;
				}
				case 20 : {
					outtextxy(307,340,"O");
					break;
				}
				case 21 : {
					outtextxy(364,340,"P");
					break;
				}
			}
			delay(120);
		}

	int aa , b ;
	aa=b=0;
	int j1 ;
	for(i=getmaxx(),j1=getmaxy();i>=0&&j1>=0;i--,j1--)
	{
		setcolor(BLUE);
		rectangle(0+aa,0+b,i,j1);
		setcolor(YELLOW);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,15);
		outtextxy(50,35,"WELCOME");
		outtextxy(235,130,"TO");
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
		outtextxy(80,240,"COMPUTER");
		outtextxy(190,340,"SHOP");
		aa++;
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
	outtextxy(175,388,"CODE : RED");
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
