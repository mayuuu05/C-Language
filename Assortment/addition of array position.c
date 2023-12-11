//4. Write a program to get two array and create addition of array position wise.
//    ex: A= 1,2,3 B=5,6,7 answer = 6,8,10

#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter the size of n : ");
	scanf("%d",&n);
	
	int c[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of c[%d] : ",i);
		scanf("%d",&c[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("c[%d] : %d\n",i,c[i]);
	}
	
	printf("\n");
	
	printf("Enter the size of n : ");
	scanf("%d",&n);
	
	int d[n];
	for(i=0; i<n; i++)
	{
		printf("Enter the value of d[%d] : ",i);
		scanf("%d",&d[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("d[%d] : %d\n",i,d[i]);
	}
	
	int sum=0;
	for(i=0; i<n; i++)
	{
		sum = c[i] + d[i];
		printf("sum is c[%d] : %d\n",i,sum);
	}
}