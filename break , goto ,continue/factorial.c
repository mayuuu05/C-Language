//3. WAP to find the n number factorial without a loop. (using a goto statement).

#include<stdio.h>

main()
{
		int x=1,factorial=1,n;
		
		printf("Enter the value : ");
		scanf("%d",&n);
		n:
		factorial = factorial * x;
		x++;
		
		if(n>=x)
		{
			goto n;
		}
		printf("Factorial is %d ",factorial);
}