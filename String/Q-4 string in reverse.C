//4. WAP to given string in reverse.

#include<stdio.h>
main()
{
	int n,i;
    printf("Enter string array size :");
    scanf("%d",&n);
     
    char a[n];
    printf("Enter the string : ");
    scanf("%s",&a);
     
    printf("String in reverse :");
    for(i=n; i>=0; i--)
    {
     	printf("%c",a[i]);
	}
	
		
	
}