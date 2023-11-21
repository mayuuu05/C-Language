//4.wap to print n to 1 using do while loop.
#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d",&n);
	int x=n;
	do
	{
		printf("%d ",x);
		x--;
	}while(x>=1);
}