
  
     
#include<stdio.h>

main()

{
	int i,j;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(j=1 ; j<=((2*5)-1) ; j++)
		{
			if(j==(5-(i-1)) || j==(5+(i-1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(i=5 ; i>=1 ; i--)
	{
		for(j=1 ; j<=((2*5)-1) ; j++)
		{
			if(j==(5-(i-1)) || j==(5+(i-1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}