//8.wap to print sum 1 to n using for loop

#include<stdio.h>

main()
{
	int x=1;
	int sum=0;
	
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	for(x ; x<=n ; x++)
	{
		sum=sum+x;
	}
	printf("%d ",sum);
}