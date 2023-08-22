/*
#include<stdio.h>
int main()
{
	int number, i;
	int sum=0;
	scanf("%d",&number);
	 for(i=0; i<=number; i++)
	 {
	 	sum= sum + i;
	 }
	 printf("%d",sum);
	return 0;
}


#include<iostream>
int main()
{
	int n;
	int i;
	int sum=0;
	std::cout<<"Enter the Number\n";
	std::cin>>n;
	for(i=0; i<=n; i++)
	{
		sum= sum + i;
	}
	std::cout<<"Answer is:- \n"<<sum;
	return 0;
}
*/
#include<iostream>
int main()
{
	int n;
	int sum=0;
	std::cout<<"Enter the Number\n";
	std::cin>>n;
	sum= (n*(n+1))/2;
	std::cout<<"Answer is:-"<<sum;
	return 0;
}
