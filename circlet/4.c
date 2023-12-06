//Q.4 Write a Program to print the below pattern using nested for loop.
//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1

#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		
		for(k=5;k>i;k--)
		{
			
			printf(" ");
			
		}
		
		for(j=i;j>=1;j--)
		{
			
			printf("%d",j%2);
			
		}
		
		printf("\n");
	}
}