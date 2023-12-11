//7. Write a C program to find the largest number in array.[2D]

#include<stdio.h>

void main()
{
	int x,y;
	
	printf("Enter the size of x : ");
	scanf("%d",&x);
	
	printf("Enter the size of y : ");
	scanf("%d",&y);
	
	int a[x][y];
	int i;
	int j;
	int max=0;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(a[i][j] > max)
		    {
			    max = a[i][j];
		    }
		}
	}
	
	printf("max is : %d",max);
}