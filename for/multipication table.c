//wap to print multipication table using for loop

#include<stdio.h>

main()
{
	int n;
	int i=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i ; i<=10 ; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		
	}
}