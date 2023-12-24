//1. Write C program to print all alphabets from a to z. using do while loop
#include<stdio.h>

main()
{
	char x = 'a';
	char y = 'z';
	
	while(x<=y)
	{
		printf("%c ",x);
		x++;
	}
}