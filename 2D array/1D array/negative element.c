//1. Write a C program to print all negative elements in an array.

#include<stdio.h>

main()
{
	
	int n;
	printf("Enter your array size :");
	scanf("%d",&n);//for user choice array size 
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);//for enter your array value 
	}

	for(i=0; i<n; i++)
	{
		 if(a[i]<0)//condtion for negative value
		 {
		 	printf("Negative elements in an array is : %d",a[i]);//print negative element in an array
		 }
		 printf("\n");//for new line
	}
}