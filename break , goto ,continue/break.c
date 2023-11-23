//1. WAP to demonstrate the use of break keywords.

#include<stdio.h>

main()
{
	int x,y=10,n;
	
	printf("Enter the number to break sequence : ");
	scanf("%d",&n);
	
	for(x=1 ; x<=y ; x++)
	{
		printf("%d ",x);
		if(x==n)
		{
			break;
		}
		
	}
}