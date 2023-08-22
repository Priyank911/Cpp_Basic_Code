/* #include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter the number num1:- \n"; // "<<" is also called insertion operator.
	cin>>num1; // ">>" is also called extraction operator.
	cout<<"Enter the number num2:- \n"; 
	cin>>num2;
	cout<<"The Sum is:- \n"<<num1+num2;
}
*/

//second method to add two integer number..

#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}
