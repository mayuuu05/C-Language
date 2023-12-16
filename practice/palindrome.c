//palindrom
#include<stdio.h>

main()
{
	int n;
	printf("Enter size :");
	scanf("%d",&n);
	
	char palindrome[n];
    printf("Enter the string :");
    scanf("%s",&palindrome);
    
    int i,j=4,check=0;
    
    for(i=0 ;i<n ; i++)
    {
    	if(palindrome[i] != palindrome[j])
    	{
    		check=1;
		}
		j--;
	}
	if(check==1)
	{
		printf("String is not palindrome");
	}
	else
	{
		printf("String is palindrome");
	}
}