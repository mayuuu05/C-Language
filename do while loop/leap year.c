//7.wap to print leap year from 2000 to 3000 using do while loop
#include<stdio.h>

main()
{
	int x=2000;
	int y=3000;
	
	do
	{
		printf(" %d",x);
		x=x+4;
	}while(x<=y);
}