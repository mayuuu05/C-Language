//5. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
//    Calculate the percentage and grade according to the following
//        Percentage >= 90% : Grade A
//        Percentage >= 80% : Grade B
//        Percentage >= 70% : Grade C
//        Percentage >= 60% : Grade D 
//        Percentage >= 50% : Grade E
//        Percentage >= 40% : Grade F

#include<stdio.h>
#include<conio.h>

main()
{
	int Account , Stat , Economics , BA , SP ;
	printf("Enter your Account subjects  marks : ");
	scanf("%d",&Account);//user input
	printf("Enter your Stat subjects  marks : ");
	scanf("%d",&Stat);//user input
	printf("Enter your Economics subjects  marks : ");
	scanf("%d",&Economics);//user input
	printf("Enter your B.A. subjects  marks : ");
	scanf("%d",&BA);//user input
	printf("Enter your S.P. subjects  marks : ");
	scanf("%d",&SP);//user input
	
	
	int total = Account + Stat + Economics + BA + SP;
	printf("Your total marks is : %d\n",total);
	int per = total / 5;
	printf("Your Percentage is  : %d\n",per);
	
	if(per>=90)
	{
		printf(" Your Grade is A ");//perentage according grades
	}
	else if(per>=80)
	{
		printf(" Your Grade is B ");
	}
	else if(per>=70)
	{
		printf(" Your Grade is C ");
	}
	else if(per>=60)
	{
		printf(" Your Grade is D ");
	}
	else if(per>=50)
	{
		printf(" Your Grade is E ");
	}
	else
	{
		printf("Your Grade is F ");
	}
}