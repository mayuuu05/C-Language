#include<stdio.h>
#include<conio.h>
#include<string.h>

struct laptop
{
	char company_name[50],processor[50];
	int price;
};
main()
{
	char company_name[50],processor[50];
	int n;
	printf("Enter laptop number :");
	scanf("%d",&n);
	struct laptop l1[n];
	
	
    for(int i=1 ; i<=n; i++)
    {
    	
        printf("\n------Book %d------\n",i);
        
    	printf("\nEnter company name:");
		scanf("%[^\n]s",company_name);
		strcpy(l1[i].company_name,company_name);
		
		printf("\nEnter processor:");
		scanf("%[^\n]s",processor);
		strcpy(l1[i].processor,processor);
		
		printf("\nEnter price :");
		scanf("%d",&l1[i].price);
		
		printf("\n\n=>The laptop %d details are given below\n\n", i);
		
		printf("company_name   : %s\n",l1[i].company_name);
		printf("processor  : %s\n",l1[i].processor);
		printf("Price   : %d\n",l1[i].price);
		
	}
	
}