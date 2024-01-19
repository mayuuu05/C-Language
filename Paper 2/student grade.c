#include<stdio.h>
#include<conio.h>

main()
{
	int Account , Stat , Economics , BA , SP ;
	printf("Account subjects  marks : ");
	scanf("%d",&Account);//user input
	printf("Stat subjects  marks : ");
	scanf("%d",&Stat);//user input
	printf("Economics subjects  marks : ");
	scanf("%d",&Economics);//user input
	printf("B.A. subjects  marks : ");
	scanf("%d",&BA);//user input
	printf("S.P. subjects  marks : ");
	scanf("%d",&SP);//user input
	
	
	int total = Account + Stat + Economics + BA + SP;
	printf("total marks is : %d\n",total);
	int per = (total*100) / 500;
	printf("Percentage is  : %d%\n",per);
	
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