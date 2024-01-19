//find largest element in 1D array.

#include<stdio.h>

int main()
{
	int n,i,max;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter element of an array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("\n%d ",a[i]);
	}
	
	max = a[0];
	
	for(i=0; i<n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	
	printf("\n\nThe largest elements in array is : %d",max);
	
	return 0;
}