#include<stdio.h>
#include<conio.h>

main()
{
	int x=10;
	int y=20;
	
	printf("%d",!(x<y) || !(x>y || x==y) && (x>=y) || (x>=y));
}