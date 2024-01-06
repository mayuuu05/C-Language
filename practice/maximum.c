//Q.4 Wap to find maximum from the 1d array.

#include<stdio.h>

main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	
	int i;
	int max=0;
	for(i=0;  i<n;  i++)
	{ 
	   printf("Enter the value of array a[%d]:",i);
	   scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {
    	if(a[n]<=max)
    	{
    		max=a[i];
		}
	}
	printf("Maximum element is : %d",max);	
	

}