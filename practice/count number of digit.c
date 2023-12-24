//3. Write C program to count number of digits in a number.

#include<stdio.h>

main()
{
	int n;
	printf("Enter your number :");
	scanf("%d",&n);
	
	int count=0;
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("The count number of digits in a number is : %d",count);
}