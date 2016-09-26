#include<iostream>
using namespace std;
int main()
{
	int num;
	for(num=0;num<=100;num++){
		if((num%3==0))
		{
		
			cout<<"Fizz"<<endl;
		}

		else if((num%5==0))
		{
		
		    cout<<"Buzz"<<endl;
		}
		
		
		else if((num%3==0)&&(num%5==0))
		{
		
			cout<<"FizzBuzz"<<endl;
		}
		
		
		else{
			cout<<num<<endl;
		
		}
	 }
	return 0; 
}

