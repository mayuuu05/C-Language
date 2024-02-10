//Write a Program to find total bill by adding % of GST of user choice.
//For example,
//Input:
//Enter Base Amount: 5000
//Enter GST% =18
//
//Output: 
//Total Bill Amount = 5900
//*
//Enter your code here. If you can not answer the question, write NA as an answer.
//10 points
#include<iostream>
using namespace std;

int main()
{
	int Base_Amount,total_bill,GST;
	cout << "Enter Base Amount: ";
	cin >> Base_Amount;
	cout << "Enter GST (in %) : ";
	cin >> GST;
	
	
	total_bill =  Base_Amount + (Base_Amount * GST / 100) ;
	
	cout << "Total Bill Amount = " << total_bill;
	
	return 0;
}
