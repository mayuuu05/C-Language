//4. WAP to Find mini. from given 5 no. using nested
//if else.

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of e:");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					//a
					printf("a is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					//b
					printf("b is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
}
	