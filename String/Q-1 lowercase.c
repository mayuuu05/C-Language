//1. WAP to convert given string in lowercase.


#include<stdio.h>

main()
{
	char n;
	printf("Enter string array size :");
	scanf("%c",&n);
	
	char a[n];
	printf("Enter your String in Upercase :");
	scanf("%s",&a);
	
	
    int i;
    int length = sizeof(a);
    for (int i = 0; i < length; i++) 
	{
        if (a[i]>='A' && a[i]<= 'Z')
		{
            a[i] = a[i] + 32;
        }
    }
    printf("String convert in Lowercase: %s\n", a);
	
}
