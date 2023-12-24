#include<stdio.h>

main()
{
	int n;
	printf("Enter the value :");
	scanf("%d",&n);
	 int i=n;
	 
	 while(i>=1)
	 {
	 	if(i%2==0)
	 	{
	 		printf(" %d",i);
		 }
	 	i--;
	 }
}