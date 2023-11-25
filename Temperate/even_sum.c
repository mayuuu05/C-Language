//// 2. wap to find sum of even number between 1 to 28.

#include<stdio.h>

main()
{
	int x=1,n=28;
	int even_sum;
	
    for(x; x<=n ; x++)
	{
		if(x % 2==0)
		{
			printf(" %d \n",x);
			even_sum = even_sum + x;
		}
	}
	
	printf(" The sum of even number is : %d",even_sum);
	
}

