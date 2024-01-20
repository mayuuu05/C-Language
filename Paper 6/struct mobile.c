#include<stdio.h>
#include<string.h>
struct mobile
{
	char company_name[50],color[50],model[50];
	int price;
};
main()
{
	int n;
	printf("Enter number of mobile :");
	scanf("%d",&n);
	
	
	struct mobile m[n];
	int i,j=1;
	char company[50],color_m[50],model_m[50];
	
	for(i=0;i<n;i++)
	{
		printf("    Enter detail of mobiles %d \n",j);
		
		printf("Enter company name : ");
		scanf(" %[^\n]s",company);
		strcpy(m[i].company_name,company);
		
		printf("Enter Color of mobile : ");
		scanf(" %[^\n]s",color_m);
		strcpy(m[i].color,color_m);
		
		printf("Enter Model name : ");
		scanf(" %[^\n]s",model_m);
		strcpy(m[i].model,model_m);
		
		printf("Enter price of mobile : ");
		scanf("%d",&m[i].price);

        j++;
		printf("\n");		
		
	}

     j=1;	
	for(i=0;i<n;i++)
	{
		printf("      Detail of mobile %d    \n",j);
		printf(" Company Name = %s  \n",m[i].company_name);
		printf(" Model Name = %s     \n",m[i].model);
		printf(" Color of Model = %s  \n",m[i].color);
		printf(" pricee of Model = %d  \n",m[i].price);
		j++;
		printf("\n");
	}
}