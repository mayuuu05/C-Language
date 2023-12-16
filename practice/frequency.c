//1.write a c program to count frequency of each character in a string.
#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	
	puts("Enter the string :");
	gets(a);
	
	int frequency=1;
	int i,j;
	int length =strlen(a);
	for(i=0; i<length; i++)
	{
		   for(j=i+1; j<length; j++)
		   {
			   if(a[i] == a[j])
			   {
			   	    frequency++;
				   a[j]=0;
			   }
		   }
		   if(a[i]!=0)
		   {
		   	    printf(" %c -> %d\n",a[i],frequency);
		   }
		   frequency=1;
    }
}