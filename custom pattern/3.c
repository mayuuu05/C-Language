//1234554321
//1234  4321
//123    321
//12      21
//1        1

#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
		    {
			    printf("%d",j);
		    }
            else
            {
        	    printf(" ");
		    }
        }
        for(j=5;j>=1;j--)
        {
            if(j<=i)
			{
				printf("%d",j);
			}
            else
            {
            	printf(" ");
			}
        }
        printf("\n");
    }
}