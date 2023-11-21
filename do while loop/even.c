//6. wap to print even number from n to 1 using do while loop

#include<stdio.h>
main()
{
	
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=n;
	do
	{
		printf(" %d",x);
		x=x-2;
	}while(x>=2);
}