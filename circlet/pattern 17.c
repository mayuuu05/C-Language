//
//    1
//   12
//  123
// 1234
//12345
// 2345
//  345
//   45
//    5
#include<stdio.h>


main()
{
	int i,j;
	int k;
	
	
	for(i=1; i<=5; i++)
	{
		for(k=i; k<5; k++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(j=2; j<=5; j++)
	{
		for(k=1; k<j; k++)
		{
			printf(" ");
		}
		for(i=j; i<=5; i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}