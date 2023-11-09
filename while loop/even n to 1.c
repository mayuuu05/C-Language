//6. wap to print even number from n to 1 using while loop

#include<stdio.h>
main()
{
	//
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=n;
	while(x>=2)
	{
		printf(" %d",x);
		x=x-2;
	}
}