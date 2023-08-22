#include<iostream>
using namespace std;
int main()
{
	// selection control statments 
	// If else-if ladder statement Examples;
	int age;
	cout<<"Enter the Your Age "<<endl;
	cin>>age;
	/*  if(age<18){
		cout<<"sorry,You doesn't came at party..'"<<endl;
	}
	else if(age==18){
		cout<<"Hurry, you will came at children party... "<<endl;
	}
	else{
		cout<<"You came at youngster party..."<<endl;
	}
	*/
//selection control structure: switch case statments

    switch (age)
	{
	case 18:
		  cout<<"you are 18"<<endl;
		break;
	case 20:
		  cout<<"you are 20"<<endl;
		break;
		case 22:
		  cout<<"you are 22"<<endl;
		break;

	default:
	cout<<"No special Cases";
		break;
	}
	cout<<"Done with Switch case"; 

	return 0;
}
