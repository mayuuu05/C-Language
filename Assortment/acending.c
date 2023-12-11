//5. Write a program in C to set the array in acending order.

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter the size of n : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int j;
	int k;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i] < a[j])
			{
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	
	printf("The numbers in ascending order is : \n");
	
	for(i=0; i<n; i++)
	{
		printf("%d  ",a[i]);
	}
}

