//5. wap to print odd number from 1 to n using do while loop

#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=1;
	do
	{
		printf(" %d",x);
		x=x+2;
	}while(x<=n);
}