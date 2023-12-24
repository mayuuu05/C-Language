#include<stdio.h>

main()
{
	int n1;
	printf("Enter the value :");
	scanf("%d",&n1);
	int n2;
	printf("Enter the value :");
	scanf("%d",&n2);
	 int toal=1;
	 while(n1<=n2)
	{
		printf("%d ",n1);
		n1+=4;
		toal++;
	}
	printf("%d ",toal);
}