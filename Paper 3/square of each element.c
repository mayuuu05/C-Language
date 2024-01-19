#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter your array size :");
	scanf("%d",&n);
	
	int a[n];
	int sum=0;
	int i;
	
	for(i=0 ; i<=n ; i++)
	{
		printf("Enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<=n ; i++)
	{
		printf("\na[%d] : %d\n",i,a[i]);
	}
	
	printf("\nCube of each element is :\n");
	for(i=0 ; i<=n ; i++)
	{
		int cube=a[i]*a[i]*a[i];
//		printf("a[%d] : %d\n",i,a[i]*a[i]*a[i]);
		int *ptr = &cube;
		printf("a[%d] : %d\n",i,*ptr);
	}
	
}