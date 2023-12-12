//2. WAP to convert given string in Upercase.


#include<stdio.h>

main()
{
	char n;
	printf("Enter string array size :");
	scanf("%c",&n);
	
	char a[n];
	printf("Enter your String in Lowercase :");
	scanf("%s",&a);
	
	
    int i;
    int length = sizeof(a);
    for (int i = 0; i < length; i++) 
	{
        if (a[i]>='a' && a[i]<= 'z')
		{
            a[i] = a[i] - 32;
        }
    }
    printf("String convern in Lowercase: %s\n", a);
	
}