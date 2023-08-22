#include<iostream>
using namespace std;

int global=9; //Int global is Global Variable scope..

void sum() // void sum is function..
{
	int a;
	cout<<global;
}
int main()
{
	 // note:--- Always function First priority gives to local variables than global variables.. 
	 // note:-- can we use local and global variables as a same name:-- Ans :__Yes but first priority gives to local than global..
	 
	 int global=5;// here int global is local variable scope..
	 global=2; // but here global are update the value of global in local variables.. 
	 
	//int a=9;
	//int b=11;
	//We can also use another method
	
   	int a=9, b=11;
	float pi=3.14;
	char dev='U';
	bool is_true= true;
	
/* cout<<" Hi..Developer_Priyank.\n My Birth date is "<< a <<"\n My Birth Month is " <<b;
	
	//Here we know that \n is use for New Line..
	
	cout<<"\nThe value of pi is:- " <<pi; 
	cout<<"\n The Value of dev is:-" <<dev;
	cout<<"\n The Value of is_true is:-" <<is_true; //note its print 1==true or 0==false */

	
	cout<<global;
	sum();//here sum are call the function 
	/* from the call function it check the here any local variables are present than its check any global variables 
	are present than if availables than its print..... */
	return 0;
	
	// here it return the value :-- 29
}

// Always note that local variables gives the more important than global ( Short key:-- Precedences)...
