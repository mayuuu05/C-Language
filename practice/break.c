#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=10,n;
	
	printf("Enter the number where you want to break squeance between 1 to 10:");
	scanf("%d",&n);
	
	for(a=1;a<=b;a++)
	{ 
	   	printf("%d ",a);
		if(a==n)
		{
			break;
		}
	}
}