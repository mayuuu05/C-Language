//wap to calculate the factorial of nising while loop
#include<stdio.h>

main()
{
	int factorial =1;
	int num;
	
	printf("enter the value of num:");
	scanf("%d",&num);
	int x =1;
	while(x<=num)
	{
		factorial= factorial* x;
		x++;
	}
	printf(" %d",factorial);
}