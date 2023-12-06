//    1
//   12
//  123
// 1234
//12345
#include<stdio.h>


main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(int a=i; a<5; a++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}