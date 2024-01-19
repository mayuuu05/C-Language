#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("enter the size=");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
		
	for(i=0; i<n; i++)
	{
	   if(a[i]%2!=0)
        {
            printf("Odd numbers = %d \n", a[i]);
        }
	}
	

	
}