
//12345
// 2345
//  345
//   45
//    5
#include<stdio.h>


main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(int a=1; a<i; a++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
} 