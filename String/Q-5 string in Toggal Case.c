//5. WAP to convert given string in Toggal Case.

#include<stdio.h>

main()
{
	int n,i;
    printf("Enter string array size :");
    scanf("%d",&n);
     
    char a[n];
    printf("Enter the string : ");
    scanf("%s",&a);
    
	int length = sizeof(a);
	if(a[0] >= 97)
	{
		a[0] = a[0] - 32;
	}
	
	for(i=0; i<length; i++)
	{
		if(a[i] == ' ')
		{
			if(a[i+1] <= 97)
			{
				a[i] = a[i] - 32;
			}
		}
	}
	printf("string in Toggal Case : %s",a);
}