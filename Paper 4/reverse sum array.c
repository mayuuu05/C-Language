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
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	printf("Reverse element is :\n");
	for(i=n-1 ; i>=0 ; i--)
	{
		printf("a[%d] : %d\n",i,a[i]);
		
	}
	for(i=0 ; i<n ; i++)
	{
        sum= sum+a[i];
	}
	printf("Sum of Reverse array element is : %d",sum);
}