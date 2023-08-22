//Notes:- There are two type of header file- (1. System header file) (2.user defined header file)

// 1. system header file are always came with compiler eg are given below:-
#include<iostream>

//2.User defined header file are always create by programer...eg are given below:-
// #include"userdefined.h" //If this "userdefined.h" header file are note present in current directory than its show a error... 
using namespace std;
int main()
{
	int a=3, b=6;
	cout<<"HI..Developer_Priyank"<<endl; //here we can also use "/n" or "endl" for new line..
	cout<<"following type of Operators in C++:-"<<endl;
	
	 //arithmetic operators
	 
	 cout<<"The value of a+b "<<a+b<<endl;
	 cout<<"The value of a-b "<<a-b<<endl;
	 cout<<"The value of a*b "<<a*b<<endl;
	 cout<<"The value of a/b "<<a/b<<endl;
	 cout<<"The value of a%b "<<a%b<<endl;
	 cout<<"The value of a++ "<<a++<<endl;
	 cout<<"The value of a-- "<<a--<<endl;
	 cout<<"The value of ++a "<<++a<<endl;
	 cout<<"The value of a-- "<<a--<<endl;
	 cout<<endl;
	 //asignment operator in c++ ---> used to assign the value of variables
	 
	/* int a=9, b=11;
	 char="p"; */
	 
	 //comparison operators
	 cout<<"Following are the comparison operators in C++:-"<<endl;  // notes:- 0=(False) , 1=(True)
	 cout<<"the value of a==b "<<(a==b)<<endl;    
	 cout<<"the value of a!=b "<<(a!=b)<<endl;
	 cout<<"the value of a>b "<<(a>b)<<endl;    
	 cout<<"the value of a<b "<<(a<b)<<endl;
	 cout<<"the value of a>=b "<<(a>=b)<<endl;
	 cout<<"the value of a<=b "<<(a<=b)<<endl;
	 cout<<endl;
	 
	 //logical operators
	 cout<<"Following are the logical operator in C++:-"<<endl;
	 cout<<"the value of logical and operators ((a=b) && (a<b)) "<<((a==b) && (a<b))<<endl;
     cout<<"the value of logical or operators ((a=b) || (a<b)) "<<((a==b) || (a<b))<<endl;
     cout<<"the value of logical not operators (!(a==b)) "<<(!(a==b))<<endl;
	 
	return 0;
}

