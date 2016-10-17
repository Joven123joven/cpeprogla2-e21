#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ifstream f("input.txt");

	int hu;

	while(f>>hu)
	{
		if ((hu%3==0)&&(hu%5==0))
		cout<<"FizzBuzz"<<endl;
		else if(hu%3==0)
			
			cout<<"Fizz"<<endl;
		
		else if(hu%5==0)
		
			cout<<"Buzz"<<endl;
		
		else
			cout<<hu<<endl;
			
	}

		
	
	
}
