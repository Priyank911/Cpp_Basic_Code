#include<iostream>
using namespace std;

int c=911; // here int "c=911" is a global variables.. 
int main()
{
	/***************Build in data type*****************/
	
/*	cout<<"HI...Developer_Priyank"<<endl;
	int a, b, c;
	cout<<"Enter the Number a:- "<<endl;
	cin>>a;
	cout<<"Enter the Number b:- "<<endl;
	cin>>b;
	c= a + b;
	cout<<"The sum of a+b is:- "<<c<<endl; // notes:- always function gives first priority gives to local variables.. 
	
	//if we want to print a global variables than use (scope resolution:- " :: " )
	 cout<<"The global variables value of c is:-"<<::c; */
	 
	 /********************* float , doubles and long doubles literals**************************/
	  
	 float d=89.5f; // when we needed to uses of letter after no. when we transfer number with inforamtion...then we uses eg:- 454.5f or 45435F
	 long double e=45.6l;
//	 34.5f :-  if we run the program 34.5 by_default its take a 34.5 as a double but if we write a 34.5f by_default compiler take as a float number....
	 
	 cout<<"The value of float is "<<d<<endl<<"The value of long double is "<<e<<endl;
	 
	 // we prove that:- 
	 cout<<"The size of 34.5 "<<sizeof(34.5)<<endl; // note:- by-default taken as a double...
	 cout<<"The size of 34.5f "<<sizeof(34.5f)<<endl;
	 cout<<"The size of 34.5F "<<sizeof(34.5F)<<endl;
	 cout<<"The size of 34.5l "<<sizeof(34.5l)<<endl;
	 cout<<"The size of 34.5L "<<sizeof(34.5L)<<endl;
	 
	 //******************** References variables *******************************
	//  Priyank -----------> Piyu ---------------> developer__Priyank (all are same)
	float x=599;
	float & y = x; // here y is equal to x so that the value of y is 599....
	cout<<x<<endl;
	 cout<<y<<endl;
	 
	//********************** TypeCasting ******************************
	int p=565;
	float s=643.65;
	cout<<"The value of int p is "<<(float)p<<endl;
	cout<<"The value of float s is "<<(int)s<<endl;
	
	//examples
	cout<<"The expression is "<<p + s<<endl;
	cout<<"The expression is "<<p + int(s)<<endl;
	cout<<"The expression is "<<p + (int)s<<endl;
	
	return 0;
}
