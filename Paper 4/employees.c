#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employees
{
	int age;
	char name[50],role[50];
};
main()
{
	char name[50],role[50];
    struct Employees emp[3];
    
    for(int i=1 ; i<=3; i++)
	{
		printf("\n------Employee %d------\n",i);
		
		
		printf("Enter name         : ");
		scanf(" %[^\n]s",name);
		strcpy(emp[i].name , name);
		
		printf("Enter your role    : ");
		scanf(" %[^\n]s",role);
		strcpy(emp[i].role , role);
		
		printf("Enter age          : ");
		scanf("%d",&emp[i].age);
		
		printf("\n\n=>The Emplouee %d details are given below\n\n", i);
		
		printf("Name         : %s\n",emp[i].name);
		printf("Role         : %s\n",emp[i].role);
		printf("Age          : %d\n",emp[i].age);
    }
	
}