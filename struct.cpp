#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
struct grade
{
	
	int Quiz1;
	int Quiz2;
	int Quiz3;
	int Quiz4;
	int Quiz5;
	int Quiz6;
	int Quiz7;
	int Quiz8;
	int Quiz9;
	int Quiz10;
	int Quiz11;
	int Quiz12;
	int Quiz13;
	int Quiz14;
	int Quiz15;
	int ID;
	char Name[20];
};
int  main()

{
	grade mygrade;
	cout<<"Enter 5 Students Record: "<<endl;
	cout<<"Student 1: "<<endl; 
	cout<<"ID: "<<endl;
	cin>>mygrade.ID;
	
	cout<<"Name: "<<endl;
    cin>>mygrade.Name;
    
    cout<<"Enter 3 Quizzes: ";
    cin>>mygrade.Quiz1;
    cin>>mygrade.Quiz2;
    cin>>mygrade.Quiz3;
    
    //**********************//
    
    cout<<"Student 2: "<<endl; 
	cout<<"ID: "<<endl;
	cin>>mygrade.ID;
	
	cout<<"Name: "<<endl;
    cin>>mygrade.Name;
    
    cout<<"Enter 3 Quizzes: ";
    cin>>mygrade.Quiz4;
    cin>>mygrade.Quiz5;
    cin>>mygrade.Quiz6;
    
    //**************************//
    
     cout<<"Student 3: "<<endl; 
	cout<<"ID: "<<endl;
	cin>>mygrade.ID;
	
	cout<<"Name: "<<endl;
    cin>>mygrade.Name;
    
    cout<<"Enter 3 Quizzes: ";
    cin>>mygrade.Quiz7;
    cin>>mygrade.Quiz8;
    cin>>mygrade.Quiz9;
    
    //*****************************//
    
     cout<<"Student 4: "<<endl; 
	cout<<"ID: "<<endl;
	cin>>mygrade.ID;
	
	cout<<"Name: "<<endl;
    cin>>mygrade.Name;
    
    cout<<"Enter 3 Quizzes: ";
    cin>>mygrade.Quiz10;
    cin>>mygrade.Quiz11;
    cin>>mygrade.Quiz12;
    
    //*********************************//
    
     cout<<"Student 5: "<<endl; 
	cout<<"ID: "<<endl;
	cin>>mygrade.ID;
	
	cout<<"Name: "<<endl;
    cin>>mygrade.Name;
    
    cout<<"Enter 3 Quizzes: ";
    cin>>mygrade.Quiz13;
    cin>>mygrade.Quiz14;
    cin>>mygrade.Quiz15;
    
    //***********************************//
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<setw(10)<<"No. 1"<<endl;
    cout<<"No."<<endl<<1<<endl<<2<<endl<<3<<endl<<4<<endl<<5;
    cout<<setw(20)<<"Student No."<<endl;
    
    
}
