//6. wap to calculate electricity bill.
// 50 units Rs. 0.50/unit
// 100 units Rs. 0.75/unit
// 150units Rs. 1.25/unit
//250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.
#include<stdio.h>

main()
{
	int unit,amount,total_amount;
	
	printf("Enter the unit : ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amount = unit * 0.5;//50 / 100 = 0.5
	}
	else if(unit<=100)
	{
		amount = unit * 0.75;
	}
	else if(unit<=150)
	{
		amount = unit * 1.25;
		
	}
	else if(unit<=250)
	{
		amount = unit * 1.50;
    }
	else
	{
		amount = unit * 2.0;
	}
	
	int charge = amount * 0.20;//20%    20 / 100 = 0.20
	total_amount = amount + charge;//extra charge add
	
	printf("Your amount is %d ",total_amount);
	
	
}