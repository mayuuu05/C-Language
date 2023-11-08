//1. find maximum from 3 number using nested. 

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of c :");
	scanf("%d",&c);
	
	if(a>b)
	{
		//a,c
		if(a>c)
		{
			//a
			printf("a is maximum");
		}
		else
		{
			//c
			printf("c is maximum");
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
			printf("b is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
}