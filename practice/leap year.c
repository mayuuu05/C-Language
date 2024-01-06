//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.


#include<stdio.h>

main()
{
	int n1;
	printf("Enter your first year : ");
	scanf("%d",&n1);
	
	int n2;
	printf("Enter your second year : ");
	scanf("%d",&n2);
	
	int i;
	int a[n1];
	
	for(i=n1 ; i<=n2 ; i++)
	{
		if(i%4==0)
		{
			printf("\n%d ",i);
		}
	}
}