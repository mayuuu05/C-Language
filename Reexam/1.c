#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,l;
	
	
	for(i=1 ; i<=5-1 ; i++)
	{
		for(k=i; k>=1; k--)
		{
			printf(" ");
		}
		for(j=i ; j<=5 ; j++)
		{
			printf("%d ",j);
		}

		printf("\n");
	}
	for(i=5 ; i>=1 ; i--)
	{
		for(k=1; k<=i; k++)
		{
			printf(" ");
		}
		for(j=i ; j<=5 ; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}