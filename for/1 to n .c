//3.wap to print 1 to n using for loop

#include<stdio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	int x;
	for(x=1 ; x<=n ; x++)
	{
		printf("%d ",x);
	}
}