//q.3 wap to swap two variables without using the third variable and using a pointer.
#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\nBefore swapping :\n");
	printf("a = %d\n",a);
	printf("b = %d\n\n",b);
	
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
    printf("After swapping :\n");
	printf("a = %d\n",*ptr1);
	printf("b = %d",*ptr2);
	
}