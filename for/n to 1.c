//wap to print n to 1 using for loop

#include<stdio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	int x=n;
	for(x ; x>=1 ; x--)
	{
		printf("%d ",x);
	}
}