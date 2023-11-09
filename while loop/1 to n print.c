//3.wap to print 1 to 10 using while loop
#include<stdio.h>
main()
{
	//1,2,3,4,5...n
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=1;
	while(x<=n)
	{
		printf(" %d",x);
		x=x+1;
	}
}