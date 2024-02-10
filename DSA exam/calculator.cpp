//Write a Program to create a menu-driven program for create a Calculator's functionality.
//For example,
//
//Enter first number: 5
//Enter second number: 3
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//
//Enter your choice: 1
//
//Addition is 8.

#include<iostream>
using namespace std;

int main()
{
	int n;
	start :
	cout << endl <<endl <<"Enter your choice : " ;
	cout << endl << "Press 1 for +" <<endl;
	cout << "Press 2 for -" <<endl;
	cout << "Press 3 for *" <<endl;
	cout << "Press 4 for /" <<endl;
	cout << "Press 5 for %" <<endl;
	cin >> n;
	
	int a,b;
	cout << endl << "Enter the value of a : ";
	cin >> a;
	
	cout << "Enter the value of b : ";
	cin >> b;
	
	if(n==1)
	{
		cout << "Addition is : " << a+b;
		goto start;
	}
	else if(n==2)
	{
		cout << "Subtraction is : " << a-b;
		goto start;
	}
	else if(n==3)
	{
		cout << "Multipication is : " << a*b;
		goto start;
	}
	else if(n==4)
	{
		cout << "Divison is : " << a/b;
		goto start;
	}
	else if(n==5)
	{
		cout << "Modueal is : " << a%b;
		goto start;
	}
	return 0;
	
}