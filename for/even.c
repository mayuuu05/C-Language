//6.wap to print even no. from n to 1 using for loop

#include<stdio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	int x;
	for(x=1 ; n>=x ; n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}