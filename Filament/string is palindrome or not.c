//1. WAP check string is palindrome or not.

main()
{
	int n;
	printf("Enter size :");
	scanf("%d",&n);
	
	char palindrome[n];
    printf("Enter the string :");
    scanf("%s",&palindrome);
    
    int i,check=0,length=strlen(palindrome),j=length-1;
    
    for(i=0 ;i<length ; i++)
    {
    	if(palindrome[i] != palindrome[j])
    	{
    		check=1;
		}
		j--;
	}
	if(check!=1)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
}