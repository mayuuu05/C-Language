//Q.2 Write a Program to swap two variables using Pointers.
//For example,
//Input:
//Enter the value of x: 5
//Enter the value of y: 3
//
//Output:
//Before swapping:
//x: 5
//y: 3
//
//After swapping:
//x: 3
//y: 5
#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
		
	printf("\nBefore swapping :\n");
	printf("a = %d\n",a);
	printf("b = %d\n\n",b);
	
	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;
	
    *ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
	
	printf("After swapping :\n");
	printf("a = %d\n",*ptr1);
	printf("b = %d",*ptr2);
	
}