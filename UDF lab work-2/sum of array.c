//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
//
//Output:
//The sum of an Array: 18


#include<stdio.h>

int input()
{
	int n;
	printf("Enter your array size :");
	scanf("%d",&n);//array size by user input
	printf("\n");
	return n;
}
int sum()
{
	int n=input();//calling input function
	
	int a[n];
	int i,sum=0;
	
	for(i=0 ; i<=n ; i++)
	{
		printf("Enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	
	}
	for(i=0 ; i<=n ; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);//print array values
	}
	
	for(i=0 ; i<=n ; i++)
	{
		sum=sum + a[i];//for sum of array
		
	}
	
	printf("\nThe sum of an Array is: %d",sum);
	return sum;
}
main()
{
	
	sum();//calling 

}