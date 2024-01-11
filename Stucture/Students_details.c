//Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school

#include<stdio.h>
#include<string.h>

struct Students
{
	int id,age,standard;
	char name[50],course[50],city[50],school[50];
};
main()
{
	
	char name[50],course[50],city[50],school[50];
	struct Students stu[3];
	
	for(int i=1 ; i<=3 ; i++)
	{
		printf("\n------Student %d------\n",i);
	
		printf("\nEnter id          : ");
		scanf("%d",&stu[i].id);
		
		printf("Enter name        : ");
		scanf("%s",&name);
		strcpy(stu[i].name , name);
		
		printf("Enter age         : ");
		scanf("%d",&stu[i].age);
		
		printf("Enter course      : ");
		scanf("%s",&course);
		strcpy(stu[i].course , course);
		
		printf("Enter city        : ");
		scanf("%s",&city);
		strcpy(stu[i].city , city);
		
		printf("Enter standard    : ");
		scanf("%d",&stu[i].standard);
		
		printf("Enter School name : ");
		scanf("%s",&school);
		strcpy(stu[i].school , school);
		
		printf("\n\n=>The student %d details are given below\n\n", i);

		
		printf("ID       : %d\n",stu[i].id);
		printf("Name     : %s\n",stu[i].name);
		printf("Age      : %d\n",stu[i].age);
		printf("Course   : %s\n",stu[i].course);
		printf("City     : %s\n",stu[i].city);
		printf("standard : %d\n",stu[i].standard);
		printf("School   : %s\n\n",stu[i].school);
	
	}
	
}