#include<stdio.h>
#include<conio.h>

main()
{
	int unit,amount;
	
	printf("Enter the value of unit:");
	scanf("%d",&unit);
	
	if(unit>=0 && unit<=50)
	{
		amount=unit*0.5;
		amount=amount+amount*0.2;
		printf("Total amount is:%d",amount);
	
	}
	else if (unit>=50 && unit<=100)
	{
		amount=(50*0.5)+(unit-50)*0.75;
		amount=amount+amount*0.2;
		printf("Total amount is:%d",amount);
		
	}
	else if(unit>=100 && unit<=150)
	{
		amount=(50*0.5)+(50*0.75)+(unit-100)*1.25;
		amount=amount+amount*0.2;
		printf("Total amount is:%d",amount);
	}
	else if(unit>=150 && unit<=200)
	{
		amount=(50*0.5)+(50*0.75)+(50*1.25)+(unit-150)*1.50;
		amount=amount+amount*0.2;
		printf("Total amount is:%d",amount);
		
	}
}
