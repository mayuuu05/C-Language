//1. Write C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter the Character : ");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
		printf(" This is Alphabet ");
	}
	else if(ch>=33 && ch<=47)
	{
		printf(" This is Alphabet ");
	}
	else if(ch>=48 && ch<=57)
	{
		printf(" This is Alphabet ");
	}
	
}