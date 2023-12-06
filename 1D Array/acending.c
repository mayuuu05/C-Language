//Q.6 wap to acending order in 1d array.

#include <stdio.h>

main ()
{
        int n;
        printf("Enter the size of array : ");
        scanf("%d", &n);
        
        int number[n];
        int i,j;
        for (i=0; i<n; i++)
        {
        	 printf("Enter the value : ");
        	   scanf("%d", &number[i]);
		}
	      
        int a;
        for (i=0; i<n; i++) 
        {
            for (j =i+1; j<n; j++) 
            {
                if (number[i] > number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("\n");
        for (i= 0; i< n; ++i) 
        {
            printf("this is acending %d\n", number[i]);
        }
 
    }