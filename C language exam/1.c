#include<stdio.h>
#include<string.h>


struct birth_date
{
	char name[50];
	int date;
	int month;
	int year;
	int age;
};
void birth_detail()
{
	struct birth_date b[3];
	int i,age=0,l=0;
	
	for(i=0 ; i<3 ; i++)
	{
	    printf("\nEnter detail of person [%d]\n",i+1);	
		printf("Enter name : ");
		scanf("%s",&b[i].name);
		
		m:
		printf("Enter birthmonth (berween 1 to 12) :");
		scanf("%d",&b[i].month);
		
		if(b[i].month>=1 && b[i].month<=12)
		{
		}
		else
		{
			printf("Enter month between 1 to 12 !");
			goto m;
		}
		
		y:
		printf("Enter birthyear (between 1924 to 2024) :");
		scanf("%d",&b[i].year);
		
		if(b[i].year>=1924 && b[i].year<=2024)
		{
		}
		else
		{
			printf("Enter year between 1924 to 2024 !");
			goto y;
		}
		start:
		
		if(b[i].month>=1 && b[i].month<=12)
		{
			if(b[i].year == 2024)
			{
				if(b[i].month==1)
				{
					printf("Enter birthdate (between 1 to 20) :");
					scanf("%d",&b[i].date);
					
					if(b[i].date>=1 && b[i].date<=23)
					{
						
					}
					else
					{
						printf("Enter valid date !!");
						goto start;
					}
				}
				else
				{
					printf("Enter the current date !!\n");
					goto m;
				}
			}
		    
			else if(b[i].month == 4 || b[i].month == 6 || b[i].month == 9 || b[i].month == 11)
			{
				printf("Enterbirth date (1 to 30): ");
				scanf("%d",&b[i].date);
				
				if(b[i].date >= 1 && b[i].date <= 30)
				{	
				}
				else
				{
					printf("Enter the date between 1 to 30!!");
					goto start;
				}
			}
			
			else if(b[i].month== 1 || b[i].month == 3 || b[i].month == 5 || b[i].month == 7 || b[i].month == 8 || b[i].month == 10 || b[i].month == 12)
			{
				printf("Enter birth date (1 to 31): ");
				scanf("%d",&b[i].date);
				
				if(b[i].date >= 1 && b[i].date <= 31)
				{	
				}
				else
				{
					printf("Enter the date between 1 to 31 !!");
					goto start;
				}
			}
			else if(b[i].month == 2)
			{
				if(b[i].year % 4 == 0)
				{
					printf("Enter the  birth date (1 to 29) : ");
					scanf("%d",&b[i].date);
					
					if(b[i].date >= 1 && b[i].date <= 29)
					{
					}
					else
					{
						printf("Enter the birth date (1 to 29) !! ");
						goto start;
					}
				}
				else
				{
					printf("Enter the birth date (1 to 28) : ");
					scanf("%d",&b[i].date);
					
					if(b[i].date >= 1 && b[i].date <= 28)
					{
					}
					else
					{
						printf("Enter the student birth date (1 to 28) !! ");
						goto start;
					}
				}
		    }
			else
			{
				goto start;
			}
		}
		else
		{
			goto start;
		}
	}
	FILE *fp;
	fp = fopen("data.txt","w");
	
	for(i=0; i<3; i++)
	{
	
		printf("\n\nThe person %d details",i+1);
		fprintf(fp,"\n\nThe person %d details ",i+1);
		
		printf("\nName      : %s",b[i].name);
		fprintf(fp,"\nName      : %s",b[i].name);
	
		printf("\nBirthdate : %d/%d/%d",b[i].date,b[i].month,b[i].year);
		fprintf(fp,"\nBirthdate : %d/%d/%d",b[i].date,b[i].month,b[i].year);
		
		for(int j=b[i].year; j<2024; j++)
		{
			age++;
		}
		b[l].age = age;
		
		printf("\nAge       : %d",b[i].age);
		fprintf(fp,"\nAge       : %d",b[i].age);
		
		l++;
		age=0;
	}
	
}
main()
{
	birth_detail();
}