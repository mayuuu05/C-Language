#include<stdio.h>

int main()
{
	int i,j,x,k=1,y=1,f=1;
	for(i=1 ; i<=10 ; i++)
	{
		for(x=1; x<i; x++)
		{
			printf(" - ");
		}
		for(j=i; j<=10; j++)
		{
		   printf(" %d ",k);
		   k=k+j;//2 4 7	
		}
//		y+=i;
//		k=i+y;
//		printf("\n");
		
//				for(x=1; x<i; x++)
//		{
//			printf(" -");
//		}
		for(j=9; j>=i; j--)
		{
		   printf(" %d ",k);
		   k=k+j;//2 4 7	
		}
		y+=i;
		k=i+y;
        printf("\n");
    }    
}