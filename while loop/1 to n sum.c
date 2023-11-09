//wap to print sum 1 to n using while loop
#include<stdio.h>

main()
{
	int x=1;
	int sum=0;
	int num;
	printf("enter values of n:");
	scanf("%d",&num);
	
	while(x<=num)
	{
		sum=sum+x;
		x++;
		
	}
	printf("%d",sum);
	
	
}