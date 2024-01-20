#include<stdio.h>


main()
{
	int i,j;
	
	for(i=10; i>=6; i--)
	{
		for(int a=i; a<10; a++)
		{
			printf("  ");
		}
		for(j=i; j>=6; j--)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
} 