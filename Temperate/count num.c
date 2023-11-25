//3. Write C program to count number of digits in a number.

#include<stdio.h>

main()
{
	int number;
	printf("Enter your number : ");
	scanf("%d",&number);
	
	int count = 0;  
	for(number ; number>0 ; count++)
	{
		
		number = number/10;
	}
	
	printf("The count number of digits is : %d",count);
}