//3. Write C program to convert temperature from
// degree Celsius to Fahrenheit.(f=(9.5*c)+32)

#include<stdio.h>
#include<conio.h>

main()
{
	int celsius;//user input
	int fahrenheit;//value store(ans)
	printf("Enter the value of celsius:");
	scanf("%d",&celsius);
	
	fahrenheit=(9.5*celsius)+32;//using formula 
	
	printf("Fahrenheit is %d",fahrenheit);//print ans
}