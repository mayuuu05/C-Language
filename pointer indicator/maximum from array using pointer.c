//q3. wap to find maximum from array using pointer.

#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	printf("\n");
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
	
	int *ptr =&max;
	printf("\n=> Maximum element is : %d",*ptr);	
	

}