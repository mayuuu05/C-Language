//CALCULATOR

#include<stdio.h>
#include<conio.h>

main()
{
	
	char op;
	start:
	printf("Enter your choice :");
	scanf("%c",&op);
	int a;
	printf("\nEnter the value of a  :");
	scanf("%d",&a);
	int b;
	printf("Enter the value of b  :");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+' : printf("Addition is : %d",a+b);
		break;
		case '-' : printf("Substraction is : %d",a-b);
		break;
		case '*' : printf("Multipication is : %d",a*b);
		break;
		case '/' : printf("Division is : %d",a/b);
		break;
		defualt  : printf("Ener valid input (+,-,*,/)!!");
		break;	
	}
}