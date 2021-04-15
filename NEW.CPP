#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main()
{
	clrscr();
	int i ;  int j ;
	ifstream d("C:\\TURBOC3\\PROJECT\\no.dat");
	d>>i;
	d.close();
	cout<<i;
	getch();
	char pass[16],passr[16] , ch ;
	for(j=0;;j++)
	{
		pass[j]=getch();
		if(pass[j]!=13)
		cout<<"*";
		else if(pass[j]==13)
		{
			pass[j]='\0';
			break;
		}
	}   int t =0 ;
	ofstream f("C:\\TURBOC3\\PROJECT\\try.dat",ios::app);
	ofstream g("C:\\TURBOC3\\PROJECT\\no.dat",ios::trunc);
	f<<pass<<"\n";
	i++;
	g<<i;
	g.close();
	f.close();
	cout<<i;
	getch();
	ifstream h("C:\\TURBOC3\\PROJECT\\try.dat");
	ifstream dd("C:\\TURBOC3\\PROJECT\\no.dat");
	dd>>i;
	dd.close();
	cout<<i;
	getch();
	h.seekg(0);
	while(t<i)
	{
		h>>passr;
		h.get(ch);
		t++;
	}
	cout<<"\n\t\t"<<pass;
	cout<<"\n"<<passr;
	if(strcmp(pass,passr)==0)
		cout<<"good";
	else
		cout<<"no";
	getch();
}