#include<stdio.h>

main()
{
	int n;
	printf("Ener the value of n : ");
	scanf("%d",&n);
	
	int i,j;
	int check=0,sum=0;
	for(i=2 ; i<=n ; i++)
	{
		for(j=2 ; j<=i-1 ; j++)
		{
			if(i%j==0)
			{
				check=1;
			}
			
		}
		if(check==0)
		{
			printf("%d ",i);
			sum=sum + i ;
		}
		check=0;
	}
	printf("\n\n%d",sum);
}