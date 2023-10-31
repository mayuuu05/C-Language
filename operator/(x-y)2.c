//2.WAP to find a the answer given formula (x-y)2.
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
	
	ans=(x*x)-(2*x*y)+(y*y);
	
	printf("Ans of (x-y)2 is : %d",ans);
}