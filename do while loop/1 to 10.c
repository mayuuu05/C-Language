//1.wap to print 1 to 10 using do while loop.
#include<stdio.h>
#include<conio.h>

main()
{
	int n=10;
	
	int x=1;
	do
	{
		printf("%d ",x);
		x++;
	}while(x<=n);
}