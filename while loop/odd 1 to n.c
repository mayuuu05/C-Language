//5. wap to print odd number from 1 to n using while loop

#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=1;
	while(x<=n)
	{
		printf(" %d",x);
		x=x+2;
	}
}