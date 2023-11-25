//// 1. wap to print reversed multplication table of given number. 
#include<stdio.h>

main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int x=10;
	for(x ; x>=1 ; x--)
	{
		printf(" %d * %d = %d\n",n,x,n*x);
	}
}
