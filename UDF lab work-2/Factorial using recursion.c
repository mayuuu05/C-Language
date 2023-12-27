// Factorial using recusrion.


#include<stdio.h>

int factorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a * factorial(a-1);
	
}
main()
{
	int a;
	printf("Enter the number of factorial :");
	scanf("%d",&a);
	
	printf("Factorial is : %d",factorial(a));
}

