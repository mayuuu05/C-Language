
//A B C D E
//  B C D E
//    C D E
//      D E
//        E


#include<stdio.h>
main()
{
	int i,k;
	char j;
	for(i=5;i>=1;i--)
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