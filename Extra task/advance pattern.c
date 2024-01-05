#include<stdio.h>

main()
{
	int i,j,k=0;
	for(i=1 ; i<=10 ; i++)
	{
		for(k=1+1 ; k<=i ; k++)
		{     
			printf(" - ");
		}     
		for(j=i ;j<=10 ;j++)
		{
			k++;
			if(k==1)
			{
			    continue;	
	        }   
			printf(" %d ",k);
    	}
    	
		for(j=i+1 ;j<=10 ;j++)
		{
			k++;
			if(k==1)
			{
				continue;
			}
			printf(" %d ",k);
		}
//		for(k=i-1 ; k>=1 ; k--)
//		{     
//			printf("- ");
//		}      
		printf("\n");     
    }
}
