//7 . wap to print leap year from 2000 to 3000 using for loop

#include<stdio.h>

main()
{
	int x = 2000;
	int y = 3000;
	
	for(x ; x<=y ; x=x+4)
	{
		printf(" %d",x);
		
	}
}