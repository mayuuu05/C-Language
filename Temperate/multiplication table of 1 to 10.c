//// 8. wap to printf multiplication table of 1 to 10

#include<stdio.h>

main()
{

	int x=1,y;
	
	
	for(x ; x<=10 ; x++)
	{
		for(y=1 ; y<=10 ; y++)
		{
			
			printf(" %d * %d = %d\n",x,y,x*y);
		
		}
			printf("\n");
	}
	
}