//4.wap to print n to 1 using while loop
#include<stdio.h>
main()
{
	//n.....3 2 1
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=n;
	while(x>=1)//condition
	{
		printf(" %d",x);
		x=x-1;
	}
}