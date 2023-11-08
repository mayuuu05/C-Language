//4. find minimum from 3 number using ladder. 
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of c :");
	scanf("%d",&c);
	
	if(a<b && a<c)
	{
		printf("a is minimum");
	}
	else if(b<a && b<c)
	{
		printf("b is minimum");
	}
	else if(c<a && c<b)
	{
		printf("c is minimum");
	}
	
}