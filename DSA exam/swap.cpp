//Write a Program to Swap two character variables using the third variable without using any function.
//Also validate that
//- if a user enter any one of the character that is greater than 'M', then display a message "Enter a character less than 'M' "
//*
//Enter your code here. If you can not answer the question, write NA as an answer.
//10 points
#include<iostream>
using namespace std;

int main()
{
	char a,b,c;
	cout << "Enter any first character : ";
	cin >> a;
	cout << "Enter any second character : ";
	cin >> b;
 
    if (a>='M' && b>='M')
    {
    	cout << "Enter a character less than 'M'";
    	
	}
	else
	{
		c = a;
		a = b;
		b = c; 
		
		cout << endl <<"After swaping character ." << endl;
		
		cout << "a is : " << a << endl;
		cout << "b is : " << b << endl; 
	}
	
	
	return 0;
}