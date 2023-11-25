//2. Write C program to print multiplication table of any number.

#include<stdio.h>

main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int x=1;
	for(x ; x<=10 ; x++)
	{
		printf(" %d * %d = %d\n",n,x,n*x);
	}
}