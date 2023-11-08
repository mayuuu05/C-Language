//2. WaP to print month names using switch case.
#include<stdio.h>
#include<conio.h>

main()
{
	int month;
	printf("Enter the month's first letter:");
	scanf("%d",&month);//user input
	
	switch(month)
	{
		case 1 : printf("January - 31 Days");
		break;//for break line
		case 2 : printf("February - 28/29 Days");
		break;
		case 3 : printf("March - 31 Days");
		break;
		case 4 : printf("April - 30 Days");
		break;
		case 5 : printf("May - 31 Days");
		break;
		case 6 : printf("June - 30 Days");
		break;
		case 7 : printf("July - 31 Days");
		break;
		case 8 : printf("August - 31 Days");
		break;
		case 9 : printf("September - 30 Days");
		break;
		case 10 : printf("Octomber - 31 Days");
		break;
		case 11 : printf("November - 30 Days");
		break;
		case 12 : printf("December - 31 Days");
		break;
		default : printf("Enter valid input");//if input is not valid
		
		
	}
}