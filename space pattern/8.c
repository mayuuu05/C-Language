//1 2 3 4 5
//  2 3 4 5
//    3 4 5
//      4 5
//        5

#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	
    for(i=1 ; i<=5 ; i++)
	{
		for(k=1 ; k<i ; k++)
		{
			printf(" ");
		}
		for(j=i ; j<=5 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}