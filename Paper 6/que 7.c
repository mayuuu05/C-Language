#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *ca;
	ca=fopen("Capital.txt","w");
	char a[500];
	printf("Enter Characters : ");
	gets(a);
	puts(a);
	fprintf(ca,"Your Characters Is : %s",a);
}