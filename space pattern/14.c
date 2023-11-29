//        A
//      A B
//    A B C
//  A B C D
//A B C D E
#include<stdio.h>
main()
{
	int i,k;
	char j;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
}