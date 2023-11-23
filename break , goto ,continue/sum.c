//4. WAP to find the sum of n numbers using the goto statement.

#include<stdio.h>

main()
{
	int x=1,sum=0,n;
		
		printf("Enter the value : ");
		scanf("%d",&n);
		n:
		sum = sum + x;
		x++;
		
		if(n>=x)
		{
			goto n;
		}
		printf("sum is %d ",sum);
}