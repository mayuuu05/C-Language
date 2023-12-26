//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
//Input:
//Enter any string: development
//
//Output:
//Length is: 11


#include<stdio.h>
#include<string.h>
int input()
{
	int n;
	printf("Enter your string array size :");
	scanf("%d",&n);//array size by user input
	printf("\n");
	return n;
}
char StringLength()
{
	int n=input();
	char len[n];
	printf("Enter your string : ");
	scanf("%s",&len);
	
	int length= strlen(len);
	printf("\nThe length of the String is : %d ",length);
	return length;
}
main()
{
	StringLength();
}