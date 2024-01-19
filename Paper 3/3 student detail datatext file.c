//data.txt

#include<stdio.h>

struct student
{
	char name[50];
	char course[50];
};

int main()
{
 	FILE *fp = fopen("data.txt","w");
 	
 	struct student a[3];
 	int i;
 	
 	for(i=0; i<3; i++)
 	{
 		printf("\n\nEnter the %d student's details\n",i+1);
 		printf("Enter the student's name : ");
		scanf(" %[^\n]s",&a[i].name);
		
		printf("Enter the student's course  : ");
		scanf(" %[^\n]s",&a[i].course);	
	}
	
	for(i=0; i<3; i++)
 	{
 		fprintf(fp,"\n\nThe %d student's details are below\n",i+1);
		fprintf(fp,"The student's name is : %s",a[i].name);
		
		fprintf(fp,"\nThe student's course is :  %s",a[i].course);	
	}
 	
 	return 0;
}