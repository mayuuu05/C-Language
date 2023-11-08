//5. wap to calculate students grade.

#include<stdio.h>
#include<conio.h>

main()
{
	int per;
	printf("Enter your marks : ");
	scanf("%d",&per);//user input
	
	if(per<=100 && per>=85)
	{
		printf(" Your Grade is A ");//perentage according grades
	}
	else if(per<85 && per>=75)
	{
		printf(" Your Grade is B ");
	}
	else if(per<75 && per>=55)
	{
		printf(" Your Grade is C ");
	}
	else if(per<55 && per>=30)
	{
		printf(" Your Grade is D ");
	}
	else
	{
		printf(" Your Grade is E ");
	}
}