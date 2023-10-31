//3.WAP to find a the answer given formula (x+y)3.
#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	int ans;
	
	printf("Enter the value of x :");
	scanf("%d",&x);
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	ans=(x*x*x)+((3*x*y))+(y*y);
	
	printf("Ans of (x+y)3 is : %d",ans);
}