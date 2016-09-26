#include<iostream>
using namespace std;
void one();
void two();
void three();
void four();
void first();
void second();
void third();
void one1();
void two2();
void three3();
void four4();
void five5();
void wandh1(int, int);
void wandh(int, int);
void width(int);
int main()
{
	int x,z,e,l,m;
	width(x);
	wandh(z,e);
	wandh1(l,m);
}
	void one()
	{
		cout<< "+-----";
	}
	void two()
	{
		cout<< "|     ";
	}
	void three()
	{
		cout<< "|     ";
	}
	void four()
	{
		cout<< "+-----";
	}
	void width(int y)
	{
		int a,b,c,d;
		{
			cout<< "Enter width ";
			cin>> y;
			for(a=0; a<y; a++)
			{
				one();
			}
			cout<< "+";
			cout<< endl;
			for(b=0; b<y; b++)
			{
				two();
			}
			cout<< "|";
			cout<< endl;
			for(c=0; c<y; c++)
			{
				three();
			}
			cout<< "|";
			cout<< endl;
			for(d=0; d<y; d++)
			{
				four();
			}
			cout<< "+";
			cout<< endl;
		}
	}
	void first()
	{
		cout<< " _  ";
	}
	void second()
	{
		cout<< "/ \\_";
	}
	void third()
	{ 
		cout<< "\\_/ ";
	}
	void wandh(int f, int g)
	{
		int h,i,j,k;
		{
			cout<< "Enter width and height ";
			cin>> f>> g;
			for(k=0; k<g; k++)
			{
				for(h=0; h<f; h++)
				{
					first();
				}
				cout<< endl;
			for(k=0; k<g; k++)
			{
				for(i=0; i<f; i++)
				{
					second();
				}
				cout<< endl;
				for(j=0; j<f; j++)
				{
					third();
				}
				cout<< endl;	
			}
			}
		}
	}
		void one1()
	{
		cout<< "  X  ";
	}
	void two2()
	{
		cout<< " / \\ ";
	}
	void three3()
	{
		cout<< "/   \\";
	}
	void four4()
	{
		cout<< "\\   /";
	}
	void five5()
	{
		cout<< " \\ / ";
	}
	void wandh1(int n, int o)
	{
		int p,q,r,s,t,u;
		{
			cout<< "Enter width and height ";
			cin>> n>> o;
			for(u=0; u<o; u++)
			{
				for(p=0; p<n; p++)
				{
					one1();
				}
				cout<< endl;
				for(q=0; q<n; q++)
				{
					two2();
				}
				cout<< endl;
				for(r=0; r<n; r++)
				{
					three3();
				}
				cout<< endl;
				for(s=0; s<n; s++)
				{
					four4();
				}
				cout<< endl;	
				for(t=0; t<n; t++)
				{
					five5();
				}
				cout<< endl;	
			}
			for(p=0; p<n; p++)
				{
					one1();
				}
				cout<< endl;
			}
			}
