//reverse string without using any library.

#include<stdio.h>

int main()
{
	char a[50];
	int len=0,i;
	
	printf("Enter the string you want : ");
	scanf(" %[^\n]s",&a);
	
	while(a[len] != '\0')
	{
		len++;
	}
	
	for(i=len-1; i>=0; i--)
	{
		printf("%c",a[i]);
	}
	
	
	return 0;
}