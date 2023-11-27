//5. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 150units Rs. 1.25/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.

#include<stdio.h>
#include<conio.h>
main()
{
	int unit;
	float amount;
	float total_amount;
	float surcharge;
	
	printf("enter total units consumed:");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amount=unit*0.50;
	}
	else if(unit<=150)
	{
		amount=25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		amount=100+(unit-150)*1.20;
		
	}
	else
	{
		amount=220+(unit-250)*1.50;
	}
	 surcharge=amount*0.20;
	 total_amount=amount+surcharge;
	 
	 printf("ypur electric city bill:%.2f",total_amount);
}