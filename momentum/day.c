//4. Write C program use switch statement. Display Monday to Sunday.
//    Ex. User Input: M
//    Output: Monday
#include<stdio.h>
#include<conio.h>

main()
{
	char day;
	printf("Enter the day's first letter:");
	scanf("%c",&day);//user input
	
	switch(day)
	{
		case 'M' : printf("Monday");
		break;//for break line
		case 'T': printf("Tuesday");
		break;
		case 'W' : printf("Wednesday");
		break;
		case 't': printf("Thursday");
		break;
		case 'F': printf("Friday");
		break;
		case 'S': printf("Saturday");
		break;
		case 's': printf("Sunday");
		break;
		default : printf("Enter valid input");//if input is not valid
		
	}

}