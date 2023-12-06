//2. WAP to find the sum of a 1D array.

#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum;
	float avg;
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum+a[i];
	}
	
	printf("sum is = %d\n",sum);

	
}
