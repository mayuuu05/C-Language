//3. Write C program to find out max from 4 numbers using nested if.

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	
	//a,b,c,d
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				//a
				printf("a is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
			
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			if(b>d)
			{
				//b
				printf("b is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
	}
}
	