//wap to print day of week without using switch case

#include<stdio.h>

main()
{
	int num;
	printf("Enter the number for print days : ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Monday");
	}
	else if(num==2)
	{
		printf("Tuesday");
	}
	else if(num==3)
	{
		printf("Wednesday");
	}
	else if(num==4)
	{
		printf("Thursday");
	}
	else if(num==5)
	{
		printf("Friday");
	}
	else if(num==6)
	{
		printf("Saturday");
	}
	else if(num==7)
	{
		printf("Sunday");
	}
	else
	{
		printf(" Enter only 1 to 7 ");
	}
}