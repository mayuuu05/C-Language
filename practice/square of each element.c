//Q.3 Write a Program to find square of each element from the given array.

#include<stdio.h>

main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	
	int i;
	
	for(i=0;  i<n;  i++)
	{ 
	   printf("Enter the value of array a[%d]:",i);
	   scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
	{
		printf("Square of each element is %d\n",a[i]*a[i]);
	}

}