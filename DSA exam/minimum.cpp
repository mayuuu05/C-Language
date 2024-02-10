//Write a Program to find the minimum number from the given 3 numbers using nested if else. 
//Also validate that 
//- if all numbers are same, then no minimum value can be displayed.
//- if any two numbers are same, then display appropriate message.
//For example,
//Input:
//Enter a value of the first number: 8
//Enter a value of the second number: 3
//Enter a value of the third number: 12
//
//Output:
//The minimum value is: 3
//*
//Enter your code here. If you can not answer the question, write NA as an answer.
//10 points


#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter the number of a : ";
	cin >> a;
	
	cout << "Enter the number of b : ";
	cin >> b;
	
	cout << "Enter the number of c : ";
	cin >> c;
	
	
	if(a==b && b==c && c==a)
	{
		cout << " all numbers are same .";
	}
	else
	{
		if(a<b)
		{
			if(a<c)
			{
				cout << " The minimum value is: " << a;
			}
			else
			{
				cout << " The minimum value is : " << c;
			}
		}
		else
		{
			if(b<c)
			{
				cout << "The minimum value is: " << b;
			}
			else
			{
				cout << " The minimum value is: " << c;
			}
		}

	}

	
	return 0;
}