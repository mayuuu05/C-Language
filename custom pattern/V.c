//
//*           *
//  *       *
//    *   *
//      *
#include<stdio.h>

main()
{
	int i,j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=7; j++)
		{
			if((i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==4&&j==4)||(i==3&&j==5)||(i==2&&j==6)||(i==1&&j==7))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}