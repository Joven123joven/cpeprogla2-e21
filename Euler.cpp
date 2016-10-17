#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream m("input.txt");
	int inf;
	int x;
	while(m>>mul)
	{
		for(int i=0;i<mul;i++)
		if((i%3==0) || (i%5==0))
		{
			x+=i;
		}
		
		cout<<x;
	}
	
}
