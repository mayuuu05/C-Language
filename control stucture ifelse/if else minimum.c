// WaP to Find min. no. from given 2 no. using if else.

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);//user input
	printf("Enter the value of b:");
	scanf("%d",&b);//user input
	
	if(a<b)
	{
		printf("a is minimum");
	}
	else
	{
		printf("b is minimum");
	}
}