#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n;
	printf("Enter The Value Of N : ");
	scanf("%d",&n);
	int a[n],i,factorial=1;
	for(i=1; i<=n; i++)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
}