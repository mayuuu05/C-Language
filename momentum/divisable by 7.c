//8. wap to check number is divisible by 7 or not using ternary

#include<stdio.h>

main()
{
	int num;
	printf("Enter the number for print days : ");
	scanf("%d",&num);
	
	(num%7==0)?printf("Your number is Divisable by 7"):printf("Your number is not Divisable by 7");
}