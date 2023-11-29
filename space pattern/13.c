//        A
//      B A
//    C B A
//  D C B A
//E D C B A
#include<stdio.h>
#include<conio.h>

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
		for(j=i;j>=1;j--)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	
}
