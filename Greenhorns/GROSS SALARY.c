//4. Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
//Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.
//Ans = 123 RS
#include<stdio.h>
#include<conio.h>

main()
{
	int BASE_SALARY;
	int GROSS_SALARY;
	printf("Enter the BASE SALARY:");//user input
	scanf("%d",&BASE_SALARY);
	
	int HRA=10;//declare
	int DA=5;
	int TA=8;
	
	GROSS_SALARY=BASE_SALARY+HRA+DA+TA;
	
	printf("GROSS SALARY is : %d",GROSS_SALARY);//for print total salary
	
}