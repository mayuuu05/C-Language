#include<stdio.h>
#include<string.h>

main()
{
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	
	int a[n];
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nCube of each element :\n");
	
	for(i=0 ; i<n ; i++)
	{
		int cube = a[i]*a[i]*a[i];
		printf("Cube is : %d\n",cube);
	}

}