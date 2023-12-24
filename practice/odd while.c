//odd num 1 to n

#include<stdio.h>

main()
{
	int i=1;
	int n;
	
	printf("Ener");
	scanf("%d",&n);
	
	for(i; i<=n ;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}
	
}