//Write a Program to check whether a number is even or odd using the ternary operator.
//Also validate that 
//- if user enter a number that is less than 0 will not be checked for even or odd, instead display a message that "Enter 0 or greater number".
//For example,
//Input:
//Enter any number: 12
//
//Output: 
//This number is Even.
//*
//Enter your code here. If you can not answer the question, write NA as an answer.
//10 points
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter any number : ";
	cin >> n;
	
	(n%2==0)?cout << "This number is Even.":(n<0)?cout << "This number will not be checked for even or odd": cout << "This number is odd.";

	return 0;
}