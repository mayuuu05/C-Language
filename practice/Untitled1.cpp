//A< WaP to create/simulate telecom call service conversation
//scenario using nested switch case.
#include<stdio.h>
#include<conio.h>

main()
{
	int language;
	
	printf(" - telecom call service - " );
	
	int call;
	printf("Recieve or End");
	scanf("%d",&call);
	
	switch (call)
	{
		case 0:printf("call Ended");
		break;
		case 1:printf("Select your language!!\n");
		       printf("1] Hindi\n");
		       printf("2] English\n");
		       printf("3] Gujtari");
		       scanf("%d",&language);
		       
	switch(language)
	{
		case 1:printf("Namste!! Hum aapki kya sahayata kar sakte hai?\n");
		    
	}
	}
	
}