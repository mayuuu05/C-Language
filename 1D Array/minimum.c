//Q.5 Wap to find minimum from the 1d array.

#include<stdio.h>

main()
{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	
	int i;
	int mini=0;
	for(i=0;  i<n;  i++)
	{ 
	   printf("Enter the value of array a[%d]:",i);
	   scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)
    {
    	if(a[n]>=mini)
    	{
    		mini=a[i];
		}
	}
	printf("Minimum element is : %d",mini);	
	

}