//2. WAP compares two strings. - strcmp(name1,name2).

#include<stdio.h>
#include<string.h>

void main()
{
	char strg1[10];
	char strg2[10];
	int value;
	
	puts("Enter the string : ");
	gets(strg1);
	
	puts("Enter the string : ");
	gets(strg2);
	
	value = strcmp(strg1,strg2);
	
	if(value==0)
	{
		printf("String are same");
	}
	else
	{
		printf("String are not same");
	}
}