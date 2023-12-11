//1. WAP to get the array and count & remove all duplicate values in the array.

#include<stdio.h>

main()
{
	int n; 
	
	printf("Enter the size : ");
	scanf("%d",&n);
	
	int a[n];
	int i,j,k;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				for(k=j; k<n; k++)
				{
					a[k] = a[k+1];
				}
				n--;
				j++;
			}
		}
	}
	
	printf("After delete elements : \n");
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
}