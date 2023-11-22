//wap to print odd no. from 1 to n using for loop

#include<stdio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	int x=1;
	for(x ; x<=n ; x=x+2)
	{
		printf(" %d",x);
		
	}
}