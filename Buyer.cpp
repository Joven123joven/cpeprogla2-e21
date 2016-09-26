#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x,y,z;
	double buyerPrice[5][4], total(0);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<< "Enter five item price for each buyer \n";
	for(x=0; x<5; x++)
	{
		cout<< "Buyer #"<< x+1<< endl;
		for(y=0; y<4; y++)
		{
			cin>> buyerPrice[x][y];	
		}
	}
	cout<< setw(10)<< "Buyer"
	    << setw(28)<< "Item Price"
	    << setw(28)<< "Total Price"
	    << endl;
	for(x=0; x<5; x++)
	{
		cout<< setw(10)<< "Buyer #"<< x+1;
		total=0;
		for(y=0; y<4; y++)
		{
			cout<< setw(10)<< buyerPrice[x][y];
			total+=buyerPrice[x][y];
		}
		cout<< setw(10)<< total<< endl;
		z+=total;
	}
	cout<< "Total"<< " ";
	cout<< z;
	return 0;
}
