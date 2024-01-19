//pattern 
//11
//12 13
//14 15 16
//17 18 19 20
//21 22 23 24 25

#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k=11;
	
	for(i=11 ; i<=15 ; i++)
    {
    	for(j=11; j<=i ; j++)
        {
        	printf("%d ",k);
        	k++;
		}
		
		printf("\n");
	}
}