#include<stdio.h>

int main()
{
	int n,i,mini;
	
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
	
	mini= a[0];
	
	for(i=0; i<n; i++)
	{
		if(mini > a[i])
		{
			mini = a[i];
		}
	}
	
	printf("\n\nThe smallest elements in array is : %d",mini);
	
	return 0;
}