#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream f("input.txt");
  	int num1,num2;
  	int n;
  	int count;
  	
  while(f>>num1>>num2)
  {
  if((num1>0 && num1<1000000) && (num2>0 && num2< 1000000))
     {


   int max=0;
   int a=num1;
   int b=num2;
  		 if(num1>num2)
   		 {
   		  		a=num2;
   		  	    b=num1;
    }
 	 for(int i=a;i<=b;i++)
    {
    	 n=i;
     	count=1;
     
while(n!=1)
{
    		 if(n%2==0)
   	   	  {
   			 n=n/2;
   			 count++;
  		  }
 	else
     	  {
    		n=3*n+1;
     	 	count++;
   		  }
     }
     if(max<count)
     max=count;
}
   cout <<num1<<' '<<num2<<' '<< max<<endl;
}
}
return(0);
}
