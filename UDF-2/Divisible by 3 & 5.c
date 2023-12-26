//Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.For example,
//Input:
//Enter any number: 15
//
//Output:
//The given number is divisible by both 3 & 5.

#include<stdio.h>

int input()
{
	int num;
	printf("Enter your value :");
	scanf("%d",&num);
	return num;
}
void divisible()
{
	int num=input();
	if(num%3==0 || num%5==0)
	{
		if(num%3==0)
		{
			printf("The given number is divisible by 3\n");
		}
		else
		{
			printf("The given number is divisible by 5\n");
		}
	}
	if(num%3==0 && num%5==0)
	{
		printf("The given number is  divisible by 3 & 5");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5");
	}
}

main()
{
	divisible();
}