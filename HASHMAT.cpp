#include<iostream>
using namespace std;
int main()
{
   int h,o,s;

	cout<<"Input the Hashmat's soldier and opponent's army" <<endl;
	while(cin>>h>>o)

{

	if(h<o)
	{	
		s=o-h;
		cout<<s<<endl;
	}
	if(h>o)
	{
		cout<<"Input again" <<endl;
	} 
	if((h>4294967296)&&(o>4294967296))
	{
		exit(1);
	}
	
}
	return 0;
}
