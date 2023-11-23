//2. WAP to demonstrate the use of continue keyword.

#include<stdio.h>

main()
{
	int x,y=10,n;
	
	printf("Enter the number to break sequence : ");
	scanf("%d",&n);
	
	for(x=1 ; x<=y ; x++)
	{
		
		if(x==n)
		{
		    continue;
		}
		printf("%d ",x);
	}
}