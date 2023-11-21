//10.WAP to print the multiplication table of n using do while loop
#include<stdio.h>

main()
{
	int n;
	int i=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}while(i<=10);
}