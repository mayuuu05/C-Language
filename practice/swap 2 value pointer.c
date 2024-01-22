#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int a=2,b=1;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	int *p=&a;
	int *pt=&b;
	*p=*p+*pt;
	*pt=*p-*pt;
	*p=*p-*pt;
	printf("A : %d",a);
	printf("B : %d",b);
}