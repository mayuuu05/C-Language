//q4. wap to find the address of the chain pointer.

#include<stdio.h>


void inc(int *x)
{
	++*x;
}
main()
{
	int x;
	printf("Enter any element :");
	scanf("%d",&x);
	
	inc(&x);

	printf("\nThe address of chain pointer is :\n");
	printf("=> %d",x);
	
}