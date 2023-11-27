#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	
	int check=n;
	int n1=n%10;
	n=n/10;
	int n2=n%10;
	n=n/10;
	int n3=n%10;
	n=n/10;
    int ans=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
    printf("%d",ans=check);
}
