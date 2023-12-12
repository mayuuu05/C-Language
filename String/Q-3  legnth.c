//3. WAP to given string length.
#include<stdio.h>

main()
{
	char n;
	printf("Enter string array size :");
	scanf("%c",&n);
	
	char a[n];
	printf("Enter your String :");
	scanf("%s",&a);
	
	int i,length;
	
	for(i=0; a[i]!=0; i++)
	{
		length++;
	}
	printf("Length of string is : %d",length);
	
}