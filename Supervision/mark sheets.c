//Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
//For example,
//Input:
//Enter details of Student 1:
//Roll no => 121
//Name => Raj Patel
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//
//Enter details of Student 2:
//Roll no => 122
//Name => Divya Sharma
//Chemistry => 92
//Mathematics => 80
//Physics => 84.......


//Output:
//Raj Patel (121)
//Chemistry => 95
//Mathematics => 90
//Physics => 88
//Total => 273/300
//Percent => 91.00%
//
//Divya Sharma (122)
//Chemistry => 92
//Mathematics => 80
//Physics => 84
//Total => 256/300
//Percent => 85.33%


#include<stdio.h>
#include<string.h>

struct student
{
	int Roll_no, Chemistry_marks , Mathematics_marks , Physics_marks;
	char name[50];
};

main()
{
	
	printf("!!About science students!!\n\n");
	int n;
	printf("Enter students number :");
	scanf("%d",&n);
	
	struct student s[n];
	char name[50];
 	int i;
 	
 	printf("\n");
 	for(i=1; i<=n; i++)
 	{
 		printf("\n<-----Student %d details---->\n",i);
 		
		printf("\nEnter the student name  : ");
		scanf(" %[^\n]s",&s[i].name);
		
		printf("Enter the roll no.        : ");
		scanf("%d",&s[i].Roll_no); 
		
		printf("Enter Chemistry marks     : ");
		scanf("%d",&s[i].Chemistry_marks);
		
		printf("Enter Mathematics marks   : ");
		scanf("%d",&s[i].Mathematics_marks);
		
		printf("Enter Physics marks       : ");
		scanf("%d",&s[i].Physics_marks);
	}
	
 	for(i=1; i<=n; i++)
 	{
 		printf("\n\n=> The Student [%d] result is given below\n",i);
 		printf("%s(%d)\n",s[i].name , s[i].Roll_no);
 		printf("Chemistry   : %d\n",s[i].Chemistry_marks);
 		printf("Mathematics : %d\n",s[i].Mathematics_marks);
 		printf("Physics     : %d\n",s[i].Physics_marks);
 		
 		int ans = s[i].Chemistry_marks  + s[i].Mathematics_marks  +  s[i].Physics_marks;
 		printf("Total Marks : %d/300\n",ans);
 		
 		float result = (ans*100.0)/300;
 		printf("Percentage  : %.2f%%",result);
	} 
 	
 
}