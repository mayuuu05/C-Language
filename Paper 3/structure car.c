//define structure represent of car.

#include<stdio.h>

struct car 
{
	char model[50];
	int year;
	int price;
};

int main()
{
 	int n,i;
 	
 	printf("Enter the number of cars : ");
 	scanf("%d",&n);
 	
 	struct car a[n];
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\n\nEnter the detail of %d car\n",i+1);
 		printf("Enter model of car : ");
		scanf(" %[^\n]s",&a[i].model);
		
		printf("Enter the year of car : ");
		scanf("%d",&a[i].year);
		
		printf("Enter the price of car : ");
		scanf("%d",&a[i].price);	
	}
	
	for(i=0; i<n; i++)
 	{
 		printf("\n\nThe detail of %d car\n",i+1);
		printf("\nThe model of car is : %s",a[i].model);
		
		printf("\nThe year of car is : %d",a[i].year);
		
		printf("\nThe price of car is : %d",a[i].price);	
	}
 	
 	return 0;
}