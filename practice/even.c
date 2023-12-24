//even

#include<stdio.h>

main()
{
	int n;
	printf("Enter the value :");
	scanf("%d",&n);
	
	int i=1 ;
	
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		
		}
		i++;
	}
}