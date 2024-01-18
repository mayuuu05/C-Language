//1. Write C program to print all alphabets from a to z. using do while loop.
#include<stdio.h>

main()
{
	char ch = 'a';
	while(ch <= 'z')
	{
		
		if(ch=='a' || ch=='e'||ch=='i' || ch=='m' || ch=='q' ||ch=='u' ||ch=='y')
		{
			printf(" %c",ch);
		}
		ch++;
	}

	return 0;
}