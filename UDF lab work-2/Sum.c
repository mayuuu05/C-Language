//sum using recusrion.


#include<stdio.h>

int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n + sum(n-1);
	
}
main()
{
	int n;
	printf("Enter the number of sum :");
	scanf("%d",&n);
	
	printf("Sum is : %d",sum(n));
}

