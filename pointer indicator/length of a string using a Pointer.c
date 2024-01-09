//Q.1 Write a Program to find the length of a string using a Pointer.
//For example,
//Input:
//Enter any string: hello world
//
//Output:
//The length of a string is: 11

#include<stdio.h>

main()
{
	char string[50];
	printf("Enter any string :");
    gets(string);
	
	int length = strlen(string);
	int *ptr = &length;
	
	printf("The length of a string is : %d",length);
}