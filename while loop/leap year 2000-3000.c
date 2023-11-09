//7.wap to print leap year from 2000 to 3000
#include<stdio.h>

main()
{
	int x=2000;
	int y=3000;
	
	while(x<=y)
	{
		printf(" %d",x);
		x=x+4;
	}
}