//9.wap to calculate the factorial of nising do while loop
#include<stdio.h>

main()
{
	int factorial =1;
	int num;
	
	printf("enter the value of num:");
	scanf("%d",&num);
	int x =1;
	do
	{
		factorial= factorial* x;
		x++;
	}while(x<=num);
	printf(" %d",factorial);
}