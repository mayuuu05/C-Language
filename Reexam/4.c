#include<stdio.h>
#include<conio.h>



main()
{
	int student[3];
	int Roll_no;
	int age;
	char name[30];
	FILE *fp;
	fp = fopen("student.txt","w");
	
	printf("Student detail :\n");
	fprintf(fp,"Student detail :\n");
	
	int i;
	
	for(i=1 ; i<3 ; i++)
	{
		printf("\nEnter student name:");
		scanf("%s",&name);
	
		printf("\nEnter Roll no. :");
		scanf("%d",&Roll_no);
		
		printf("\nEnter age:");
		scanf("%d",&age);
		
	
	}
	for(i=0 ; i<3 ; i++)
	{
		printf("\n\nThe student %d details are given below",i);
		fprintf(fp,"The student %d details are given below",i);
		
		printf("\nStudent name : %s",name);
		fprintf(fp,"Student name : %s",name);
		
		printf("\nRoll no.          : %d",Roll_no);
		fprintf(fp,"Roll no.           : %d",Roll_no);
		
		printf("\nAge          : %d",age);
		fprintf(fp,"Age          : %d",age);
		
		                                       
	}
}