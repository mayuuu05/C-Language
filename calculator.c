//wap to create calculator using udf

#include<stdio.h>

void calc()
{
	int a,b,result=0;

	int n;
	printf("Enter the character : ");
	scanf(" %c",&n);

	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);

	switch(n)
	{
		case '+' : result = a+b;
		           printf("Sum : %d",result);
				   break;

		case '-' : result = a-b;
		           printf("Sub : %d",result);
				   break;

		case '*' : result = a*b;
		           printf("multy : %d",result);
				   break;

		case '/' : result = a/b;
		           printf("div : %d",result);
				   break;
	}

	slash();
	calc();
}

void slash()

{
	printf("\n");
}

main()
{
	calc();
}