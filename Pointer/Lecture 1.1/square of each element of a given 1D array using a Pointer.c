//Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
//For example,
//Input:
//Enter the array's size: 5
//
//Enter array's elements:
//a[0] = 2
//a[1] = 4
//a[2] = 1
//a[3] = 3
//a[4] = 7
//
//Output:
//Square of each element:
//4, 16, 1, 9, 49

#include<stdio.h>

main()
{
	int n;
	printf("Enter array's size :");
	scanf("%d",&n);
	
	int a[n];
	int i;
	printf("Enter array's element :\n");
	for(int i=0 ; i<n ; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Square of each element:\n");
	for(int i=0 ; i<n ; i++)
	{
		int *ptr = &a[i];
		int square = *ptr * *ptr;
		printf("%d\n",square);
		
	}
	
	
}


