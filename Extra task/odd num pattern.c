///9 3 5 7 1
///9 3 5 7
///9 3 5
///9 3
///9

#include<stdio.h>

main()
{	
	int i,j;
	int x=93751;
	
	for(i=1 ; i<=5 ; i++)
	{
		printf("%d\n",x);
		x/=10;
	}
}