#include<stdio.h>

void in(int *a)
{
	*a=*a-1;
}
main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	
	in(&a);
	printf("%d",a);
}