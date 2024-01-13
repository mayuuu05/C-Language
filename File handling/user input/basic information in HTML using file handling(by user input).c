//Q1. WAP to print your basic information in HTML using file handling using Dev C++.

#include<stdio.h>
#include<string.h>

main()
{
	FILE *fp;
	fp = fopen("bio.html","w");
	char name[20];
	
	printf("Enter your name :");
	scanf(" %[^\n]s",name);
	
	
	int age;
	printf("Enter age :");
	scanf("%d",&age);


	char school[20];
	printf("Enter school name :");
	scanf(" %[^\n]s",&school);

	
	char course[20];
	printf("Enter course name :");
	scanf(" %[^\n]s",&course);

	
	char Institute[20];
	printf("Enter Institute name :");
	scanf(" %[^\n]s",&Institute);

	printf("\n");
	
	fprintf(fp,"<html>");
	fprintf(fp,"<head>");
	fprintf(fp,"<title>");
	
	fprintf(fp,"bio-data");
	
	fprintf(fp,"%s\n","<title>");
	fprintf(fp,"%s\n","BIO DATA ");
	fprintf(fp,"%s\n","</title>");
	
	fprintf(fp,"<body>");
	
	fprintf(fp,"%s\n","<h1><-----ABOUT ME -----></h1><br>");
	fprintf(fp,"%s\n","<img src =https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRSgnMySCFnbj7yT6PEy27hQMyZzrOzKTjhql7KOklnacWcsB-tC4lY3b1xG2pBHj-t79M&usqp=CAU><br>");
	
	printf("Name : %s\n",name);
	fprintf(fp,"<h2>\nName :%s\n\n<h2>",name);
	
	printf("Age : %d\n",age);
	fprintf(fp,"<h2>Age :%d</h2>",age);

	printf("School Name : %s\n",school);
	fprintf(fp,"<h2>School Name :%s</h2>",school);
	
	printf("Course : %s\n",course);
	fprintf(fp,"<h2>Course :%s</h2>",course);
	
	printf("Institute : %s",Institute);
	fprintf(fp,"<h2>Institute : %s</h2>",Institute);
	
	fprintf(fp,"</body>");
	fprintf(fp,"</head>");
	fprintf(fp,"</html>");
}