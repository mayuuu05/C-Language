///uper to lower case

#include<stdio.h>

main()
{
	int n;
	printf("Enter your string array size :");
	scanf("%d",&n);
	
	char lower_case[n];
	printf("Enter the string :");
	scanf("%s",&lower_case);
	
	int i;
	for(i=0 ; i<=sizeof(lower_case) ; i++)
	{
		if(lower_case[i]>='A' && lower_case[i]<='Z')
		{
			lower_case[i] =lower_case[i]+32;
		}
	}
	printf("String convert in Lowercase: %s\n",lower_case);
	
	
	
}