//A< WaP to create/simulate telecom call service conversation
//scenario using nested switch case.
#include<stdio.h>
#include<conio.h>

main()
{
	
	int call,language,issue,problem;
	
	printf(" telecom call service \n");
	
	printf(" Recieve or End: ");
	scanf("%d",&call);
	 
	switch(call)
	 {
	 	case 0:printf("Call ended");
		break;
	 	case 1:printf("Select your language : \n");
	 	      printf("1. Hindi\n");
	 	      printf("2. English\n");
	 	      scanf("%d",&language);
			
	    switch(language)
		{
			case 1: printf(" Namste!! me telecome service se bol rahi hun.\n");
		            printf(" Hum aapki kya sahayata kar sakte hai ?\n\n");
				    printf(" (1)Hamari service achhi lage to review batane k liye is number pe call kare: 1234567899\n");
	 	       	    printf(" (2)aapko koi samasya ho hamari service se toh is number par call kare      : 2323214251\n");
	 	       	   
	 	       	   printf("Kripia kar k uttar de:");
	 	       	   scanf("%d",&issue);
	 	       	   
	 	       	   switch(issue)
	 	       	   {
	 	       	   	 case 0:printf("Sukriya apka review batane k liye");
	 	       	   	 break;
	 	       	   	 case 1:printf("jald se jald apki samsya ka samadhan karenge..Dhaniyvad");
	 	       	   	 break;
				   }
	 	 	break;			
		    case 2 : printf("Hello!! I am talking to the Telecome Service \n");
			         printf("How can i help you?\n");
	 		 		 printf("(1)If you like our service then call this number to give your review : 1234567899\n");
	        		 printf("(2)For complain make a call on this number                           : 2323214251\n");
	        		
	        		printf("Please tell us :");
	 	       	    scanf("%d",&problem);
	 	       	   
	 	       	   switch(problem)
	 	       	   {
	 	       	   	 case 0:printf("Thank you for give your review!!!");
	 	       	   	 break;
	 	       	   	 case 1:printf("We will take action towards your complian... thank you :)");
	 	       	   	 break;
				   }
			break;
    	}  
 
			
      }
	    	   
 	
	 
}