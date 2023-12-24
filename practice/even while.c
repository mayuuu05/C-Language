#include<stdio.h>

main()
{
	int n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	int i=1 ;
	
	while(n>=i)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
		
	}
}