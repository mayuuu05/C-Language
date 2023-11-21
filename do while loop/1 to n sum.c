//8.wap to print sum 1 to n using do while loop
#include<stdio.h>

main()
{
	int x=1;
	int sum=0;
	int num;
	printf("enter values of n:");
	scanf("%d",&num);
	
	do
	{
		sum=sum+x;
		x++;
		
	}while(x<=num);
	printf("%d",sum);
	
	
}