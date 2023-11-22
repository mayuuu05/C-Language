//wap to calculate the factorial of n. usin for loop

#include<stdio.h>

main()
{
	int x=1;
	int factorial=1;
	
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	for(x ; x<=n ; x++)
	{
		factorial=factorial * x;
	}
	printf("%d ",factorial);
}