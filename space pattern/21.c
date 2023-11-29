
//1 1 1 1 1
//  0 0 0 0
//    1 1 1
//      0 0
//        1
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
}