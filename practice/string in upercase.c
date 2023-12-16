//lower to uper case

#include<stdio.h>

main()
{
	int n;
	printf("Enter you string size :");
	scanf("%d",&n);
	
	char uper_case[n];
	printf("Enter your string :");
	scanf("%s",&uper_case);
	
	int i;
	for(i=0 ; i<=sizeof(uper_case) ; i++)
	{
		if(uper_case[i]>='a' && uper_case[i]<='z')
		{
			uper_case[i] = uper_case[i]-32;
		}
	}
    printf("String convert in upercase: %s\n",uper_case);
}