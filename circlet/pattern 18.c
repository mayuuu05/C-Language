//1        1
//12      21
//123    321
//1234  4321
//1234554321
#include<stdio.h>


main()
{
	int i,j,l;
	int k;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(k=i; k<5; k++)
		{
			printf("  ");
		}
		for(l=i; l>=1; l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}