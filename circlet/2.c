//Q.2 Write a Program to print the below pattern using nested for loop.
//11
//12 13
//14 15 16
//17 18 19 20
//21 22 23 24 25

#include<stdio.h>

main()
{
	int i,j;
	int k=11;
	
	for(i=11 ;i<=15 ; i++)
	{
		for(j=11 ; j<=i ;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
}