//1.WAP to get & print 1D array of N elements.

#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	int i;
    int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
}