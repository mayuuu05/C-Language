#include<stdio.h>
main()
{
	int num ;
	printf("Enter any number :");
	scanf("%d",&num);
	int ld=num%10;
	for(num;num>9;num++)
	{
		num = num/10;
	}
	printf("%d + %d = %d",num,ld,num+ld);
}