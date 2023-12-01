
#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1 ; i<=7 ;i++)
	{
		for(j=1 ; j<=5 ; j++)
		{
			if(j==1 || j==5 || (i==2 && j==2) || (i==2 && j==4) || (i==3 && j==3))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\t");
		for(k=1 ; k<=5 ; k++)
		{
			if(k==1 || i==1 || k==5 || i==3)
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