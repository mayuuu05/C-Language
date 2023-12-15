//6. WAP check string is numeric or not.
#include<stdio.h>
#include<string.h>

 main()
{
	char a[20];
	
	printf("Enter the string : ");
	scanf("%s",&a);
	
	int i;
	int digit=0;
	
	for(i=0; a[i]; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
		{
			digit++;
		}
	}
	
	if(digit!=0)
	{
		printf("The string is numeric");
	}
	else
	{
		printf("The string is not numeric");
	}
	
}