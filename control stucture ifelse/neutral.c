//2. WaP to Find if a given no. is neutral or not using
//ladder if else.

#include<stdio.h>
#include<conio.h>

main()
{
	int x;//user input
	printf("Enter the value of x:");
	scanf("%d",&x);
	if(x>0)//condition for positive value
	{
		printf("Your value is positive");
	}
	else
	{
		if(x==0)//condition for neutral value
		{
		printf("Your value is neutral");
	    }
	    else//for negative value
	    {
	    	printf("Your value is negative");
		}
	}
}