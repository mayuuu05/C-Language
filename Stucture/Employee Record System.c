
//Q.2 Write a Program to create an Employee Record System with an Array of objects for a 
//given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:

//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_city
//- emp_experience
//- emp_company_name

#include<stdio.h>

struct Employees
{
	int id,age,experience;
	char name[50],role[50],city[50],company_name[50];
};
main()
{
	int n;
	printf("Enter numbers of Employees :");
	scanf("%d",&n);
	char name[50],role[50],city[50],company_name[50];
	struct Employees emp[n];
	
	for(int i=1 ; i<=n ; i++)
	{
		printf("\n------Employee %d------\n",i);
		
		printf("\nEnter id           : ");
		scanf("%d",&emp[i].id);
		
		printf("Enter name         : ");
		scanf("%s",&name);
		strcpy(emp[i].name , name);
		
		printf("Enter age          : ");
		scanf("%d",&emp[i].age);
		
		printf("Enter your role    : ");
		scanf("%s",&role);
		strcpy(emp[i].role , role);
		
		printf("Enter city         : ");
		scanf("%s",&city);
		strcpy(emp[i].city , city);
		
		printf("Enter experience   : ");
		scanf("%d",&emp[i].experience);
		
		printf("Enter company name : ");
		scanf("%s",&company_name);
		strcpy(emp[i].company_name , company_name);
		
		printf("\n\n=>The Emplouee %d details are given below\n\n", i);

		printf("ID           : %d\n",emp[i].id);
		printf("Name         : %s\n",emp[i].name);
		printf("Age          : %d\n",emp[i].age);
		printf("Course       : %s\n",emp[i].role);
		printf("City         : %s\n",emp[i].city);
		printf("experience   : %d\n",emp[i].experience);
		printf("company name : %s\n\n",emp[i].company_name);
    }
}