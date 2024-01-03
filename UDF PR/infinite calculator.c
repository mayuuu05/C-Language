//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, 
//switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include<stdio.h>

void calculator()
{
	int n;
	start:
	printf("=>Which Operation want you perform??\n\n");
	printf("Press 0 for the Exit \nPress 1 for Addition(+)\nPress 2 for substraction(-)\nPress 3 for multipication(*)\nPress 4 for division(/)\nPress 5 for Reminder( % )\n");
	printf("\nEnter your choice :");
	scanf("%d",&n);
	int a,b;
	
	if(n==1 || n==2 || n==3 || n==4 || n==5)
    {	
	    printf("\nEnter your first value :");
	    scanf("%d",&a);
	    printf("Enter your second value :");
	    scanf("%d",&b);
    }
    
	switch(n)
	{
		case 0:printf("Calculator off!!");
		break;
		case 1:printf("Addition of %d + %d is = %d\n\n",a,b,a+b);
		goto start;
		break;
		case 2:printf("Substraction of %d - %d is = %d\n\n",a,b,a-b);
		goto start;
		break;
		case 3:printf("Multipication of %d * %d is = %d\n\n",a,b,a*b);
		goto start;
		break;
		case 4:printf("Divison of %d / %d is = %d\n\n",a,b,a/b);
		goto start;
		break;
		case 5:printf("Reminder of %d % %d is = %d\n\n",a,b,a%b);
		goto start;
		break;
		default:printf("Enter valid number for (+,-,/,*,%)!!!\n\n");
		goto start;
	}
}
main()
{
	calculator();
}
