#include<stdio.h>

main()
{
	int i,j;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==2||i==1||i==7||j==5)
			{
				if((j==5&&i==1)||(j==5&&i==7))
				{
					continue;
				}
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