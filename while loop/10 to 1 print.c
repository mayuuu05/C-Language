//2.wap to print 10 to 1 using while loop
#include<stdio.h>
main()
{
	//10 9 8 7 6 5 ...1
	int n=10;
	
	int x=n;
	while(x>=1)//condition
	{
		printf(" %d",x);
		x=x-1;
	}
}