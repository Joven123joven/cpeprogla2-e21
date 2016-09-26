#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;

double prob1(double num);
void problem2(){
int uniques [10];
int MAX = 20;
int Min = 1;
int num1; 
bool check = true; 

srand(time(NULL)); 
cout << "10 unique numbers : ";	

for (int i=0;i<10;i++){

do{
num1=rand()%MAX+Min;
check = true;
for (int j=0;j<i;j++)
if (num1 == uniques[j]) {
check = false; 
break; 
}
} while (!check); 
uniques[i]=num1;
cout << num1 << " ";
}

}

int call_by_value(int num){
if(num==1)
return 1;
else
return num*call_by_value(num-1);
}

int factorial(int n);
int main()
{
double num, result;
cout << "enter the number to be rounded off : ";
cin >> num;

result = prob1(num);
cout << result << endl << "***********************************" << endl <<endl << endl;
problem2();
cout << endl<<endl<<endl;
cout << endl << "***********************************" << endl;
int n;
cout << "Enter a positive integer: ";
cin >> n;
cout << "Factorial of " << n << " is " << factorial(n);
return 0;

}
int factorial(int n)
{
if(n!=1)
return n*factorial(n-1);
}
double prob1(double num){

return round(num);
}
