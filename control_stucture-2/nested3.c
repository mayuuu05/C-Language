//2< WAP to Find min. from given 3 no. using nested
//if else.
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	
	//a,b,c
	if(a<b)
    {
    	if(a<c)
    	{
    		//a
    		printf("a is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("b is minimum");
		}
		else
		{
			//c
			printf("c is minimum");
		}
	}
}