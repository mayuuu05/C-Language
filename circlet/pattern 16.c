
//1
//21
//321
//4321
//54321
//4321
//321
//21
//1
#include<stdio.h>


main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(j=4; j>=1; j--)
	{
		for(i=j; i>=1; i--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}