#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[500];
	printf("Enter The Character Check Vowel How Many Time : ");
	gets(a);
	int len=strlen(a);
	int i,e=0,j=0,u=0,o=0,a1=0;
	for(i=0; i<len; i++)
	{
		if(a[i]=='e'||a[i]=='E')
		{
			e++;
		}
		else if(a[i]=='o' || a[i]=='O')
		{
			o++;
		}
		else if(a[i]=='a' || a[i]=='A')
		{
			a1++;
		}
		else if(a[i]=='i' || a[i]=='I')
		{
			j++;
		}
		else if(a[i]=='u' || a[i]=='U')
		{
			u++;
		}
	}
	printf("e,E : %d\n",e);
	printf("o,O : %d\n",o);
	printf("a,A : %d\n",a1);
	printf("i,I : %d\n",j);
	printf("u,U : %d",u);
}