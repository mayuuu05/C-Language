//length in string


#include<stdio.h>

main()
{
	int n;
	printf("Enter size :");
	scanf("%d",&n);
	
	char length[n];
    printf("Enter the string :");
    scanf("%s",&length);
    
    int i,len;
    for(i=0 ; length[i]!=0 ; i++)
    {
    	len++;
	}
	printf("String length is : %d\n",len);
}