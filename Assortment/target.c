//6. Write a program in C to find a pair of target value given by user.


#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	int i,j;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("enter value :");
	scanf("%d",&x);
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]+a[j]==x)
			{
				printf("%d,%d\n",a[i],a[j]);
			}
		
		}
	}
}
