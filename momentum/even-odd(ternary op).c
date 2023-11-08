//2. Write C program to check a number is even or odd using ternary operator

#include<stdio.h>

main()
{
	int num;
	printf("Enter the value : ");
	scanf("%d",&num);
	
	(num%2==0)?printf(" This number is even "):printf(" This number is odd ");
}