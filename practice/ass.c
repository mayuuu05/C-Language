//calculate electricity bill
#include<stdio.h>
main()
{
	int unit;
	float amount;
	printf("enter unit :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amount = (50*0.5) + unit;
		amount = amount * 0.2;
	}
	else if(unit<=100)
	{
		amount = (50*0.5) + (50*0.75) + (unit-50);
		amount = amount * 0.2;
	
	}
	else if(unit<=150)
	{
		amount = (50*1.25) + (50*0.5) + (50*0.75) + (unit-100);
		amount = amount * 0.2;	
	}
    
    printf("electricity bill :%.2f",amount);
    
	
}



