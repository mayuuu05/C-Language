#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	
	puts("Enter the string :");
	gets(a);
	

	int i,j;
	int length =strlen(a);
	for(i=0; i<length; i++)
	{
		   for(j=i+1; j<length; j++)
		   {
			   if(a[i] == a[j])
			   {
				   a[j]=0;
			   }
		   }
		   if(a[i]!=0)
		   {
		   	    printf("%c",a[i]);
		   }
		   
    }
}