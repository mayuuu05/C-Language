//
//    5
//   545
//  54345
// 5432345
//543212345
#include<stdio.h>


main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(int a=1; a<i; a++)
		{
			printf(" ");
		}
		for(j=5; j>=i; j--)
		{
			printf("%d",j);
		}
		for(int k=i+1; k<=5; k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}