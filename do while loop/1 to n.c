//3.wap to print 1 to n using do while loop.
#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	
	int x=1;
	do
	{
		printf("%d ",x);
		x++;
	}while(x<=n);
}