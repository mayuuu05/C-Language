//2. Write C Program to perform a swapping of two
// variables without using third variable
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a is : %d || b is : %d",a,b);
}