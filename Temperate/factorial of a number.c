//5. Write C program to calculate factorial of a number.

#include<stdio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	int factorial=1;
	int x=1;
	for(x ; x<=n ; x++)
	{
		factorial=factorial*x;
		
		
	}
	printf("The factorial of a number is : %d",factorial);
}